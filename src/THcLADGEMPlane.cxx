#include "THcLADGEMPlane.h"

//___________________________________________________________________________________
THcLADGEMPlane::THcLADGEMPlane( const char* name, const char* description,
				THaDetectorBase* parent ) :
  THaSubDetector(name, description, parent)
{
  // constructor

}

//___________________________________________________________________________________
THcLADGEMPlane::~THcLADGEMPlane()
{
  // destructor

}

//___________________________________________________________________________________
void THcLADGEMPlane::Clear( Option_t* opt )
{

}

//___________________________________________________________________________________
Int_t THcLADGEMPlane::ReadDatabase( const TDatime& date )
{

  return 0;
}

//___________________________________________________________________________________
Int_t THcLADGEMPlane::DefineVariables( EMode mode )
{

  if( mode == kDefine && fIsSetup ) return kOK;
  fIsSetup = ( mode == kDefine );
  
  /*
    RVarDef vars[] = {
    };

    return DefineVarsFromList( vars, mode );
   */

  return 0;
}

//___________________________________________________________________________________
Int_t THcLADGEMPlane::Decode( const THaEvData& evdata )
{

  return 0;
}

//___________________________________________________________________________________
Int_t THcLADGEMPlane::CoarseProcess( TClonesArray& tracks )
{

  return 0;
}

//___________________________________________________________________________________
Int_t THcLADGEMPlane::FineProcess( TClonesArray& tracks )
{

  return 0;
}

//___________________________________________________________________________________

ClassImp(THcLADGEMPlane)
