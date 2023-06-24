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
//Kullanýcý n tane sayý girer ve her bir sayý en buyuk sayý ile kýyaslanýr. Eðer sayý en büyükten daha büyükse yeni en büyük sayýya o atanýr.
int en_buyuk_sayi(int n){//fonksiyon
	int enBuyuk=0;
	int sayi;
	cout<<"Sayileri giriniz: ";
	for(int i=0; i<n; ++i){//girilmek istenen kadar sayý için döngü.
		cin>>sayi;
		//eðer sayi enBuyukten büyükse sayi yeni enBuyuk deðer olur.
		if(sayi>enBuyuk)
		enBuyuk=sayi;
	}
	return enBuyuk;
}
