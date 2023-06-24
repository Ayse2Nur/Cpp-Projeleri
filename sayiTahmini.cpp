#include <iostream>
#include <stdlib.h>//rastgele(random) sayı üretebilmesi için gerekli kütüphanedir.
#include<time.h>//tarih ve saat işlevleri için gerekli kütüphanedir.
using namespace std;
int main() {
	int tahmin;
	char cevap='e';
	srand(time (NULL)); //uygulama her çalıştığında zamana göre rastgele bir sayı üretilir.
	while (cevap=='e'){// e karekterine bastıkça döngü devam eder.
		int rastgele_sayi=rand()%100;//(0,100) arasında sayı belirler.
		cout<<"0 ile 100 arasinda bir sayi tuttum."<<endl;
		cout<<"Hadi tahmin et:";
		cin>>tahmin;
		while(tahmin !=rastgele_sayi){//rastgele üretilen sayı tahmin edilen sayıya eşit olana kadar döngü devam etmesi için
			if(tahmin<rastgele_sayi){ //tahmin edilen sayı rastgele üretilen sayıdan küçükse
				cout<<tahmin<<"Tuttugum sayidan kucuk."<<endl;//ekrana Tuttuğum sayidan kucuk yazar.
			}
			else{
				cout<<tahmin<<"Tuttugum sayidan buyuk."<<endl;//değilse Tuttugum sayidan buyuk yazar.
			}
			cout<<"Tekrar tahmin et:";
			cin>>tahmin;
		}
		cout<<"Buldun tebrikler. Tuttugum sayi "<<rastgele_sayi<<" idi. "<<endl;
		cout<<"Yeniden oynamak ister misin?"<<endl;
		cout<<"(Evet: e, Hayir: h): ";
		cin>>cevap;
	}
	cout<<"Gule gule..."<<endl;
	return 0;
}

