#include <iostream>
using namespace std;
int main(){
	int i;
	int a[]={1123, 1125, 1234, 1256, 1321};//diziye eleman atadýk.
	cout<<"Dizi:";
	for(i=0; i<5; i++)//i beþten küçükse döngü devam eder. i indis deðerini ifade eder. 
	cout<<"\na"<<"["<<i<<"]"<<"="<<a[i];
	return 0;
}
