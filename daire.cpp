#include <iostream>
using namespace std;

void hesapla(int r, float *cevre, float *alan){//elde edilen sonuçlar cevre ve alan isimli değişken kanalı ile fonksiyon çağrıldığı program bloğunda kullanılabilir.
	*cevre=2*3.14*r;
	*alan=3.14*r*r;
}
int main() {
	int yaricap;
	float cevre, alan;
	cout<<"Yaricap giriniz: ";
	cin>>yaricap;
	//yaricap değişkenini, cevre ve alan değişkenlerinin adresini parametre olarak gönder.
	hesapla(yaricap, &cevre, &alan);
	cout<<"Dairenin cevresi: "<<cevre<<endl;
	cout<<"Dairenin alani: "<<alan<<endl;
	return 0;
}
