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
	//elemanlar s�ras�yla kar��la�t�r�l�r ve kar��la�t�r�lan say� k���k ise yer de�i�tirilir.
	for(i=1; i<n; i++){
		for(j=i+1; j<=n; j++){
			if(A[j]<A[i]){
				b=A[i];
				A[i]=A[j];
				A[j]=b;
			}
		}
	}
	//elemanlar aras�nda bir tab bo�luk b�rak�larak s�ral� bir �ekilde ekrana yaz�l�r.
	for(i=1; i<=n; i++){
		cout<<A[i]<<"\t";
	}
	return 0;
}
