#include <iostream>
using namespace std;

void ebobHesapla(int a, int b, int *pEbob);//Bu fonksiyon a ve b say�s�n�n ebobunu hesaplar, pEbob adresine kaydeder.
void ekokHesapla(int a, int b, int *pEkok);//Bu fonksiyon a ve b say�s�n�n ekokunu hesaplar, pEkok adresine kaydeder.
void hesapla(int a, int b, int *pEbob, int *pEkok);/*Bu  fonksiyon a ve b say�s�n�n ebobunu ve ekokunu ebobHesapla() ve ekokHesapla() fonksiyonlar� ile hesaplar ve 
hesaplanan ebob ve ekoku s�ras� ile pEbob ve pEkok adreslerine kaydeder.*/

int main() {
	int a, b, ebob, ekok;//tam say� t�r�nden de�i�kenlerimizi tan�mlad�k.
	cout<<"iki sayi giriniz: "<<endl;
	cin>>a>>b;
	hesapla(a, b, &ebob, &ekok);
	cout<<"sayilarin ebobu:"<<ebob<<endl;
	cout<<"sayilarin ekoku: "<<ekok<<endl;
	return 0;
}
void ebobHesapla(int a, int b, int *pEbob){
	*pEbob=1;//1 de�erini atad�k ��nk� carmada etkisiz eleman.
	int ortakBolen=2;//2 de�erini ortak b�lene atad�k.
	while(a!=1 && b!=1){//a ve b de�rlerini 1 e e�it olmad��� durumlarda d�ng�ye girir.
		while(a%ortakBolen==0 && b%ortakBolen==0){//a ve benin ortak bolenleri 0 a e�it olursa d�ng�ye girir.
			*pEbob*=ortakBolen;//ortakBolen *pEbob ile �arp�l�r.
			a/=ortakBolen;
			b/=ortakBolen;
		}
		while(a%ortakBolen==0)
		a/=ortakBolen;
		while(b%ortakBolen==0)
		b/=ortakBolen;
		++ortakBolen;
	}
}
void ekokHesapla(int a, int b, int *pEkok){
	int ebob;
	ebobHesapla(a, b, &ebob);
	*pEkok=a*b/ebob;//a ve b yi �arp ve ebob de�erine b�l ve *pEkok a ata. Bu sayede ekok hesaplanm�� olur.
}
void hesapla(int a, int b, int *pEbob, int *pEkok){
	ebobHesapla(a, b, pEbob);
	ekokHesapla(a, b, pEkok);
}
