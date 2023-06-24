#include <iostream>
using namespace std;
int faktoriyel(int n){
	int fak;
	fak=1;
	while(n>=1){//n 1'e eşit ve birden büyüolduğu müddetçe döngü devam eder. n değerini 1 azaltarak çarpar ve fak'a atar
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
