#ifndef THcLADGEMPlane_h
#define THcLADGEMPlane_h

#include "THaSubDetector.h"

class TClonesArray;

class THcLADGEMPlane : public THaSubDetector {
 public:
  THcLADGEMPlane( const char* name, const char* description="",
		  THaDetectorBase* parent = nullptr );
  
  virtual ~THcLADGEMPlane();
  
  virtual void   Clear( Option_t* opt ="" );
  virtual Int_t  Decode( const THaEvData& );
  virtual Int_t  CoarseProcess( TClonesArray& tracks );
  virtual Int_t  FineProcess( TClonesArray& tracks );

 protected:

  virtual Int_t  ReadDatabase( const TDatime& date );
  virtual Int_t  DefineVariables( EMode mode = kDefine );
  
  ClassDef(THcLADGEMPlane,0);
};

#endif /* THcLADGEMPlane_h */
