#include <iostream>
#include <time.h>//tarih ve saat fonksiyonarının bildirimleri, sembolik sabitler ve standart yapılar <time.h> başlık dosyasında tanımlıdır.
using namespace std;
void gelecekArtikYillariHesapla(int year);
void gecmisArtikYillariHesapla(int year);
int main(){
	time_t now =time(0);//time_t sayısal bir tip(genellikle long int) olup zaman bilgisini temsil eder. 
	//local time alınıyor. tm kütüphanenin struct'ıdır.
	tm *Itm=localtime(&now);
	//Bu yılı sistemden aldığımız bilgiler göre buluyoruz.
	int year=1900+Itm->tm_year;
	cout<<"Bu yil: "<<year<<endl;
	gecmisArtikYillariHesapla(year);
	gelecekArtikYillariHesapla(year);
	return 0;
}
void gelecekArtikYillariHesapla(int year){//gelecek artık yılı hesaplayan fonksiyon
	cout<<"\n Gelecek artik yillar"<<endl;
	for(int i=year; i<year+1000; i++){
		if(i%4==0 && i%100!=0 || i%400==0){
			cout<<i<<"\t";
		}
	}
}
void gecmisArtikYillariHesapla(int year){//geçmiş artık yılı hesaplayan fonksiyon.
	cout<<"\n Gecmis artik yillar "<<endl;
	for(int i=year; i>0; i--){
    	if(i%4==0 && i%100!=0 || i%400==0){//eğer 4'ün tam katı ise artık yıldır. istisna olarak 100'ün tam katı olan yıllardan sadece 400'ün tam katı olan yıllar
    	//artık yıldır.
    		cout<<i<<"\t";
		}	
	}
}
