#include <iostream>
using namespace std;
int en_buyuk_sayi(int n);//fonksiyon prototipi

int main() {
	int n;
	cout<<"Kac sayi gireceksiniz: ";
	cin>>n;
	cout<<"Girilen sayilar arasinde en buyugu: "<<en_buyuk_sayi(n);
	return 0;
}
//Kullan�c� n tane say� girer ve her bir say� en buyuk say� ile k�yaslan�r. E�er say� en b�y�kten daha b�y�kse yeni en b�y�k say�ya o atan�r.
int en_buyuk_sayi(int n){//fonksiyon
	int enBuyuk=0;
	int sayi;
	cout<<"Sayileri giriniz: ";
	for(int i=0; i<n; ++i){//girilmek istenen kadar say� i�in d�ng�.
		cin>>sayi;
		//e�er sayi enBuyukten b�y�kse sayi yeni enBuyuk de�er olur.
		if(sayi>enBuyuk)
		enBuyuk=sayi;
	}
	return enBuyuk;
}
