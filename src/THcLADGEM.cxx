#include "THcLADGEM.h"

//____________________________________________________________
THcLADGEM::THcLADGEM( const char* name, const char* description,
		      THaApparatus* apparatus) :
  THaTrackingDetector(name, description, apparatus)
{

  // constructor
}

//____________________________________________________________
THcLADGEM::~THcLADGEM()
{
  // Destructor

}

//____________________________________________________________
THaAnalysisObject::EStatus THcLADGEM::Init( const TDatime& date)
{

  return kOK;
}

//____________________________________________________________
void THcLADGEM::Clear( Option_t* opt )
{

}

//____________________________________________________________
Int_t THcLADGEM::Decode( const THaEvData& evdata )
{

  return 0;
}

//____________________________________________________________
Int_t THcLADGEM::CoarseTrack( TClonesArray& tracks )
{

  return 0;
}

//____________________________________________________________
Int_t THcLADGEM::FineTrack( TClonesArray& tracks )
{

  return 0;
}

//____________________________________________________________

ClassImp(THcLADGEM)
