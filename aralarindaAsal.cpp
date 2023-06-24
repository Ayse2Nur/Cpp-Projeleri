#include <iostream>
using namespace std;

void aralarinda_asal_mi(int sayi_1, int sayi_2, bool *sonuc);
int main(int argc, char** argv) {
	int a, b;
	bool cevap;
	cout<<"iki sayi giriniz: ";
	cin>>a>>b;
	aralarinda_asal_mi(a, b, &cevap);
	/*cevap true ise Aralar�nda asal ifadesi ekrana yazd�r�l�r, de�ilse aralar�nda asal de�il ifadesi ekrana yazd�r�l�r.*/
	cout<<(cevap ? "Aralarinda asal" : "Aralarinda asal degil");
	return 0;
}
void aralarinda_asal_mi(int sayi_1, int sayi_2, bool *sonuc){//de�er d�nd�rmeyen fonksiyon.
	//kucuk sayiyi bul
	
int kucuk_sayi=sayi_1;
if(sayi_2<kucuk_sayi)
kucuk_sayi=sayi_2;
//sayi_1 ve sayi_2 aralar�nda asal kabul edelim
*sonuc=1;
//k���k say�ya kadar olan say�lar� kalans�z b�lmek i�in dene...
for(int i=2; i<=kucuk_sayi; ++i){
	//bir tane ortak b�len olmas� o iki say�n�n aralar�nda asal olmad��� anlam�na gelir.
	if(sayi_1 % i==0 && sayi_2 % i==0){
		*sonuc=0;
		return;
	}
}
	
}
