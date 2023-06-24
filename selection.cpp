#include <iostream>
//selection sort
using namespace std;
int i, j, n, b;
int A[100];
int main(){
	cout<<"Dizinin eleman sayisini giriniz:";
	cin>>n;
	cout<<"Dizinin elemanlarini giriniz:";
	for(i=1; i<=n; i++){
		cin>>A[i];
	}
	//elemanlar sýrasýyla karþýlaþtýrýlýr ve karþýlaþtýrýlan sayý küçük ise yer deðiþtirilir.
	for(i=1; i<n; i++){
		for(j=i+1; j<=n; j++){
			if(A[j]<A[i]){
				b=A[i];
				A[i]=A[j];
				A[j]=b;
			}
		}
	}
	//elemanlar arasýnda bir tab boþluk býrakýlarak sýralý bir þekilde ekrana yazýlýr.
	for(i=1; i<=n; i++){
		cout<<A[i]<<"\t";
	}
	return 0;
}
