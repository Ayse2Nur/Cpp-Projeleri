#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;
struct denklem{//3. dereceden bir denklemin katsayýlarýný saklayabilen bir yapýdýr.
	double a, b, c, d;
};
void fonksiyon_yaz(struct denklem *d){//Parametre olarak gelen denklem yapýsý iþaretçisinin fonksiyonunu ekrana yazdýran fonksiyondur.
	cout<<"y= "<<d->a<<"x^3";
	cout<<(d->b<0 ? "-" : "+")<<abs(d->b)<<"x^2";
	cout<<(d->c<0 ? "-" : "+")<<abs(d->c)<<"x";
	cout<<(d->d<0 ? "-" : "+")<<abs(d->d)<<endl;
}
double fonksiyon_hesapla(struct denklem *d, double x){//Parametre olarak gelen denklem yapýsý iþaretçisinin ifade ettiði fonksiyon için, yine parametre olarak
//verilen x deðerine karþýlýk gelen y deðerini hesaplayýp çaðrýldýðý noktaya döndüren fonksiyondur.
	return d->a*x*x*x+d->b*x*x+d->c*x+d->d;
}
double riemann_hesapla(struct denklem *d, double a, double b, int n){//Parametre olarak gelen denklem yapýsý iþaretçisinin ifade ettiði fonksiyon için 
//yine parametre olarak gelen aralýða ve parça sayýsýna göre riemann toplamýný bulup çaðrýldýðý noktaya döndüren fonksiyondur.
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
	cout<<fixed<<setprecision(1);//virgülden sonra basamak sayýsýný 1 ayarla.
	//fonksiyonu al.
	cout<<"Denklem katsayilarini giriniz: "<<endl;
	cin>>f.a>>f.b>>f.c>>f.d;
	//fonksiyonu yaz.
	cout<<"Girilen denklem: "<<endl;
	fonksiyon_yaz(&f);
	//aralýk deðerlerini al.
	cout<<"Aralik degerlerini ve bolum sayisini giriniz: "<<endl;
	cin>>ilk_deger>>son_deger>>dikdortgen_sayisi;
	//riemann toplamýný hesapla ve ekrana yaz.
	cout<<"Riemann toplami: "<<endl;
	cout<<riemann_hesapla(&f, ilk_deger, son_deger, dikdortgen_sayisi);
	return 0;
}
