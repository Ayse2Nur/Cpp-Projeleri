#include <iostream>
#include <time.h>//tarih ve saat fonksiyonar�n�n bildirimleri, sembolik sabitler ve standart yap�lar <time.h> ba�l�k dosyas�nda tan�ml�d�r.
using namespace std;
void gelecekArtikYillariHesapla(int year);
void gecmisArtikYillariHesapla(int year);
int main(){
	time_t now =time(0);//time_t say�sal bir tip(genellikle long int) olup zaman bilgisini temsil eder. 
	//local time al�n�yor. tm k�t�phanenin struct'�d�r.
	tm *Itm=localtime(&now);
	//Bu y�l� sistemden ald���m�z bilgiler g�re buluyoruz.
	int year=1900+Itm->tm_year;
	cout<<"Bu yil: "<<year<<endl;
	gecmisArtikYillariHesapla(year);
	gelecekArtikYillariHesapla(year);
	return 0;
}
void gelecekArtikYillariHesapla(int year){//gelecek art�k y�l� hesaplayan fonksiyon
	cout<<"\n Gelecek artik yillar"<<endl;
	for(int i=year; i<year+1000; i++){
		if(i%4==0 && i%100!=0 || i%400==0){
			cout<<i<<"\t";
		}
	}
}
void gecmisArtikYillariHesapla(int year){//ge�mi� art�k y�l� hesaplayan fonksiyon.
	cout<<"\n Gecmis artik yillar "<<endl;
	for(int i=year; i>0; i--){
    	if(i%4==0 && i%100!=0 || i%400==0){//e�er 4'�n tam kat� ise art�k y�ld�r. istisna olarak 100'�n tam kat� olan y�llardan sadece 400'�n tam kat� olan y�llar
    	//art�k y�ld�r.
    		cout<<i<<"\t";
		}	
	}
}
