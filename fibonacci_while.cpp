#include <iostream>
using namespace std;

int main() {
	int n, i=1, a=0, b=1, c;
	cout<<"kac terim yazilsin: ";
	cin>>n;
     while(i<=n){
     	cout<<a<<" ";
     	c=a+b;
     	a=b;
     	b=c;
     	i++;
	 }
return 0;	
}
