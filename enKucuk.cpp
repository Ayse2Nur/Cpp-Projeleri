#include <iostream>
using namespace std;
int en_kucuk_sayi(int n);//fonksiyon prototipi

int main() {
	int n;
	cout<<"Kac sayi gireceksiniz. ";
	 cin>>n;
	 cout<<"Girilen sayilarin en kucugu: "<<en_kucuk_sayi(n);
	return 0;
}
int en_kucuk_sayi(int n){//fonksiyon
	int enKucuk=1000000;
	int sayi;
	cout<<"Sayilari giriniz: ";
	for(int i=0; i<n; ++i){/*girilmek istenen kadar say� aras�nda bir �l�� almas� i�in.
    mesela 5 say� girmek istiyorum deyip 5'ten fazla say� girdi�i zaman sadece ilk 5 say� aras�nda s�ralama yapar.*/
		cin>>sayi;
		if(sayi<enKucuk)//say� enKucuk'ten k���kse
		enKucuk=sayi;//sayi enKucuk'e atan�r ve yeni en k���k say�m�z olur.
	}
	return enKucuk;//enKucuk'� d�nd�r�r.
}
