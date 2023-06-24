#include <iostream>
#include <stdio.h>//bilgisayardaki klavye, ekran, disk sürücü veya portlara eriþim saðlayarak iþlem yapýlabilme olanaðý saðlar
#include <stdlib.h>//dinamik bellek yönetiimi rastgele sayý üretimi, arama, sýralama ve dönüþtürme gibi çeþitli fonksiyonlar tanýmlanmýþtýr.
#include <time.h>//tarih ve saat fonksiyonlarýnný bildirimini sembolik sabitler ve standart yapýlar için kullanýlýr.
using namespace std;
int main(){
	srand(time(NULL));//program her çalýþtýðýnda farklý bir rastgele sonuç elde edebilme için kullandýk.
	int sayi;
	cout<<"Gaziantep Universitesi Kac Sayi Atmistir?"<<endl;
	cin>>sayi;
	int o1, o2, o3, o4, o5, o6;
	o1=rand()%sayi;//üretile sayýyýnýn girilen sayýdan modunu sl o1'e ata.
	if(o1>=0)//eðer o1 0'dan büyük eþitse 
		cout<<"o1: "<<o1<<endl;//ekrana yaz.
	o2=rand()%(sayi-o1);//üretilen sayýnýn  girilen sayiyi  o1'den çýkar modunu al o2'ye ata.
	if(o2>=0)
		cout<<"o2: "<<o2<<endl;
		o3=rand()%(sayi-o1-o2);
	if(o3>=0)
		cout<<"o3: "<<o3<<endl;
		o4=rand()%(sayi-o1-o2-o3);
	if(o4>=0)
		cout<<"o4: "<<o4<<endl;
		o5=rand()%(sayi-o1-o2-o3-o4);
	if(o5>=0)
		cout<<"o5: "<<o5<<endl;
		o6=sayi-o1-o2-o3-o4-o5;
		cout<<"o6: "<<o6<<endl;
	return 0;
}
