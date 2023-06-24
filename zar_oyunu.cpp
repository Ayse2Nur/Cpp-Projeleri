#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
unsigned tohum;//unsigned pozitip deðerleri almasý için.
int zar1, zar2;//oyunda atýlan zarlar.
int zarAt();
int main(){
	srand(time(NULL));//farklý sayýlar üretilebilmesi için
	cout<<"\Atis sonucu:"<<zar1<<"+"<<zar2<<"="<<zarAt();
	if(zarAt()>=8)
	cout<<"\nOyunu kazandiniz. Tebrikler";
	else if((zarAt()==6) || (zarAt()==7))
	cout<<"\nOyunu tekrarlayiniz.";
	else 
	cout<<"\nOyunu kaybettiniz.";
}
int zarAt(){
	//toplam>8 ise oyuncu kazanýyor, toplam 6<= toplam <=7 ise zar atmayý tekrarlýyor, toplam<6 ise oyunu kaybediyor.
	zar1=1+(rand()%6);//üretilen sayýnýn 6 ya modu alýnýr zar da en fazla 6 sayýsý var çünkü.
	zar2=1&(rand()%6);
	return (zar1+zar2);
}

