#include <iostream>
using namespace std;

int main() {
	int sayi, carpan=2;//en küçük asal sayý 2 olduðu için carpana ilk deðer olarak 2 atadýk.
	cout<<"Bir sayi giriniz:";
	cin>>sayi;
	cout<<"Sayinin asal carpanlari: ";
	while(sayi>1){
		//bir sayýnýn bir çarpana birden fazla kez bölünmesi durumu için.
		while(sayi%carpan==0){
			cout<<carpan<<" ";
			sayi/=carpan;
		}
		++carpan;
	}
	return 0;
}
