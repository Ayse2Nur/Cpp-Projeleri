#include <iostream>
using namespace std;

void hesapla(int r, float *cevre, float *alan){//elde edilen sonu�lar cevre ve alan isimli de�i�ken kanal� ile fonksiyon �a�r�ld��� program blo�unda kullan�labilir.
	*cevre=2*3.14*r;
	*alan=3.14*r*r;
}
int main() {
	int yaricap;
	float cevre, alan;
	cout<<"Yaricap giriniz: ";
	cin>>yaricap;
	//yaricap de�i�kenini, cevre ve alan de�i�kenlerinin adresini parametre olarak g�nder.
	hesapla(yaricap, &cevre, &alan);
	cout<<"Dairenin cevresi: "<<cevre<<endl;
	cout<<"Dairenin alani: "<<alan<<endl;
	return 0;
}
