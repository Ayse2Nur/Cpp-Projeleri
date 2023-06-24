#include <iostream>
using namespace std;

void matrisGir(int matris [3][3]);
void matrisYaz(int matris[3][3]);
float determinantHesapla(int matris[3][3]);
void matrisTersi(int matris[3][3]);
int main() {
	int matris[3][3];
	matrisGir(matris);
	matrisYaz(matris);
	matrisTersi(matris);
	return 0;
}
void matrisGir(int matris[3][3]){//girlecek olan matrisin fonksiyonu
//i sat�r j s�tunu temsil eder 
	for(int i=0; i<3; i++)//i 3'ten k���k oldu�u m�ddet�e d�ng� devam eder..
	for(int j=0; j<3; j++)
	cin>>matris[i][j];
}

void matrisYaz(int matris[3][3]){//girilen matrisi 1 tab bo�luklar b�rakarak yazmas� i�in fonksiyon
	//matris yaz�l�yor.
	cout<<endl<<"Matris:"<<endl;
	for(int i=0; i<3; i++){
	cout<<endl;
	for(int j=0; j<3; j++)
	cout<<matris[i][j]<<"\t";
}
}
//determinant hesapla
float determinantHesapla(int matris[3][3]){//matrisin determinant�n� hesaplayan fonksiyon
	float determinant=0;
	for(int i=0; i<3; i++)
	determinant=determinant+(matris[0][i]*(matris[1][(i+1)%3]*matris[2][(i+2)%3]-matris[1][(i+2)%3]*matris[2][(i+1)%3]));//determinant hesab�
	return determinant;//geriye determinant de�erini d�nd�r�r.
}
void matrisTersi(int matris[3][3]){//matrisin tersini alan fonksiyon
	float determinant=determinantHesapla(matris);
	if(determinant!=0){
		cout<<endl<<"Matrisin tersi: "<<endl<<endl;
		for(int i=0; i<3; i++){
			cout<<endl;
			for(int j=0; j<3; j++)
			cout<<((matris[(i+1)%3][(j+1)%3]*matris[(i+2)%3][(j+2)%3]-matris[(i+1)%3][(j+2)%3]*matris[(i+2)%3][(j+1)%3]))/determinant<<"\t";//matrisin tersinin hesab�
		}
	}
	else{
		cout<<"\n Determinant 0 ise matrisin tersi hesaplanamaz!"<<endl;
	}
}

