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
void THcLADHodoscope::Clear( Option_t* opt="" )
{

}

//_________________________________________________
THaAnalysisObject::EStatus THcLADHodoscope::Init( const TDatime& date )
{

}

//_________________________________________________
Int_t THcLADHodoscope::End(THaRunBase* run)
{
  // Do we really need this function?

}

//_________________________________________________
Int_t THcLADHodoscope::DefineVariables( EMode mode )
{


}

//_________________________________________________
Int_t THcLADHodoscope::ReadDatabase( const TDatime& date )
{

  return kOK;

}

//_________________________________________________
Int_t THcLADHodoscope::Decode( const THaEvData& )
{

}

//_________________________________________________
Int_t THcLADHodoscope::CoarseProcess( TClonesArray& tracks )
{

}

//_________________________________________________
Int_t THcLADHodoscope::FindProcess( TClonesArray& tracks )
{

}

ClassImp(THcLADHodoscope)

