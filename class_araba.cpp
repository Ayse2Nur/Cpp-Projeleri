#include <iostream>
using namespace std;
class Araba{//Araba sınıfını oluşturduk.
	public://arabanın özelliklerine dışarıdan erişim izini var. 
		string marka;
		string model;
		int yil;
};
int main(){
	Araba araba1;//Araba sınıfının ilk nesnesi araba1 oluşturuldu.
	//araba1 nesnesine değerler atandı.
	araba1.marka="BMW";
	araba1.model="X5";
	araba1.yil=1999;
	Araba araba2;//Arabanın sınıfını ikinci nesnesi araba2 oluşturuldu
	//araba2 nesnesine değerler atandı
	araba2.marka="FORD";
	araba2.model="MUSTANG";
	araba2.yil=1969;
	//değerler ekrana yazıldı.
	cout<<araba1.marka<<" "<<araba1.model<<" "<<araba1.yil<<"\n";
	cout<<araba2.marka<<" "<<araba2.model<<" "<<araba2.yil<<"\n";
	return 0;
}
