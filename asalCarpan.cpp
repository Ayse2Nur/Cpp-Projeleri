#include <iostream>
using namespace std;

int main() {
	int sayi, carpan=2;//en k���k asal say� 2 oldu�u i�in carpana ilk de�er olarak 2 atad�k.
	cout<<"Bir sayi giriniz:";
	cin>>sayi;
	cout<<"Sayinin asal carpanlari: ";
	while(sayi>1){
		//bir say�n�n bir �arpana birden fazla kez b�l�nmesi durumu i�in.
		while(sayi%carpan==0){
			cout<<carpan<<" ";
			sayi/=carpan;
		}
		++carpan;
	}
	return 0;
}
