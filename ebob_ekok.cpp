#include <iostream>
using namespace std;

void ebobHesapla(int a, int b, int *pEbob);//Bu fonksiyon a ve b sayýsýnýn ebobunu hesaplar, pEbob adresine kaydeder.
void ekokHesapla(int a, int b, int *pEkok);//Bu fonksiyon a ve b sayýsýnýn ekokunu hesaplar, pEkok adresine kaydeder.
void hesapla(int a, int b, int *pEbob, int *pEkok);/*Bu  fonksiyon a ve b sayýsýnýn ebobunu ve ekokunu ebobHesapla() ve ekokHesapla() fonksiyonlarý ile hesaplar ve 
hesaplanan ebob ve ekoku sýrasý ile pEbob ve pEkok adreslerine kaydeder.*/

int main() {
	int a, b, ebob, ekok;//tam sayý türünden deðiþkenlerimizi tanýmladýk.
	cout<<"iki sayi giriniz: "<<endl;
	cin>>a>>b;
	hesapla(a, b, &ebob, &ekok);
	cout<<"sayilarin ebobu:"<<ebob<<endl;
	cout<<"sayilarin ekoku: "<<ekok<<endl;
	return 0;
}
void ebobHesapla(int a, int b, int *pEbob){
	*pEbob=1;//1 deðerini atadýk çünkü carmada etkisiz eleman.
	int ortakBolen=2;//2 deðerini ortak bölene atadýk.
	while(a!=1 && b!=1){//a ve b deðrlerini 1 e eþit olmadýðý durumlarda döngüye girir.
		while(a%ortakBolen==0 && b%ortakBolen==0){//a ve benin ortak bolenleri 0 a eþit olursa döngüye girir.
			*pEbob*=ortakBolen;//ortakBolen *pEbob ile çarpýlýr.
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
	*pEkok=a*b/ebob;//a ve b yi çarp ve ebob deðerine böl ve *pEkok a ata. Bu sayede ekok hesaplanmýþ olur.
}
void hesapla(int a, int b, int *pEbob, int *pEkok){
	ebobHesapla(a, b, pEbob);
	ekokHesapla(a, b, pEkok);
}
