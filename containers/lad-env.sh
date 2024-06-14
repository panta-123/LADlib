for i in /etc/profile.d/*.sh; do
  if [ -r "$i" ]; then
    . "$i"
  fi
done

## default PS1 preamble in case we can't find better info
PS1_PREAMBLE='lad-shell> '
export PS1=${PS1_PREAMBLE}'\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
export LS_COLORS='rs=0:di=01;34:ln=01;36:mh=00:pi=40;33'