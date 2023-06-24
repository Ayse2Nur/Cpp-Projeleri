#include <iostream>
using namespace std;
//k'yý 5 alýr ve 4 3 2 1 adým adým azaltarak ucgen oluþturulur.
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
