#include <iostream>
using namespace std;
int main(){
	int i;
	int a[]={1123, 1125, 1234, 1256, 1321};//diziye eleman atad�k.
	cout<<"Dizi:";
	for(i=0; i<5; i++)//i be�ten k���kse d�ng� devam eder. i indis de�erini ifade eder. 
	cout<<"\na"<<"["<<i<<"]"<<"="<<a[i];
	return 0;
}
