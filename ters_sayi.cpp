#include<iostream>
using namespace std;
int main(){
	int i, j, k;
	for(i=1; i<=5; i++){//1'den 5'e kadar sayýlarý yazdýrmak için döngü
		for(j=1; j<=i; j++){//1'den i'ye kadar sayýlarý yazdýrmak için döngü
			cout<<j;
		}
		if(i<=5)
		cout<<" ";
		for(k=i; k>=1; k--){//deðerleri tersten yazmasý için 5'ten 1'e doðru
			if(k<=5)
			cout<<k;
		}
		cout<<"\n";
	}
	return 0;
}
