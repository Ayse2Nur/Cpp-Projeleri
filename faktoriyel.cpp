#include <iostream>
using namespace std;
int faktoriyel(int n){
	int fak;
	fak=1;
	while(n>=1){//n 1'e e�it ve birden b�y�oldu�u m�ddet�e d�ng� devam eder. n de�erini 1 azaltarak �arpar ve fak'a atar
		fak*=n;
		n--;
	}
	return fak;
}
int main(){
	int m;
	cout<<"Hangi sayinin faktoriyelini istiyorsunuz:";
	cin>>m;
	cout<<"Sayinin faktoriyeli:"<<faktoriyel(m);//fakroriyelin sonucunu ekrana yazar.
	return 0;
	
}
