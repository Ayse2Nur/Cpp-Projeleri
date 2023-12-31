#include <iostream>
#include <iomanip>//giri�-��k�� birimlerinin belirli formatlarda yazd�rma fonksiyonlar�n� i�eren bir k�t�phanedir. 
#include <cstring>//Karakter dizileri ile ilgili fonksiyon, veri t�r� ve makro tan�mlamalar� i�erir.

using namespace std;
#define MAX 1000 //Girdi olarak en fazla 1000 tane telefon bilgisi girilebilir.
struct cep_telefonu{//Bir cep telefonunun bilgilerini saklayabilen bir yap�dad�r. Cep telefonunun b�t�n �zellikleri maksimum 10 karekterlidir.
	char marka[10];
	char model[10];
	char isletim_sistemi[10];
	double dahili_bellek;
	double islemci_hizi;
	char kalite[10];
	char tasarim[10];
	int fiyat;
	double puan;
};
void puan_hesapla(struct cep_telefonu *telefonlar, int n){//Parametre olarak gelen cep telefonu dizisini ve bu dizinin uzunlu�unu kullanarak her bir cep telefonunun 
//fiyat performans�n� hesaplayan fonksiyondur.
	double k, a, is, db, ih, ka, ta;
	for (int i=0; i<n; ++i){
		k=telefonlar[i].fiyat/5.0;
		if(strncmp(telefonlar[i].isletim_sistemi,"Windows", 10)==0)
		is=0;
		else if(strncmp(telefonlar[i].isletim_sistemi,"Android", 10)==0)
		is=1;
		else if(strncmp(telefonlar[i].isletim_sistemi,"IOS", 10)==0)
		is=2;
		if(telefonlar[i].dahili_bellek>=128)
		db=4;
    	else if(telefonlar[i].dahili_bellek>=64)
    	db=3;
	   else if(telefonlar[i].dahili_bellek>=32)
	   db=2;
	   else if(telefonlar[i].dahili_bellek>=16)
	   db=1;
	   else
	   db=0;
	   if(telefonlar[i].islemci_hizi>=2.3)
	   ih=4;
	   else if(telefonlar[i].islemci_hizi>=2.0)
	   ih=3;
	   else if(telefonlar[i].islemci_hizi>=1.8)
	   ih=2;
	   else if(telefonlar[i].islemci_hizi>=1.5)
	   ih=1;
	   else
	   ih=0;
		if(strncmp(telefonlar[i].kalite, "kotu",10)==0)//telefonlar[i].kalite'nin i�aret etti�i karekter  ile kotu karekterinin en fazla 10 parametre
		//de�eri kar��la�t�r�l�rve ayn� ise 0 de�eri d�nd�r�r. strncmp fonksiyonun ile bunu yapar.
		ka=0;
		else if(strncmp(telefonlar[i].kalite, "orta",10)==0)
		ka=1;
		else if(strncmp(telefonlar[i].kalite, "iyi",10)==0)
		ka=2;
		else if(strncmp(telefonlar[i].kalite, "cokiyi",10)==0)
		ka=3;
		if(strncmp(telefonlar[i].tasarim, "kotu", 10)==0)
		ta=0;
		if(strncmp(telefonlar[i].tasarim, "orta", 10)==0)
		ta=1;
		if(strncmp(telefonlar[i].tasarim, "iyi", 10)==0)
		ta=2;
		if(strncmp(telefonlar[i].tasarim, "cokiyi", 10)==0)
		ta=3;
		a=k*is/2+k*db/4+k*ih/4+k*ka/3+k*ta/3;
		telefonlar[i].puan=a*100/telefonlar[i].fiyat;
	}
}
void puana_gore_sirala(struct cep_telefonu *telefonlar, int n){//Parametre olarak gelen cep telefonu dizisini ve bu dizinin uzunlu�unu kullanarak bu diziyi
//cep telefonlar�n�n fiyat performans de�erine g�re b�y�kten k����e do�ru s�ralayan fonksiyondur.
	struct cep_telefonu tmp;
	int puan1, puan2;
	for(int i=n-1; i>0; --i){
		for(int j=0; j<i; ++j){
			puan1=telefonlar[j].puan*100;
			puan2=telefonlar[j+1].puan*100;
			if(puan1<puan2){
				tmp=telefonlar[j];
				telefonlar[j]=telefonlar[j+1];
				telefonlar[j+1]=tmp;
			}
		}
	}
}
int main(){
	struct cep_telefonu cepler[MAX];
	int n;
	cout<<"Kac tane cep telefonu gireceksiniz? ";
	cin>>n;
	for(int i=0; i<n; ++i){
		cout<<"Telefonlarin bilgilerini giriniz: ";
		cin>>cepler[i].marka>>cepler[i].model>>cepler[i].isletim_sistemi;
		cin>>cepler[i].dahili_bellek>>cepler[i].islemci_hizi;
		cin>>cepler[i].kalite>>cepler[i].tasarim>>cepler[i].fiyat;
	}
	puan_hesapla(cepler, n);
	puana_gore_sirala(cepler, n);
	cout<<"Telefonlar: "<<endl;
	cout<<fixed<<setprecision(2);
	for(int i=0; i<n; ++i){
		cout<<cepler[i].puan<<" "<<cepler[i].marka<<" "<<cepler[i].model<<endl;
	}
	return 0;
}
