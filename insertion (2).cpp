#include <iostream>
//insertion sort
using namespace std;
int i, j, n, b;
int A[100];
int main() {
	cout<<"Dizini eleman sayisini giriniz:";
	cin>>n;
	cout<<"Dizinin elemanlarini giriniz:";
	for(i=1; i<=n; i++){
		cin>>A[i];
	}
	//dizinin ikinci eleman�ndan ba�laryar. Her eleman kendinden sonraki elemanlarla kar��la�t�r�l�r ve k���k olan eleman ilgili yer yerle�tirilir.
	for(i=2; i<=n; i++){
		b=A[i];
		j=i;
		while(b<A[j-1] && (j>1)){
			A[j]=A[j-1];
			j--;
		}
		A[j]=b;
	}
	for(i=1; i<=n; i++){
		cout<<A[i]<<"\t";
	}
	return 0;
}
