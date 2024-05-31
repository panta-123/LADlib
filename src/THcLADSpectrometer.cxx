#include "THcLADSpectrometer.h"

THcLADSpectrometer::THcLADSpectrometer(const char *name, const char *description) : THaSpectrometer(name, description) {
  // default constructor
}

//____________________________________________________________________
THcLADSpectrometer::~THcLADSpectrometer() {
  // Destructor

  DefineVariables(kDelete);
}

//____________________________________________________________________
void THcLADSpectrometer::Clear(Option_t *opt) {}

//____________________________________________________________________
Int_t THcLADSpectrometer::DefineVariables(EMode mode) { return 0; }

//____________________________________________________________________
Int_t THcLADSpectrometer::ReadDatabase(const TDatime &date) {
  static const char *const here = "THcLADSpectrometer::ReadDatabase";

#ifdef WITH_DEBUG
  cout << "In " + here << endl;
#endif

  const char *detector_name = "hod";
  // THaApparatus* app = GetDetector();
  THaDetector *det = GetDetector("hod");
  // THaDetector* det = app->GetDetector( shower_detector_name );

  if (dynamic_cast<THcLADHodoscope *>(det)) {
    fHodo = static_cast<THcLADHodoscope *>(det); // fHodo is a membervariable
  } else {
    Error("THcLADSpectrometer", "Cannot find lad hodoscope detector %s", detector_name);
    fHodo = NULL;
  }

  return kOK;
}

//____________________________________________________________________

Int_t THcLADSpectrometer::Decode(const THaEvData &evdata) { return THaSpectrometer::Decode(evdata); }

//____________________________________________________________________
Int_t THcLADSpectrometer::FindVertices(TClonesArray &tracks) {

  fNtracks = tracks.GetLast() + 1;

  // add more
  // HallC spectrometer chooses between 3 different method to select best track
  // depends
  // (see THcHallCSpectrometer)

  return 0;
}
//____________________________________________________________________
Int_t THcLADSpectrometer::TrackCalc() { return 0; }

ClassImp(THcLADSpectrometer)
