#include <iostream>
#include <math.h>
using namespace std;
float hipotenus_bul(int x, int y){//paremetre alan fonksiyon
	float hipotenus=sqrt(x*x+y*y);//hipoten�s hesab�n�n i�lemi
	return hipotenus;//hipotenusu geri d�nd�r�r.
}
int main(){
	cout<<"Hipotenus="<<hipotenus_bul(6,9);// hipotenusun sonucunu  ekrana yazar.
	return 0;
}
