#include "THcLADHodoPlane.h"

//_______________________________________________________________________________________
THcLADHodoPlane::THcLADHodoPlane( const char* name, const char* description,
				  THaDetectorBase* parent) :
  THaSubDetector(name, description, parent)
{
  // constructor

}

//_______________________________________________________________________________________
THcLADHodoPlane::~THcLADHodoPlane()
{
  // destructor

}

//_______________________________________________________________________________________
void THcLADHodoPlane::Clear( Option_t* opt )
{  

}

//_______________________________________________________________________________________
Int_t THcLADHodoPlane::Decode( const THaEvData& evdata )
{

  // does nothing, decoding is done in THcLADHodoPlane::ProcessHits that is called by THcLADHodoscope::Decode
  // Remove it? unless it's needed by analzer

  return 0;
}

//_______________________________________________________________________________________
THaAnalysisObject::EStatus THcLADHodoPlane::Init( const TDatime& date )
{

  if( IsZombie() )
    return fStatus = kInitError;

  EStatus status;
  if( (status=THaSubDetector::Init( date )) )
    return fStatus = status;
  
  return fStatus = kOK;

}

//_______________________________________________________________________________________
Int_t THcLADHodoPlane::ReadDatabase( const TDatime& date )
{

  // Read database files as needed here

  return 0;

}

//_______________________________________________________________________________________
Int_t THcLADHodoPlane::DefineVariables( EMode mode )
{

  /*
  RVarDef vars[] = {
  };

  return DefineVarsFromList( vars, mode );
   */

  return 0;

}

//_______________________________________________________________________________________
Int_t THcLADHodoPlane::CoarseProcess( TClonesArray& tracks )
{

  return 0;
}

//_______________________________________________________________________________________
Int_t THcLADHodoPlane::FineProcess( TClonesArray& tracks )
{

  return 0;
}

//_______________________________________________________________________________________
Int_t THcLADHodoPlane::ProcessHits( TClonesArray* rawhits )
{

  return 0;

}

ClassImp(THcLADHodoPlane)
