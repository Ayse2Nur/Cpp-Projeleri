#include <iostream>
using namespace std;
class Araba{//Araba s�n�f�n� olu�turduk.
	public://araban�n �zelliklerine d��ar�dan eri�im izini var. 
		string marka;
		string model;
		int yil;
};
int main(){
	Araba araba1;//Araba s�n�f�n�n ilk nesnesi araba1 olu�turuldu.
	//araba1 nesnesine de�erler atand�.
	araba1.marka="BMW";
	araba1.model="X5";
	araba1.yil=1999;
	Araba araba2;//Araban�n s�n�f�n� ikinci nesnesi araba2 olu�turuldu
	//araba2 nesnesine de�erler atand�
	araba2.marka="FORD";
	araba2.model="MUSTANG";
	araba2.yil=1969;
	//de�erler ekrana yaz�ld�.
	cout<<araba1.marka<<" "<<araba1.model<<" "<<araba1.yil<<"\n";
	cout<<araba2.marka<<" "<<araba2.model<<" "<<araba2.yil<<"\n";
	return 0;
}
