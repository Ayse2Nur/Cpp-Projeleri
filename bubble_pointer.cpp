//pointer kullanrak bubble sort program� 
#include <iostream>
using namespace std;
/*print array  iki nitelik i�erecek:  print_array  dizisinin ilk eleman�n�n adresi i�in
ikinci dizinini uzunlu�u i�in*/
void print_array(int *a, int len){
	for(int i=0; i<len; i++)
	cout<<*(a+i)<<" ";//* (a + i), a + i adresindeki de�eri d�nd�r�r.  
}
void bubble_sort(int *a, int length){
	int i,j,flag=0;
	for(i=0; i<length;i++){
		flag=0;//her iterasyon i�in bayrap� 0 yap�n. 
		for(j=0; j<length-i-1; j++) // j<length-i-1 kullan�yoruz ��nk� diziler 0'dan ba�lar, bubble sort algoritmas�na g�re �al��mak i�in.
		{
			 if (*(a+j)>*(a+j+1)) //a+j adresindeki de�er a+j+1 adresindeki de�erden b�y�kse
			 {
			 	//takas i�lemi yap�yor. say�lar� s�ralayabilmek i�in.
			 	int temp=*(a+j); //a+j  de�eri temp' e ata.
			 	*(a+j)=*(a+j+1); //a+j+1  de�erini  a+j de�erine ata.
			 	*(a+j+1)=temp;//temp de�erine a+j+1 de�erini ata
			 	flag++;//flag'� 1 artt�r.
			 }
			// �imdi s�ralamada kalan �ey, zaman karma��kl���n� azaltmaktad�r.
		}
		//bayra�� kontrol et. 
		if(flag==0)
		break;//��nk� takas herhangi bir yinelemede ger�ekle�mezse liste o anda s�ralan�rsa d�ng�n�n  d���na ��kar�z.
	}
}
int main() {
//�nce 10 boyutunda bir dizi olu�turun.
  int a[10]={9,6,7,8,3,4,1,2,5,13};//diziye 10 elemanatad�k.
  int length=10; //dizinin boyutunu kaaydetme 
  //dizi ��elerini yazd�rmak i�in bir i�lev  yapmak verimlidir.
  cout<<"Array: ";
  print_array(a, length);
  //�imdi daha sonra yapaca��m�z bir bubble_sort fonksiyonu diyoruz. 
  bubble_sort(a, length);
  //s�ral� diziyi yazd�rmak
  cout<<endl<<"Sorted Array: ";
  print_array(a, length);
  
	return 0;
} 







