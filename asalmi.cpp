#include <iostream>
using namespace std;
int main() {
int sayi, sayac=0; //tam say� tr�nden say� ve sayac tan�mlad�k ve sayaca 0 de�erini atad�k.
cout<<"bir sayi giriniz: ";// ekrana bir sayi giriniz: yazar
cin>>sayi; // say� girmek i�in
for(int j=2; j<sayi; j++)// tam say� t�r�nde bir j de�i�keni tan�mlad�k ve j de�eri say�dan k���k oldu�u m�ddet�e  j bir  artt�r�larak d�ng� devam edecek.
{
	if(sayi%j==0)//say� j ye tam b�l�n�yorsa 
	{
		sayac++;//sayac� 1 artt�r.
		break; //burdan sonras�n� devam etme
	}
}
if(sayac==0)//sayac 0'a e�it mi e�itse
{
	cout<<"Asaldir"<<endl;// ekrana Asaldir yaz ve alt sat�ra ge�.
}
else //de�ilse 
cout<<"Asal degildir."<<endl;//ekrana Asal degildir yaz ve alt sat�ra ge�.
	return 0; //main() fonksiyonunu bitirir.
}
