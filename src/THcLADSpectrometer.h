#ifndef THcLADSpectrometer_h
#define THcLADSpectrometer_h

/////////////////////////////////////////////////
//
// Skeleton class for HallC LAD spectrometer
//
/////////////////////////////////////////////////

#include "THaSpectrometer.h"

class THcLADSpectrometer : public THaSpectrometer {

public:
  THcLADSpectrometer(const char *name, const char *description);
  virtual ~THcLADSpectrometer();

  virtual void Clear(Option_t *opt = "");

  // In case we need to redefine these functions
  /*
  virtual Int_t CoarseReconstruct();
  virtual Int_t CoarseTrack();
  virtual Int_t Reconstruct();
  virtual Int_t Track();
  */

  virtual Int_t FindVertices(TClonesArray &tracks);
  virtual Int_t TrackCalc();
  virtual Int_t Decode(const THaEvData &);

  virtual Int_t DefineVariables(EMode mode = kDefine);
  virtual Int_t ReadDatabase(const TDatime &date);

protected:
  Int_t fNtracks;
  THcLADHodoscope* fHodo;
  THcLADGEM* fGEM;

  ClassDef(THcLADSpectrometer, 0)
};

#endif /* THcLADSpectrometer_h */
