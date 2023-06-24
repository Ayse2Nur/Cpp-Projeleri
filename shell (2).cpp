#include <iostream>
//shell sort
using namespace std;
int N=10;
int A[10]={13,22,13,24,35,36,27,81,90,10};

void degis(int x[], int i, int j){
	int bos;
	bos=x[i];
	x[i]=x[j];
	x[j]=bos;
}
void shell_sort(){
	int ort, i, j, k;
	ort=N/2;
	while(ort>0){
		for(i=ort; i<N; i++){
			j=i-ort;
			while(j>=0){
				k=j+ort;
				if(A[j]<A[k])
				j=-1;
			else{
				degis(A,j,k);
				j=j-ort;
			}	
		}
	}
	if(ort==0) break;
	ort=ort/2;
}
}

int main(){
	int i;
	cout<<"Dizi :\n";
	for(i=0; i<N; i++)
	cout<<A[i]<<"\t";
	shell_sort();
	cout<<"\nSiralanmis dizi:\n";
	for(i=0; i<N;i++)
	cout<<A[i]<<"\t";
	return 0;
}
