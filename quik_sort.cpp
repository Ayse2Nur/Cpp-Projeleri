#include <iostream>
//quick sort
using namespace std;
 int N=10;
 int A[10]={23,82,13,32,21,52,14,63,27,10};
 void degis(int x[], int i, int j){
 	int bos;
 	bos=x[i];
 	x[i]=x[j];
 	x[j]=bos;
 }
 void quick_sort(int A[], int sol, int sag){
 	int i, j, v;
 	if(sag>sol){
 		v=A[sag];
 		i=sol-1;
 		j=sag;
 		while(i<j){
 			while(A[++i]<v);
 			while(A[--j]>v);
 			if(i<j)
 			degis(A,i,j);
		 }
		 degis(A,i,sag);
		 quick_sort(A, sol, i-1);
		 quick_sort(A, i+1, sag);
	 }
 }
int main() {
	int i;
	cout<<"Dizi:\n";
	for(i=0; i<N; i++)
	cout<<A[i]<<"\t";
	quick_sort(A,0,N-1);
	cout<<"\nSiralanmis Dizi:\n";
	for(i=0; i<N; i++)
	cout<<A[i]<<"\t";
	return 0;
}
