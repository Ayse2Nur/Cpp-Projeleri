#include <iostream>
using namespace std;
int main() {
int sayi, sayac=0; //tam sayı tründen sayı ve sayac tanımladık ve sayaca 0 değerini atadık.
cout<<"bir sayi giriniz: ";// ekrana bir sayi giriniz: yazar
cin>>sayi; // sayı girmek için
for(int j=2; j<sayi; j++)// tam sayı türünde bir j değişkeni tanımladık ve j değeri sayıdan küçük olduğu müddetçe  j bir  arttırılarak döngü devam edecek.
{
	if(sayi%j==0)//sayı j ye tam bölünüyorsa 
	{
		sayac++;//sayacı 1 arttır.
		break; //burdan sonrasını devam etme
	}
}
if(sayac==0)//sayac 0'a eşit mi eşitse
{
	cout<<"Asaldir"<<endl;// ekrana Asaldir yaz ve alt satıra geç.
}
else //değilse 
cout<<"Asal degildir."<<endl;//ekrana Asal degildir yaz ve alt satıra geç.
	return 0; //main() fonksiyonunu bitirir.
}
