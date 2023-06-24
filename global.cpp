#include <iostream>
#include <stdlib.h>
using namespace std;

 int varGlobal;//global  deðiþken
 
 void fonksiyon(int i){
 	static int a=0;//yerel deðiþken
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
