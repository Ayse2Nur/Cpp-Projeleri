#include <iostream>
using namespace std;
int kuvvet(int, int);
int main(){
	int ust, taban;
    int sonuc;
	cout<<"Hangi sayinin kuvvetini alacaksiniz?";
	cin>>taban;
	cout<<"ust giriniz:";
	cin>>ust;
	sonuc=kuvvet(taban,ust);
	cout<<"sayinin kuvveti:"<<taban<<"^"<<ust<<"="<<sonuc;
	return 0;
}
int i=1;
int toplam=1;
int kuvvet(int taban, int ust){//parametre alan kuvvet fonksiyonu
	if(i<=ust){//e�er i ustten k���k e�itse i�kemleri yap
		toplam=toplam*taban;//taban ile toplam� �arp�p toplama ata(�rnek:taban 5 olsun  5*1=5 5*5=25 25*5=125)
		kuvvet(taban, ust-1);
	}
	else
	return toplam;
}
