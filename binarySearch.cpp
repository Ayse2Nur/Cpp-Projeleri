#include <iostream>
#include <cstdlib>//arama, s�ralama, d�n��t�rme gibi i�levlerin bildirimlerini i�inde bulunduran bir ba�l�k dosyas�d�r. 
using namespace std;

int main() {
	int a[10], i, n, m, sonuc=0, alt, ust, ortanca; //tam say� t�r�nde 10 elemanl� bir dizi ve terimleri tan�mlad�k.
	cout<<"Dizimin kac terimli olsun?"<<endl;//ekrana  Dizimin kac terimli olsun? ��kt�s�n� verir.
	cin>>n; // eleman say�s�n� girdirir.
	cout<<"Terimleri artan siradan giriniz."<<endl;//ekrana Terimleri artan siradan giriniz. ��kt�s�n� verir.
	for(i=0;i<n;i++)//ilk indis de�erine 0 atar, indis de�eri eleman say�s�ndan k���k oldu�u m�ddet�e bir artt�rarak devam eder.
	{
	cin>>a[i];//dizinin elemanlar�n� girdirir.
}
cout<<"Aranacak sayiyi giriniz.";
cin>>m;
alt=0, ust=n-1; //ust=n-1 yapt�k ��nk� dizilerde indis 0'dan ba�lar.
while(alt<=ust)//alttaki eleman �stteki elemandan k���k e�itse d�ng� devam eder. 
{
	ortanca=(alt+ust)/2;//ortanca de�eri bulmak i�in
	if(m==a[ortanca])//ortanca de�er girilen de�ere e�itse 
	{
		sonuc=1;//sonucu ver
		break;//ve dur. ��nk� i�leme ortanca degerden  ba�layarak ba�l�yoruz. ortanca de�ere g�re arama i�lemi yap�l�r.  
	}
	else if (m<a[ortanca])//ortanca de�er girilen de�erden k���kse 
	{
		ust=ortanca-1;//ortancadan bir �nceki de�er
	}
	else
	alt=ortanca+1;//ortancadan bir sonraki de�er	
}
if(sonuc==0)//sonu� 0 ise 
cout<<"Bu sayi dizimizde yok!!"<<endl;
else
cout<<"Aranan"<<" "<<m<<" "<<"sayisi"<<" "<<ortanca<<" "<<". indisdedir"<<endl;
return 0;
}
