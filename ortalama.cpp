#include <iostream>
#include <iomanip>//Giri� -��k�� birimlerininbelirli bir formatta yazd�rma fonksiyonlar�n�(setw()-width(),setfill(), setbase()-resetionsflags(),setf()-unsutf(),setiosflags())
//i�eren bir k�t�phanedir.
using namespace std;

float ortalama_hesapla(int n);//fonksiyon prototipi
int main() {
	int n;
	cout<<"Kac sayi gireceksiniz: ";
	cin>>n;
	cout<<fixed<<setprecision(2);//virg�lden sonra iki basamak yaz�lmas�n� sa�lar.
	cout<<"Girilen sayilarin ortalamasi: "<<ortalama_hesapla(n);
	return 0;
}
float ortalama_hesapla(int n){//fonksiyon
	int sayi;
	float toplam=0;
	cout<<"Sayilari giriniz: ";
	for(int i=0; i<n; ++i){//belirledi�imiz miktarda say�y� i�lemesi i�in d�ng�.
		cin>>sayi;
		toplam+=sayi;
	}
	return toplam/n;
}
