#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
unsigned tohum;//unsigned pozitip de�erleri almas� i�in.
int zar1, zar2;//oyunda at�lan zarlar.
int zarAt();
int main(){
	srand(time(NULL));//farkl� say�lar �retilebilmesi i�in
	cout<<"\Atis sonucu:"<<zar1<<"+"<<zar2<<"="<<zarAt();
	if(zarAt()>=8)
	cout<<"\nOyunu kazandiniz. Tebrikler";
	else if((zarAt()==6) || (zarAt()==7))
	cout<<"\nOyunu tekrarlayiniz.";
	else 
	cout<<"\nOyunu kaybettiniz.";
}
int zarAt(){
	//toplam>8 ise oyuncu kazan�yor, toplam 6<= toplam <=7 ise zar atmay� tekrarl�yor, toplam<6 ise oyunu kaybediyor.
	zar1=1+(rand()%6);//�retilen say�n�n 6 ya modu al�n�r zar da en fazla 6 say�s� var ��nk�.
	zar2=1&(rand()%6);
	return (zar1+zar2);
}

