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
	for(int i=0; i<n; ++i){/*girilmek istenen kadar sayý arasýnda bir ölçü almasý için.
    mesela 5 sayý girmek istiyorum deyip 5'ten fazla sayý girdiði zaman sadece ilk 5 sayý arasýnda sýralama yapar.*/
		cin>>sayi;
		if(sayi<enKucuk)//sayý enKucuk'ten küçükse
		enKucuk=sayi;//sayi enKucuk'e atanýr ve yeni en küçük sayýmýz olur.
	}
	return enKucuk;//enKucuk'ü döndürür.
}
