#ifndef THcLADHodoscope_h
#define THcLADHodoscope_h

// rough class outline for LAD Hodoscope plane

class THcLADHodoPlane : public THaSubDetector {

 public:
  THcLADHodoPlane( const char* name, const char* description,
		   THaDetectorBase* parent = nullptr);
  virtual ~THcLADHodoPlane();

  virtual void    Clear( Option_t* opt="" );
  virtual Int_t   Decode( const THaEvData& );
  virtual EStatus Init( const TDatime& date );

  virtual Int_t CoarseProcess( TClonesArray& tracks );
  virtual Int_t FindProcess( TClonesArray& tracks );
  virtual Int_t ProcessHits( TClonesArray& rawhits );
  
 protected:
  
  virtual Int_t ReadDatabase( const TDatime& date );
  virtual Int_t DefineVariables( EMode mode = kDefine );

  ClassDef(THcLADHodoPlane,0);

};

#endif /* THcLADHodoscope_h */
