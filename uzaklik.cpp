#include <iostream>
#include <iomanip>//giriþ-çýkýþ birimlerinin belirli formatta yazdýrma fonksiyonlarýný içeren bir kütüphanedir. setprecision() gibi
#include<cmath>//matematiksel fonksiyonlarý kullanmak için kütüphanedir.
using namespace std;
  
  struct nokta{
  	int x, y;
  };
  void bilgileri_al(struct nokta *n){
  	//*n yapýsý iþaretçi deðiþken olduðu için üye deðiþkenlerine this operatörü(->) ile ulaþýlýyor.
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
