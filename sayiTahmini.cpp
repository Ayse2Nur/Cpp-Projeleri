#include <iostream>
#include <stdlib.h>//rastgele(random) say� �retebilmesi i�in gerekli k�t�phanedir.
#include<time.h>//tarih ve saat i�levleri i�in gerekli k�t�phanedir.
using namespace std;
int main() {
	int tahmin;
	char cevap='e';
	srand(time (NULL)); //uygulama her �al��t���nda zamana g�re rastgele bir say� �retilir.
	while (cevap=='e'){// e karekterine bast�k�a d�ng� devam eder.
		int rastgele_sayi=rand()%100;//(0,100) aras�nda say� belirler.
		cout<<"0 ile 100 arasinda bir sayi tuttum."<<endl;
		cout<<"Hadi tahmin et:";
		cin>>tahmin;
		while(tahmin !=rastgele_sayi){//rastgele �retilen say� tahmin edilen say�ya e�it olana kadar d�ng� devam etmesi i�in
			if(tahmin<rastgele_sayi){ //tahmin edilen say� rastgele �retilen say�dan k���kse
				cout<<tahmin<<"Tuttugum sayidan kucuk."<<endl;//ekrana Tuttu�um sayidan kucuk yazar.
			}
			else{
				cout<<tahmin<<"Tuttugum sayidan buyuk."<<endl;//de�ilse Tuttugum sayidan buyuk yazar.
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

