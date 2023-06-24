#include<iostream> 
using namespace std;
 // Graf veri yapisi kodum 
 struct Dugum {
 int veri;
  Dugum *baglanti; 
  Dugum(int veri)
  {
   this->veri=veri;
baglanti=NULL;
 }
  }; 
  struct BagliListe {
   Dugum *bas;
BagliListe()
 {
  bas=NULL; 
  } 
  }; 
  struct Graf { 
  int tepeSayisi; // Kose/tepe (vertex) sayisi
   BagliListe *tepeListeleri; // Her bir tepeye bagli diger tepelerin listesi (bagli liste yapilari icinde tutuyoruz) 
Graf(int tepeSayisi) {
 this->tepeSayisi=tepeSayisi;
tepeListeleri=new BagliListe[tepeSayisi]; 
} 
void kenarEkle(int ilkUctaki, int ikinciUctaki) // iki tepeyi birbirine baglayan bir kenar (edge)
 { 
 // Tepelerin bagli oldugu tepeleri tutacak olan bagli listelere ekleme yapacagiz 
 Dugum *yeniDugum1=new Dugum(ilkUctaki); 
 Dugum *yeniDugum2=new Dugum(ikinciUctaki);
 ilkUctaki--; 
 ikinciUctaki--;//indisleri 0'dan baþladýðý için
 if(tepeListeleri[ikinciUctaki].bas==NULL)
 tepeListeleri[ikinciUctaki].bas=yeniDugum1;
 else{
 	yeniDugum1->baglanti=tepeListeleri[ikinciUctaki].bas;
 	tepeListeleri[ikinciUctaki].bas=yeniDugum1;
 }
}
};
int main(){
	int tepeS, kenarS;
	cout<<"Tepe sayisini giriniz:";
	cin>>tepeS;
	Graf *g=new Graf(tepeS);
	cout<<"kenar sayisini giriniz:";
	cin>>kenarS;
	int dugumNo1, dugumNo2;
	for(int i=0; i<kenarS; i++){
	cout<<i+1<<" . kenarin baglandigi tepeyi giriniz:";
	cin>>dugumNo1>>dugumNo2;
	g->kenarEkle(dugumNo1,dugumNo2);
}
//oluþturulan grafýn tepelerini ve baðlantýlarýný goruntuleyelim
cout<<endl<<endl<<"olusturulan graf:"<<endl;
for(int i=0; i<tepeS; i++){
	cout<<"Tepe ["<<i+1<<"]\t{";
	Dugum *d=g->tepeListeleri[i].bas;
	while(d!=NULL){
		cout<<d->veri<<" ";
		d=d->baglanti;	
	}
	cout<<"}"<<endl;
}
		
}
