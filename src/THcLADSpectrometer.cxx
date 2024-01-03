#include "THcLADSpectrometer.h"

THcLADSpectrometer::THcLADSpectrometer( const char* name, const char* description ) :
  THaSpectrometer(name, description)
{
  // default constructor 

}

//____________________________________________________________________
THcLADSpectrometer::~THcLADSpectrometer()
{
  // Destructor

  DefineVariables( kDelete );
  
}

//____________________________________________________________________
void THcLADSpectrometer::Clear( Option_t* opt )
{

}

//____________________________________________________________________
Int_t THcLADSpectrometer::DefineVariables( EMode mode )
{

  return 0;
}

//____________________________________________________________________
Int_t THcLADSpectrometer::ReadDatabase( const TDatime& date )
{

  return kOK;

}

//____________________________________________________________________

Int_t THcLADSpectrometer::Decode( const THaEvData& evdata )
{

  return THaSpectrometer::Decode(evdata);

}

//____________________________________________________________________
Int_t THcLADSpectrometer::FindVertices( TClonesArray& tracks )
{

  fNtracks = tracks.GetLast() + 1;
  
  // add more 
  // HallC spectrometer chooses between 3 different method to select best track
  // depends
  // (see THcHallCSpectrometer)
  
  return 0;
}

ClassImp(THcLADSpectrometer)
