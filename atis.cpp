#include <iostream>
#include <stdio.h>//bilgisayardaki klavye, ekran, disk s�r�c� veya portlara eri�im sa�layarak i�lem yap�labilme olana�� sa�lar
#include <stdlib.h>//dinamik bellek y�netiimi rastgele say� �retimi, arama, s�ralama ve d�n��t�rme gibi �e�itli fonksiyonlar tan�mlanm��t�r.
#include <time.h>//tarih ve saat fonksiyonlar�nn� bildirimini sembolik sabitler ve standart yap�lar i�in kullan�l�r.
using namespace std;
int main(){
	srand(time(NULL));//program her �al��t���nda farkl� bir rastgele sonu� elde edebilme i�in kulland�k.
	int sayi;
	cout<<"Gaziantep Universitesi Kac Sayi Atmistir?"<<endl;
	cin>>sayi;
	int o1, o2, o3, o4, o5, o6;
	o1=rand()%sayi;//�retile say�y�n�n girilen say�dan modunu sl o1'e ata.
	if(o1>=0)//e�er o1 0'dan b�y�k e�itse 
		cout<<"o1: "<<o1<<endl;//ekrana yaz.
	o2=rand()%(sayi-o1);//�retilen say�n�n  girilen sayiyi  o1'den ��kar modunu al o2'ye ata.
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
