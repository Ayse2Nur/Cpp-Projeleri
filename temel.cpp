#include <iostream> //temel girdi-çýkýþ kütüpanesi programa dahil edilmiþtir.	
using namespace std; //her defasýnda std class'ýnýn çaðrýlma zorunluluðu ortadan kaldýrýldý.

int main() // programýn yapacaðý bütün iþleri  main () fonksiyonu belirler.
{
	int x, y; // tamsayý türünde iki deðiþkentanýmladýk
	cout<<"ilk sayi giriniz:"<<endl; // cout, ekrana çýktý yazdýrma koumutu; endl,bir alt satýra geçmek için
	cin>>x; // cin, girdi alma komutu,x deðiþkenine klavyedden girilen deðeri atar.
	cout<<"ikinci sayiyi giriniz:"<<endl; // cout, ekrana çýktý yazdýrma koumutu; endl,bir alt satýra geçmek için
	cin>>y; // cin, girdi alma komutu,y deðiþkenine klavyedden girilen deðeri atar.
	cout<<"iki sayinin toplami: "<<x+y; //ekrana iki sayýnýn toplamý: x+y(girilen sayýlarýn toplamý) ný yazar.
	return 0; //main() fonksiyonunu bitirir.
}
