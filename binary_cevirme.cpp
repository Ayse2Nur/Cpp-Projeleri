#include <iostream>
using namespace std;
int binary_cevir(int);
int main(){
	int binarySayi;
	int decimalSayi;
	cout<<"En fazla 3 basamakli bir sayi giriniz:";
	cin>>decimalSayi;
	binarySayi=binary_cevir(decimalSayi);
	cout<<"Decimal sayinin binary karsiligi: "<<binarySayi;
	return 0;
}
int binary_cevir(int dec){
	static int binary, kalan, carpan=1;
	if(dec!=0){//say� 0'a e�it de�ilse i�lemler yap�l�r.
		kalan=dec%2;//2'ye modunu almam�z�n nedeni kalan�n sadece 1 ve 0 olmas� i�in. binary say�lar 1 ve 0 lardan olu�ur.
		binary=binary+kalan*carpan;
		carpan=carpan*10;
		binary_cevir(dec/2);
	}
	return binary;//binary de�eri d�nd�r�r.
}
