#include <iostream>
using namespace std;
//k'y� 5 al�r ve 4 3 2 1 ad�m ad�m azaltarak ucgen olu�turulur.
int main(){
	int i=1, j=1, k;
	do{
		k=5;
	do{
		cout<<" ";
		k--;
	}while(k>=i);
	j=1;
	do{
		cout<<i<<" ";
		j++;
	} while(j<=i);
	cout<<"\n";
	i++;
}while(i<=5);
return 0;
}
