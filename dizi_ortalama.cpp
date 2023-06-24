#include <iostream>
#define BOY 5 //en fazla 5 sayý girilebilir.
using namespace std;

int main(){
	int ortalama=0;
	int toplam=0;
	int x=0;
	int arr[BOY];
	for(x=0; x<BOY; x++){//jaçýncý sayýyý girdiðini sayar.
		cout<<"Sayilari giriniz "<<x;
		cin>>arr[x];
	}
	for(x=0; x<BOY; x++){
		toplam+=arr[x];//sayýlarý toplar.
	}	
	ortalama=toplam/BOY;//ortalama hesabý
	cout<<"Ortalama:"<<ortalama;
	return 0;
}
