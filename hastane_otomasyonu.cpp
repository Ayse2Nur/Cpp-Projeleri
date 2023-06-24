#include <iostream>
#include <fstream>//dosya giriþ çýkýþý
#include <iomanip>//setw fonk program görüntüsü düzeni için
#include <stdlib.h>//srand fonk
#include <time.h>//srand(time(0)) fonk
using namespace std;
void hastaEkle();//girilen bilgilere sahip hastayý direkt kaydeder.
void hastaTaburcu();//girilen hasta numarasýna ait hastayý taburcu ederken kaydedilsin mi diye sorar.
void ekranaYazdir(short, char[], char[], short, char[]);//hastaliste adlý tex'ten okuyup cout ile ekrana yazar.
void listeYazdir();//hasta listesini ekrana yazdýrýr ayrýca hasta taburcunun içinde de çalýþýr, hasta no girmeye yardýmcý olur.
void listeGuncele();//temp dosyasýný ana dosyaya yazdýrýr.
void taburcuOlanHasta(short, char[], char[], short, char[]);//temp dosyasýný çýktý alýr.
int main(){
	int islem=0;
	char secim;
	do{
		do{
		cout<<"Islem seciniz. \n 1-Hasta ekleme 2-Hasta Taburcu 3-Hasta listeleme"<<endl<<"Seciminiz: ";
		cin>>islem;	
	}while(islem!=1 && islem!=2 && islem!=3);//kullanýcýyý kýsýtlar
	cout<<endl;
	switch(islem){
	case 1: 
	hastaEkle();
	break;
	case 2:
	hastaTaburcu();
	break;
	case 3:
	listeYazdir();
	break;
	}
	cin.clear();//cin ile yaþanan sorunlarý çözer.
	cout<<endl<<"Baska islem yapacak misiniz? (y/any) Seciminiz: ";
	cout<<"islem seciniz.";
	cin>>secim;
	cout<<endl;
}while(secim=='y' || secim=='Y');//y  veya Y girilmediðinde program kapanýr.
return 0;
}
void hastaEkle(void){
	ofstream hastaCikti("hastaListe.txt",ios::app);
	cout<<"Hasta girisi yapiniz. Cikis yapmak icin Ctrl+z kombinasyonunu kullaniniz."<<endl;
	cout<<"Gerekenler: adSoyad, kan, yas, telNo"<<endl;
	cout<<"Ornek giris: AliAtabak AB+ 40 0000000000";
	srand(time(0));
	char adSoyad[15], kan[5], telNo[10];
	short yas, hastaNo=rand()%1000;
	cout<<endl<<hastaNo<<" ";
	cin>>adSoyad>>kan>>yas>>telNo;
	cout<<hastaCikti<<endl<<hastaNo<<" "<<adSoyad<<" "<<kan<<" "<<yas<<" "<<telNo;
	hastaCikti.close();
}
void hastaTaburcu(void){
	char adSoyad[15], kan[5], telNo[10];
	short yas, hastaNo, sorgu;
	bool kontrol=0;
	listeYazdir();
	ifstream hastaGirdi("hastaListe.txt", ios::in);
	ofstream taburcuCikti("temp.txt",ios::trunc);//temp'i boþaltýr.
	cout<<"\nTaburcu edilecek hastaNo'yu giriniz: ";
	cin>>sorgu;
	cout<<endl;
	while(hastaGirdi>>hastaNo>>adSoyad>>kan>>yas>>telNo){
		if(hastaNo==sorgu){
			cout<<adSoyad<<"isimli hasta bulundu."<<endl;
			kontrol=1;
		}
		else{
			taburcuOlanHasta(hastaNo, adSoyad, kan, yas, telNo);
		}
	}
	if(!kontrol)
	cout<<"\a"<<"taburcu edilmek istenen hasta bulunamadi."<<endl;
	else
void listeGuncelle(void);
	hastaGirdi.close();
}	
void ekranaYazdir(short h, char a[], char k[], short y, char t[]){
	cout<<setw(3)<<h<<setw(15)<<a<<setw(6)<<k<<setw(6)<<y<<setw(15)<<t<<endl;
}
 void listeYazdir(void){
 	char adSoyad[15], kan[5], telNo[10];
 	short yas, hastaNo, sorgu;
 	ifstream hastaGirdi("hastaListe.txt", ios::in);
 	while(!hastaGirdi.eof()){
 		hastaGirdi>>hastaNo>>adSoyad>>kan>>yas>>telNo;
 		ekranaYazdir(hastaNo, adSoyad, kan, yas, telNo);
	 }
	 hastaGirdi.close();
	  }
	  void listeGuncelle(void){
	  	char kaydet;
	  	cout<<"Hasta taburcu edilsin mi? (y/any) Seciminiz: ";
	  	cin>>kaydet;
	  	if(kaydet=='y'|| kaydet=='Y'){
	  		ifstream stream1("temp.txt");//kaynak dosya
	  		ofstream stream2("hastaListe.txt");//hedef dosya
	  		cout<<stream2<<stream1.rdbuf();//kaynaðý hedefe kopyaladý
		  }
	  }
	  void taburcuOlanHasta(short h, char a[], char k[], short y, char t[]){
	  	ofstream taburcuCikti("temp.txt",ios::app);
	  	taburcuCikti<<endl<<h<<" "<<a<<" "<<k<<" "<<y<<" "<<t;
        taburcuCikti.close();
	  }
