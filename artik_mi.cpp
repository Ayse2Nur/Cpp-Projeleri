#include <iostream>
using namespace std;
int main(){
	int sene;
	cout<<"Hangi yil? ";
	cin>>sene;
	if((sene%4==0 && sene%100!=0) || sene%400==0)//eğer sene 4'ün katına eşit ve 100'ün katına eşit değil ya da 400'ün katına eşitse
	cout<<sene<<" Yili artik yildir. Subat ayi 29 ceker. ";//artık yıldır.
	else //değilse
	cout<<sene<<" yili artik degildir. Subat ayi 28 ceker.";//artık yıl değildir.
	return 0;
	
}
