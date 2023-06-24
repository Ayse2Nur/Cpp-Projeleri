#include <iostream>
#include <iomanip>//giri�-��k�� birimlerinin belirli formatta yazd�rma fonksiyonlar�n� i�eren bir k�t�phanedir. setprecision() gibi
#include<cmath>//matematiksel fonksiyonlar� kullanmak i�in k�t�phanedir.
using namespace std;
  
  struct nokta{
  	int x, y;
  };
  void bilgileri_al(struct nokta *n){
  	//*n yap�s� i�aret�i de�i�ken oldu�u i�in �ye de�i�kenlerine this operat�r�(->) ile ula��l�yor.
  	cin>>n->x>>n->y;
  }
  double uzaklik_hesapla(struct nokta *n1, struct nokta *n2){
  	int x_fark=abs(n1->x-n2->x);
  	int y_fark=abs(n1->y-n2->y);
  	return sqrt(pow(x_fark, 2)+pow(y_fark,2));
  }
int main() {
	struct nokta nokta1, nokta2;
	cout<<"1. nokta koordinatlarini giriniz: ";
	bilgileri_al(&nokta1);
	cout<<"2. nokta koordinatlarini giriniz: ";
	bilgileri_al(&nokta2);
	cout<<fixed<<setprecision(2);
	cout<<"noktalar arasi uzunluk: "<<uzaklik_hesapla(&nokta1, &nokta2);
	return 0;
}
