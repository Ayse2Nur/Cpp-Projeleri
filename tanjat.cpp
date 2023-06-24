#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float pi=3.14;
	double aci=0.0;
	//90 dereceye kadar 5'er arttýrarak derecelerin tanjantlarýný bulur.
	do{
		cout<<"\naci="<<aci<<"\ntanjanti="<<tan(aci*pi/180.0);
		aci+=5;
	}while(aci<=90);
}
