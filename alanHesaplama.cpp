#include <iostream>
using namespace std;
//fonksiyon prototipleri
float daire_alan(int r); //tamsayý türünde bir deðer alýr ve sonuç olarak ondalýklý bir deðer döndürür.
int kare_alan(int kenar);// tamsayý türünde deðer alýr ve tamsayý türünde deðer döndürür.
int dikdortgen_alan(int en, int boy); //tamsayý türünde iki deðer alýr ve yine tamsayý türüünde alan deðerini döndürür.
void alan_yazdir(float alan);//ondalýklý bir deðer girdi alýr ve bir deðer  döndürmez.

int main() {
	char secim;
	cout<<"Hangi seklin alaninin hesaplamak istiyorsunuz?"<<endl;
	cout<<"(Daire: d, Dikdortgen: i, kare: k): ";
	cin>>secim;
	float alan;
	switch(secim){
		case 'd':
			int yaricap;
			cout<<"yaricap giriniz: ";
			cin>>yaricap;
			alan=daire_alan(yaricap);
			alan_yazdir(alan);
			break;
			case 'i':
				int en, boy;
				cout<<"En ve boy giriniz: ",
				cin>>en>>boy;
				alan=dikdortgen_alan(en, boy);
				alan_yazdir(alan);
				break;
				case 'k':
					int kenar;
					cout<<"Kenar uzunlugu giriniz: ";
					cin>>kenar;
					alan=kare_alan(kenar);
					alan_yazdir(alan);
					break;
					default:
						cout<<"Desteklenmeyen alan"<<endl;
						break;
	}
	return 0;
}
float daire_alan(int r){
	 return 3.14*r*r;
}
int kare_alan(int kenar){
	return kenar*kenar;
}
int dikdortgen_alan(int en, int boy){
	return en*boy;
}
void alan_yazdir(float alan){
	cout<<"Seklin alani: "<<alan<<endl;
}







