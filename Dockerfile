FROM --platform=linux/amd64 almalinux:9.2


ARG LADlib_VERSION=main
ARG HCANA_REPO_NAME=hcana
ARG HCANA_VERSION=develop

SHELL ["/bin/bash", "-c"]
ADD http://pki.jlab.org/JLabCA.crt /etc/pki/ca-trust/source/anchors/JLabCA.crt
RUN update-ca-trust
RUN dnf update -y
RUN dnf -y install 'dnf-command(config-manager)'
RUN dnf -y install  epel-release  dnf-plugins-core
RUN dnf config-manager --set-enabled crb


RUN dnf -y install epel-release  git g++ cmake gcc-c++ make root root-mathcore root-montecarlo-eg \
            root-mathmore root-gui root-hist root-physics root-genvector  python3-pip && \
            dnf clean all && \
            rm -rf /var/cache/dnf

RUN git clone https://github.com/JeffersonLab/hcana.git --branch ${HCANA_VERSION} /${HCANA_REPO_NAME}-${HCANA_VERSION}
WORKDIR "/${HCANA_REPO_NAME}-${HCANA_VERSION}"
RUN git checkout $(git describe --abbrev=0)
RUN git submodule init && git submodule update
SHELL ["/bin/bash", "-c"]
RUN cmake -DCMAKE_INSTALL_PREFIX=/usr/local/hcana -B build  -S /${HCANA_REPO_NAME}-${HCANA_VERSION}
RUN cmake --build build -j8
RUN cmake --install build
ENV PATH="/usr/local/hcana/bin:/usr/bin/root:$PATH"
ENV LD_LIBRARY_PATH="/usr/local/hcana/lib64:$LD_LIBRARY_PATH"
ENV ANALYZER=/${HCANA_REPO_NAME}-${HCANA_VERSION}/podd
ENV HCANALYZER=/${HCANA_REPO_NAME}-${HCANA_VERSION}
WORKDIR "/${HCANA_REPO_NAME}-${HCANA_VERSION}"

RUN git clone https://github.com/JeffersonLab/LADlib.git --branch LADlib_VERSION /LADlib
WORKDIR "/LADlib"
RUN cmake -B BUILD -S . -DCMAKE_INSTALL_PREFIX=/usr/local/LADlib
RUN cmake --build BUILD -j4
RUN cmake --install BUILD
ENV LD_LIBRARY_PATH="/usr/local/LADlib/lib64:$LD_LIBRARY_PATH"
RUN pip3 install notebook numpy uproot --user
COPY containers/lad-shell /usr/bin/lad-shell
COPY containers/entrypoint.sh /usr/bin/entrypoint.sh
COPY containers/lad-env.sh /etc/lad-env.sh
COPY containers/singularity.d /.singularity.d

RUN chmod +x /usr/bin/entrypoint.sh
RUN chmod +x /usr/bin/lad-shell
RUN chmod +x /etc/lad-env.sh

ENTRYPOINT ["/usr/bin/entrypoint.sh"]
CMD ["bash", "--rcfile", "/etc/profile", "-l"]
WORKDIR /
SHELL ["/usr/bin/lad-shell"]
