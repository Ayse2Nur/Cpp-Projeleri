#include <iostream>
using namespace std;
void selamVer(char ad[]);

int main(){
	char str[20];
	cout<<"Adiniz nedir?";
	gets(str);//bir satýr sonu karekteri bulana veya dosya sonuna eriþene kadar klavyeden girilen karekteri str ile gösterilen karekter dizisine yazar.
	selamVer(str);
	return 0;
}
void selamVer(char isim[]){
	cout<<"Merhaba "<<isim;
	return;
}
