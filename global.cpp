#include <iostream>
#include <stdlib.h>
using namespace std;

 int varGlobal;//global  de�i�ken
 
 void fonksiyon(int i){
 	static int a=0;//yerel de�i�ken
 	a++;
 	int t=i;
 	i=varGlobal;
 	varGlobal=t;
 	cout<<"\nCagri #"<<a<<":\n i="<<i<<"\nvarGlobal="<<t;
 }
 int main(){
 	fonksiyon(2);
 	fonksiyon(7);
 	fonksiyon(12);
 	return 0;
 }
