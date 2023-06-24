#include <iostream>
#include <math.h>
using namespace std;
double geometrikOrt(double arr[], int);//fonsiyon prototipi
int main(){
	double a[]={1,2,3,4,5};//diziye eleman atadýk
	cout<<"Geometrik ortalama: "<<geometrikOrt(a,5);
}
double geometrikOrt(double arr[], int boy){
	int i;
	double geoOrt;
	double carpim=1.0;
	for(i=0; i<boy; i++)
	carpim*=arr[i];
	geoOrt=pow(carpim,(1.0/boy));//geometrik ortalama hesabý
	return geoOrt;//geometrik ortamayý geri döndürür.
}
