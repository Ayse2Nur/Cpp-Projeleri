#include <iostream>
using namespace std;

void aralarinda_asal_mi(int sayi_1, int sayi_2, bool *sonuc);
int main(int argc, char** argv) {
	int a, b;
	bool cevap;
	cout<<"iki sayi giriniz: ";
	cin>>a>>b;
	aralarinda_asal_mi(a, b, &cevap);
	/*cevap true ise Aralarýnda asal ifadesi ekrana yazdýrýlýr, deðilse aralarýnda asal deðil ifadesi ekrana yazdýrýlýr.*/
	cout<<(cevap ? "Aralarinda asal" : "Aralarinda asal degil");
	return 0;
}
void aralarinda_asal_mi(int sayi_1, int sayi_2, bool *sonuc){//deðer döndürmeyen fonksiyon.
	//kucuk sayiyi bul
	
int kucuk_sayi=sayi_1;
if(sayi_2<kucuk_sayi)
kucuk_sayi=sayi_2;
//sayi_1 ve sayi_2 aralarýnda asal kabul edelim
*sonuc=1;
//küçük sayýya kadar olan sayýlarý kalansýz bölmek için dene...
for(int i=2; i<=kucuk_sayi; ++i){
	//bir tane ortak bölen olmasý o iki sayýnýn aralarýnda asal olmadýðý anlamýna gelir.
	if(sayi_1 % i==0 && sayi_2 % i==0){
		*sonuc=0;
		return;
	}
}
	
}
