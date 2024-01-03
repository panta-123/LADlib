#ifndef THcLADHodoscope_h
#define THcLADHodoscope_h

#include "THaNonTrackingDetector.h"
#include "THcHitList.h"

class THcLADHodoscope : public THaNonTrackingDetector, public THcHitList {
 public:

  THcLADHodoscope( const char* name, const char* description = "",
		   THaApparatus* apparatus = nullptr );
  virtual ~THcLADHodoscope();

  virtual Int_t   Decode( const THaEvData& );
  virtual EStatus Init( const TDatime& date );
  virtual void    Clear( Option_t* opt="" );
  virtual Int_t   End(THaRunBase* run=0);

  virtual Int_t CoarseProcess( TClonesArray& tracks );
  virtual Int_t FineProcess( TClonesArray& tracks );

 protected:

  virtual Int_t DefineVariables( EMode mode = kDefine );
  virtual Int_t ReadDatabase( const TDatime& date );

  ClassDef(THcLADHodoscope,0)

};

#endif /* THcLADHodoscope_h */
