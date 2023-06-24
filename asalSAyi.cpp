#include <iostream>
using namespace std;

bool asal_mi(int x){//tamsayý türünde bir deðer al ve bool(true-false) bir deðer döndür.
for (int i=2; i<x; ++i){//girilen sayýya kadar olan asal sayýlarý bulmasý için döngü
	if(x%i==0)//eðer tam böleni varsa asal deðildir.
	return false; //false deðer döner
}
return true;//deðilse true deðer döner.	
}

int main() {
	int n;
	cout<<"Bir sayi giriniz: ";
	cin>>n;
	cout<<"Asallar: ";
	for(int i=2; i<=n; ++i){
		if(asal_mi(i))//true deðer dönerse deðeri 
		cout<<i<<" ";//ekrana yazar. 
	}
	return 0;
}
