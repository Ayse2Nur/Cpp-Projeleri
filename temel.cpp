#include <iostream> //temel girdi-��k�� k�t�panesi programa dahil edilmi�tir.	
using namespace std; //her defas�nda std class'�n�n �a�r�lma zorunlulu�u ortadan kald�r�ld�.

int main() // program�n yapaca�� b�t�n i�leri  main () fonksiyonu belirler.
{
	int x, y; // tamsay� t�r�nde iki de�i�kentan�mlad�k
	cout<<"ilk sayi giriniz:"<<endl; // cout, ekrana ��kt� yazd�rma koumutu; endl,bir alt sat�ra ge�mek i�in
	cin>>x; // cin, girdi alma komutu,x de�i�kenine klavyedden girilen de�eri atar.
	cout<<"ikinci sayiyi giriniz:"<<endl; // cout, ekrana ��kt� yazd�rma koumutu; endl,bir alt sat�ra ge�mek i�in
	cin>>y; // cin, girdi alma komutu,y de�i�kenine klavyedden girilen de�eri atar.
	cout<<"iki sayinin toplami: "<<x+y; //ekrana iki say�n�n toplam�: x+y(girilen say�lar�n toplam�) n� yazar.
	return 0; //main() fonksiyonunu bitirir.
}
