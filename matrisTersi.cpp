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
//i satýr j sütunu temsil eder 
	for(int i=0; i<3; i++)//i 3'ten küçük olduðu müddetçe döngü devam eder..
	for(int j=0; j<3; j++)
	cin>>matris[i][j];
}

void matrisYaz(int matris[3][3]){//girilen matrisi 1 tab boþluklar býrakarak yazmasý için fonksiyon
	//matris yazýlýyor.
	cout<<endl<<"Matris:"<<endl;
	for(int i=0; i<3; i++){
	cout<<endl;
	for(int j=0; j<3; j++)
	cout<<matris[i][j]<<"\t";
}
}
//determinant hesapla
float determinantHesapla(int matris[3][3]){//matrisin determinantýný hesaplayan fonksiyon
	float determinant=0;
	for(int i=0; i<3; i++)
	determinant=determinant+(matris[0][i]*(matris[1][(i+1)%3]*matris[2][(i+2)%3]-matris[1][(i+2)%3]*matris[2][(i+1)%3]));//determinant hesabý
	return determinant;//geriye determinant deðerini döndürür.
}
void matrisTersi(int matris[3][3]){//matrisin tersini alan fonksiyon
	float determinant=determinantHesapla(matris);
	if(determinant!=0){
		cout<<endl<<"Matrisin tersi: "<<endl<<endl;
		for(int i=0; i<3; i++){
			cout<<endl;
			for(int j=0; j<3; j++)
			cout<<((matris[(i+1)%3][(j+1)%3]*matris[(i+2)%3][(j+2)%3]-matris[(i+1)%3][(j+2)%3]*matris[(i+2)%3][(j+1)%3]))/determinant<<"\t";//matrisin tersinin hesabý
		}
	}
	else{
		cout<<"\n Determinant 0 ise matrisin tersi hesaplanamaz!"<<endl;
	}
}

