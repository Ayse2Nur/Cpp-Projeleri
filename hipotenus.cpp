#include <iostream>
#include <math.h>
using namespace std;
float hipotenus_bul(int x, int y){//paremetre alan fonksiyon
	float hipotenus=sqrt(x*x+y*y);//hipotenüs hesabýnýn iþlemi
	return hipotenus;//hipotenusu geri döndürür.
}
int main(){
	cout<<"Hipotenus="<<hipotenus_bul(6,9);// hipotenusun sonucunu  ekrana yazar.
	return 0;
}
