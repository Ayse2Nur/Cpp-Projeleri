#include <iostream>
using namespace std;
void swap(int *a,int *b){//yer de�istirmeyi yapar
int temp=*a;
*a=*b;
*b=temp;
}

heapify(int dizi[],int n, int i)//s�ralama yap�yor
{
	int enbuyuk=i;
	int sol=2*i+1;
	int sag=2*i+2;
if(sol<n && dizi[sol]>dizi[enbuyuk])//girilen de�er soldakinen k���k ve dizi[sol]>dizi[enbuyuk] ise sol enbuyuk deger olur
	enbuyuk=sol;
		
if(sag<n && dizi[sag]> dizi[enbuyuk])
   enbuyuk=sag;

if(enbuyuk!=i)//enbuyuk i(yani kok) e�it de�ilse 
{
	swap (&dizi[i],&dizi[enbuyuk]);// i ile enbuyuk yer de�i�tir
	heapify(dizi,n,enbuyuk);//s�rala
}
}

 void heapsort (int dizi[], int n){//dola�
 
 for(int i=n/2-1;i>=0;i--)
	heapify(dizi,n,i);
	
for(int i=n-1;i>=0;i--)
{
	swap(&dizi[0],&dizi[i]);
	heapify(dizi,i,0);
	
}	
}
 void yazdir(int dizi[],int n){
 
 for(int i=0;i<n;i++)
 
  cout<<dizi[i]<<endl; 

}

int main()
{
	int dizi[]={1,12,9,5,6,10,3,4};
	
	int n=sizeof(dizi)/sizeof(dizi[0]);//dizini eleman say�s�n� bulmak i�in
	heapsort(dizi,n);
	yazdir(dizi,n);
	
	
}
