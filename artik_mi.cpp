#include <iostream>
using namespace std;
int main(){
	int sene;
	cout<<"Hangi yil? ";
	cin>>sene;
	if((sene%4==0 && sene%100!=0) || sene%400==0)//e�er sene 4'�n kat�na e�it ve 100'�n kat�na e�it de�il ya da 400'�n kat�na e�itse
	cout<<sene<<" Yili artik yildir. Subat ayi 29 ceker. ";//art�k y�ld�r.
	else //de�ilse
	cout<<sene<<" yili artik degildir. Subat ayi 28 ceker.";//art�k y�l de�ildir.
	return 0;
	
}
