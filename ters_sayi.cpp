#include<iostream>
using namespace std;
int main(){
	int i, j, k;
	for(i=1; i<=5; i++){//1'den 5'e kadar say�lar� yazd�rmak i�in d�ng�
		for(j=1; j<=i; j++){//1'den i'ye kadar say�lar� yazd�rmak i�in d�ng�
			cout<<j;
		}
		if(i<=5)
		cout<<" ";
		for(k=i; k>=1; k--){//de�erleri tersten yazmas� i�in 5'ten 1'e do�ru
			if(k<=5)
			cout<<k;
		}
		cout<<"\n";
	}
	return 0;
}
