#include <iostream>
#define BOY 5 //en fazla 5 say� girilebilir.
using namespace std;

int main(){
	int ortalama=0;
	int toplam=0;
	int x=0;
	int arr[BOY];
	for(x=0; x<BOY; x++){//ja��nc� say�y� girdi�ini sayar.
		cout<<"Sayilari giriniz "<<x;
		cin>>arr[x];
	}
	for(x=0; x<BOY; x++){
		toplam+=arr[x];//say�lar� toplar.
	}	
	ortalama=toplam/BOY;//ortalama hesab�
	cout<<"Ortalama:"<<ortalama;
	return 0;
}
