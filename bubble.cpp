#include <iostream>
using namespace std;
int i, j, n, b;
int A[100];
int main(){
	cout<<"dizi eleman sayisini giriniz:";
	cin>>n;
	cout<<"dizinin elemanlarini giriniz.";
	for(i=1; i<=n; i++){
		cin>>A[i];
	}
	for(i=1; i<=n; i++){
		for(j=1; j<n; j++){
			if(A[j+1]<A[j]){
				b=A[j];
				A[j]=A[j+1];
				A[j+1]=b;
			}
		}
	}
		for(i=1; i<=n; i++){
			cout<<A[i]<<"\t";
	}
	return 0;

}

