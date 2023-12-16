#ifndef THcLADGEM_h
#define THcLADGEM_h

#include "THaTrackingDetector.h"

class THcLADGEM : public THaTrackingDetector, public THcHitList {
 public:

  THcLADGEM( const char* name, const char* description = "",
	     THaApparatus* apparatus = nullptr );
  virtual ~THcLADGEM();

  virtual Int_t   Decode( const THaEvData& );
  virtual EStatus Init( const TDatime& date );
  virtual void    Clear( Option_t* opt="" );
  virtual Int_t   CoarseTrack( TClonesArray& tracks );
  virtual Int_t   FineTrack( TClonesArray& tracks );

 protected:
  
  ClassDef(THcLADGEM,0)
    
};

#endif /* THcLADGEM_h */
