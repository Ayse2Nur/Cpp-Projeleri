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
	if(dec!=0){//sayý 0'a eþit deðilse iþlemler yapýlýr.
		kalan=dec%2;//2'ye modunu almamýzýn nedeni kalanýn sadece 1 ve 0 olmasý için. binary sayýlar 1 ve 0 lardan oluþur.
		binary=binary+kalan*carpan;
		carpan=carpan*10;
		binary_cevir(dec/2);
	}
	return binary;//binary deðeri döndürür.
}
