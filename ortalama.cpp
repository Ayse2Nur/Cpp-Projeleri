#include <iostream>
#include <iomanip>//Giriþ -çýkýþ birimlerininbelirli bir formatta yazdýrma fonksiyonlarýný(setw()-width(),setfill(), setbase()-resetionsflags(),setf()-unsutf(),setiosflags())
//içeren bir kütüphanedir.
using namespace std;

float ortalama_hesapla(int n);//fonksiyon prototipi
int main() {
	int n;
	cout<<"Kac sayi gireceksiniz: ";
	cin>>n;
	cout<<fixed<<setprecision(2);//virgülden sonra iki basamak yazýlmasýný saðlar.
	cout<<"Girilen sayilarin ortalamasi: "<<ortalama_hesapla(n);
	return 0;
}
float ortalama_hesapla(int n){//fonksiyon
	int sayi;
	float toplam=0;
	cout<<"Sayilari giriniz: ";
	for(int i=0; i<n; ++i){//belirlediðimiz miktarda sayýyý iþlemesi için döngü.
		cin>>sayi;
		toplam+=sayi;
	}
	return toplam/n;
}
