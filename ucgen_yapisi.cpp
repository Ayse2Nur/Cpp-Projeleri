#include <iostream>
#include <iomanip>//giriþ-çýkýþ birimlerini belirli formatta yazdýrma fonksiyonlarýný içeren bir kütüphanedir.
#include <cmath>//matematik fonksiyonlarýnýn kullanýlabilmesi için kullanýlan kütüphane
using namespace std;
struct ucgen{//ucgen yapýsý 3 köþe koordinatlarýný saklayan yapý
	int x1, y1;
	int x2, y2;
	int x3, y3;
};
void bilgileri_al(struct ucgen *x){//bir üçgenin kullanýcý tarafýndan girilen koordinat bilgilerini parametre olarak gelen üçgen yapýsý iþaretçisine kaydeden bir fonksiyon
	cout<<"ucgenin x ve y koordinatlarini  giriniz: \n";
	cin>>x->x1>>x->y1>>x->x2>>x->y2>>x->x3>>x->y3;
}
double cevre_hesapla(struct ucgen *x){//Parametre olarak gelen bir üçgenin yapýsý iþaretçinin çevresini hesaplayýp geri dönen bir fonksiyon.
	double kenar1=sqrt(pow(abs(x->x1-x->x2),2) +pow(abs(x->y1-x->y2),2));/*x1 ve x2 deðerlerinin farkýnýn mutlak deðerinin karesi ile y1 ve y2 deðerinin mutlak deðerinin 
   karesini toplayýp kökünü alýp kenar1 e atar.	*/
	double kenar2=sqrt(pow(abs(x->x1-x->x3),2) +pow(abs(x->y1-x->y3),2));/*x1 ve x3 deðerlerinin farkýnýn mutlak deðerinin karesi ile y1 ve y3 deðerinin mutlak deðerinin 
   karesini toplayýp kökünü alýp kenar2 ye atar.	*/
	double kenar3=sqrt(pow(abs(x->x2-x->x3),2) +pow(abs(x->y2-x->y3),2));/*x2 ve x3 deðerlerinin farkýnýn mutlak deðerinin karesi ile y2 ve y3 deðerinin mutlak deðerinin 
   karesini toplayýp kökünü alýp kenar3 e atar.	*/
	return kenar1+kenar2+kenar3;//kenar1, kenar2 ve kenar3 ü toplayýp geri döndürür.
}
double alan_hesapla(struct ucgen *x){//parametre olarak gelen bir üçgen yapýsý iþaretçisinin alanýný hesaplayýp geri dönen bir fonksiyon
	double kenar1=sqrt(pow(abs(x->x1-x->x2),2) +pow(abs(x->y1-x->y2),2));
	double kenar2=sqrt(pow(abs(x->x1-x->x3),2) +pow(abs(x->y1-x->y3),2));
	double kenar3=sqrt(pow(abs(x->x2-x->x3),2) +pow(abs(x->y2-x->y3),2));
	double u=(kenar1+kenar2+kenar3)/2;
	return sqrt(u*(u-kenar1)*(u-kenar2)*(u-kenar3));
}
int main(){
	struct ucgen u;
	bilgileri_al(&u);
	cout<<fixed<<setprecision(2);
	cout<<cevre_hesapla(&u)<<endl;
	cout<<alan_hesapla(&u)<<endl;
	return 0;
}
