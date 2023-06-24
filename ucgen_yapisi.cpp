#include <iostream>
#include <iomanip>//giri�-��k�� birimlerini belirli formatta yazd�rma fonksiyonlar�n� i�eren bir k�t�phanedir.
#include <cmath>//matematik fonksiyonlar�n�n kullan�labilmesi i�in kullan�lan k�t�phane
using namespace std;
struct ucgen{//ucgen yap�s� 3 k��e koordinatlar�n� saklayan yap�
	int x1, y1;
	int x2, y2;
	int x3, y3;
};
void bilgileri_al(struct ucgen *x){//bir ��genin kullan�c� taraf�ndan girilen koordinat bilgilerini parametre olarak gelen ��gen yap�s� i�aret�isine kaydeden bir fonksiyon
	cout<<"ucgenin x ve y koordinatlarini  giriniz: \n";
	cin>>x->x1>>x->y1>>x->x2>>x->y2>>x->x3>>x->y3;
}
double cevre_hesapla(struct ucgen *x){//Parametre olarak gelen bir ��genin yap�s� i�aret�inin �evresini hesaplay�p geri d�nen bir fonksiyon.
	double kenar1=sqrt(pow(abs(x->x1-x->x2),2) +pow(abs(x->y1-x->y2),2));/*x1 ve x2 de�erlerinin fark�n�n mutlak de�erinin karesi ile y1 ve y2 de�erinin mutlak de�erinin 
   karesini toplay�p k�k�n� al�p kenar1 e atar.	*/
	double kenar2=sqrt(pow(abs(x->x1-x->x3),2) +pow(abs(x->y1-x->y3),2));/*x1 ve x3 de�erlerinin fark�n�n mutlak de�erinin karesi ile y1 ve y3 de�erinin mutlak de�erinin 
   karesini toplay�p k�k�n� al�p kenar2 ye atar.	*/
	double kenar3=sqrt(pow(abs(x->x2-x->x3),2) +pow(abs(x->y2-x->y3),2));/*x2 ve x3 de�erlerinin fark�n�n mutlak de�erinin karesi ile y2 ve y3 de�erinin mutlak de�erinin 
   karesini toplay�p k�k�n� al�p kenar3 e atar.	*/
	return kenar1+kenar2+kenar3;//kenar1, kenar2 ve kenar3 � toplay�p geri d�nd�r�r.
}
double alan_hesapla(struct ucgen *x){//parametre olarak gelen bir ��gen yap�s� i�aret�isinin alan�n� hesaplay�p geri d�nen bir fonksiyon
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
