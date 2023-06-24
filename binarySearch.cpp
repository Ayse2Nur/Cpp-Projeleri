#include <iostream>
#include <cstdlib>//arama, sýralama, dönüþtürme gibi iþlevlerin bildirimlerini içinde bulunduran bir baþlýk dosyasýdýr. 
using namespace std;

int main() {
	int a[10], i, n, m, sonuc=0, alt, ust, ortanca; //tam sayý türünde 10 elemanlý bir dizi ve terimleri tanýmladýk.
	cout<<"Dizimin kac terimli olsun?"<<endl;//ekrana  Dizimin kac terimli olsun? çýktýsýný verir.
	cin>>n; // eleman sayýsýný girdirir.
	cout<<"Terimleri artan siradan giriniz."<<endl;//ekrana Terimleri artan siradan giriniz. çýktýsýný verir.
	for(i=0;i<n;i++)//ilk indis deðerine 0 atar, indis deðeri eleman sayýsýndan küçük olduðu müddetçe bir arttýrarak devam eder.
	{
	cin>>a[i];//dizinin elemanlarýný girdirir.
}
cout<<"Aranacak sayiyi giriniz.";
cin>>m;
alt=0, ust=n-1; //ust=n-1 yaptýk çünkü dizilerde indis 0'dan baþlar.
while(alt<=ust)//alttaki eleman üstteki elemandan küçük eþitse döngü devam eder. 
{
	ortanca=(alt+ust)/2;//ortanca deðeri bulmak için
	if(m==a[ortanca])//ortanca deðer girilen deðere eþitse 
	{
		sonuc=1;//sonucu ver
		break;//ve dur. çünkü iþleme ortanca degerden  baþlayarak baþlýyoruz. ortanca deðere göre arama iþlemi yapýlýr.  
	}
	else if (m<a[ortanca])//ortanca deðer girilen deðerden küçükse 
	{
		ust=ortanca-1;//ortancadan bir önceki deðer
	}
	else
	alt=ortanca+1;//ortancadan bir sonraki deðer	
}
if(sonuc==0)//sonuç 0 ise 
cout<<"Bu sayi dizimizde yok!!"<<endl;
else
cout<<"Aranan"<<" "<<m<<" "<<"sayisi"<<" "<<ortanca<<" "<<". indisdedir"<<endl;
return 0;
}
