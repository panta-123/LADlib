#include "THcLADHodoHit.h"

#include <iostream>

//___________________________________________________________________
THcLADHodoHit::THcLADHodoHit( Int_t postdc, Int_t negtdc,
			      Double_t posadc, Double_t negadc,
			      Int_t ipad, THcLADHodoPlane* hp) :
  fPosTDC(postdc), fNegTDC(negtdc), fPosADC_Ped(posadc), fNegADC_Ped(negadc),
  fPaddleNumber(ipad), fPlane(hp)
{
  

}

//___________________________________________________________________
THcLADHodoHit::~THcLADHodoHit()
{

}

ClassImp(THcLADHodoHit)
