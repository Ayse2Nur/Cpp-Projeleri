#include <iostream>
using namespace std;
void selamVer(char ad[]);

int main(){
	char str[20];
	cout<<"Adiniz nedir?";
	gets(str);//bir sat�r sonu karekteri bulana veya dosya sonuna eri�ene kadar klavyeden girilen karekteri str ile g�sterilen karekter dizisine yazar.
	selamVer(str);
	return 0;
}
void selamVer(char isim[]){
	cout<<"Merhaba "<<isim;
	return;
}
