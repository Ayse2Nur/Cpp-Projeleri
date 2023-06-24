#include <iostream>
using namespace std;
int fib(int);
int main(){
	int n;
	cout<<"Kac yil sonra ne kadar ineginiz olacagini hesaplayiniz: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<i+1<<". yil toplam inek sayisi: "<<fib(i)<<endl;
	}
}
int fib(int n){
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else 
	return fib(n-1)+fib(n-2);
}
