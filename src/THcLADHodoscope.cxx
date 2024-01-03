#include "THcLADHodoscope.h"

THcLADHodoscope::THcLADHodoscope( const char* name, const char* description,
				  THaApparatus* apparatus) :
  THaNonTrackingDetector(name, description, apparatus)
{
  // Constructor

}

//_________________________________________________
THcLADHodoscope::~THcLADHodoscope()
{
  // Destructor

}

//_________________________________________________
void THcLADHodoscope::Clear( Option_t* opt )
{

}

//_________________________________________________
THaAnalysisObject::EStatus THcLADHodoscope::Init( const TDatime& date )
{

  return kOK;
}

//_________________________________________________
Int_t THcLADHodoscope::End(THaRunBase* run)
{
  // Do we really need this function?

  return 0;
}

//_________________________________________________
Int_t THcLADHodoscope::DefineVariables( EMode mode )
{

  return 0;

}

//_________________________________________________
Int_t THcLADHodoscope::ReadDatabase( const TDatime& date )
{

  return kOK;

}

//_________________________________________________
Int_t THcLADHodoscope::Decode( const THaEvData& )
{

  return 0;
}

//_________________________________________________
Int_t THcLADHodoscope::CoarseProcess( TClonesArray& tracks )
{
  return 0;

}

//_________________________________________________
Int_t THcLADHodoscope::FineProcess( TClonesArray& tracks )
{

  return 0;
}

ClassImp(THcLADHodoscope)

