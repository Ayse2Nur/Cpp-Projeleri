#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
struct denklem{//3. dereceden bir denklemin katsay�lar�n� saklayabilen bir yap�d�r.
	double a, b, c, d;
};
void fonksiyon_yaz(struct denklem *d){//Parametre olarak gelen denklem yap�s� i�aret�isinin fonksiyonunu ekrana yazd�ran fonksiyondur.
	cout<<"y= "<<d->a<<"x^3";
	cout<<(d->b<0 ? "-" : "+")<<abs(d->b)<<"x^2";
	cout<<(d->c<0 ? "-" : "+")<<abs(d->c)<<"x";
	cout<<(d->d<0 ? "-" : "+")<<abs(d->d)<<endl;
}
double fonksiyon_hesapla(struct denklem *d, double x){//Parametre olarak gelen denklem yap�s� i�aret�isinin ifade etti�i fonksiyon i�in, yine parametre olarak
//verilen x de�erine kar��l�k gelen y de�erini hesaplay�p �a�r�ld��� noktaya d�nd�ren fonksiyondur.
	return d->a*x*x*x+d->b*x*x+d->c*x+d->d;
}
double riemann_hesapla(struct denklem *d, double a, double b, int n){//Parametre olarak gelen denklem yap�s� i�aret�isinin ifade etti�i fonksiyon i�in 
//yine parametre olarak gelen aral��a ve par�a say�s�na g�re riemann toplam�n� bulup �a�r�ld��� noktaya d�nd�ren fonksiyondur.
	double x, y, toplam=0, dx=(b-a)/n;
	for(int i=0; i<n; ++i){
		x=a+i*dx+dx/2;
		y=fonksiyon_hesapla(d,x);
		toplam+=y*dx;
	}
	return toplam;
}
int main(){
	struct denklem f;
	double ilk_deger, son_deger;
	int dikdortgen_sayisi;
	cout<<fixed<<setprecision(1);//virg�lden sonra basamak say�s�n� 1 ayarla.
	//fonksiyonu al.
	cout<<"Denklem katsayilarini giriniz: "<<endl;
	cin>>f.a>>f.b>>f.c>>f.d;
	//fonksiyonu yaz.
	cout<<"Girilen denklem: "<<endl;
	fonksiyon_yaz(&f);
	//aral�k de�erlerini al.
	cout<<"Aralik degerlerini ve bolum sayisini giriniz: "<<endl;
	cin>>ilk_deger>>son_deger>>dikdortgen_sayisi;
	//riemann toplam�n� hesapla ve ekrana yaz.
	cout<<"Riemann toplami: "<<endl;
	cout<<riemann_hesapla(&f, ilk_deger, son_deger, dikdortgen_sayisi);
	return 0;
}
