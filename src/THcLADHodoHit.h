#ifndef THcLADHodoHit_h
#define THcLADHodoHit_h

#include "TObject.h"
#include "THcLADHodoPlane.h"
#include "THcRawHodoHit.h"

class THcLADHodoHit : public TObject {
 public:

  THcLADHodoHit(Int_t postdc, Int_t negtdc, Double_t posadc, Double_t negadc,
		Int_t ipad, THcLADHodoPlane* hp);
  virtual ~THcLADHodoHit();
  
  Double_t GetPosADC()       const { return fPosADC_Ped; }
  Double_t GetNegADC()       const { return fNegADC_Ped; }
  Double_t GetPosADCpeak()   const { return fPosADC_Peak; }
  Double_t GetNegADCpeak()   const { return fNegADC_Peak; }
  Double_t GetPosADCtime()   const { return fPosADC_Time; }
  Double_t GetNegADCtime()   const { return fNegADC_Time; }
  Int_t    GetPosTDC()       const { return fPosTDC; }
  Int_t    GetNegTDC()       const { return fNegTDC; }
  Int_t    GetPaddleNumber() const { return fPaddleNumber; }
  Int_t    GetPaddleCenter() const { return fPaddleCenter; }

  void     SetPaddleCenter( Double_t padcenter ) { fPaddleCenter = padcenter; }
  void     SetPosADCpeak( Double_t adc )   { fPosADC_Peak = adc; }
  void     SetNegADCpeak( Double_t adc )   { fNegADC_Peak = adc; }  
  void     SetPosADCtime( Double_t ptime ) { fPosADC_Time = ptime; }
  void     SetNegADCtime( Double_t ptime ) { fNegADC_Time = ptime; }  

 protected:
			    
  Int_t    fPosTDC;
  Int_t    fNegTDC;
  Double_t fPosADC_Ped;  // Pedestal subtracted ADC
  Double_t fNegADC_Ped;
  Double_t fPosADC_Peak; // ADC peak amplitude
  Double_t fNegADC_Peak; // ADC peak amplitude
  Double_t fPosADC_Time; 
  Double_t fNegADC_Time; 

  Int_t    fPaddleNumber;
  Double_t fPaddleCenter;

  THcLADHodoPlane* fPlane;

 private:
  THcLADHodoHit( const THcLADHodoHit& );
  THcLADHodoHit& operator=( const THcLADHodoHit& );

  ClassDef(THcLADHodoHit,0)
};

#endif
