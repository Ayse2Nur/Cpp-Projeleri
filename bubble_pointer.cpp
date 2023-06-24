//pointer kullanrak bubble sort programý 
#include <iostream>
using namespace std;
/*print array  iki nitelik içerecek:  print_array  dizisinin ilk elemanýnýn adresi için
ikinci dizinini uzunluðu için*/
void print_array(int *a, int len){
	for(int i=0; i<len; i++)
	cout<<*(a+i)<<" ";//* (a + i), a + i adresindeki deðeri döndürür.  
}
void bubble_sort(int *a, int length){
	int i,j,flag=0;
	for(i=0; i<length;i++){
		flag=0;//her iterasyon için bayrapý 0 yapýn. 
		for(j=0; j<length-i-1; j++) // j<length-i-1 kullanýyoruz çünkü diziler 0'dan baþlar, bubble sort algoritmasýna göre çalýþmak için.
		{
			 if (*(a+j)>*(a+j+1)) //a+j adresindeki deðer a+j+1 adresindeki deðerden büyükse
			 {
			 	//takas iþlemi yapýyor. sayýlarý sýralayabilmek için.
			 	int temp=*(a+j); //a+j  deðeri temp' e ata.
			 	*(a+j)=*(a+j+1); //a+j+1  deðerini  a+j deðerine ata.
			 	*(a+j+1)=temp;//temp deðerine a+j+1 deðerini ata
			 	flag++;//flag'ý 1 arttýr.
			 }
			// þimdi sýralamada kalan þey, zaman karmaþýklýðýný azaltmaktadýr.
		}
		//bayraðý kontrol et. 
		if(flag==0)
		break;//çünkü takas herhangi bir yinelemede gerçekleþmezse liste o anda sýralanýrsa döngünün  dýþýna çýkarýz.
	}
}
int main() {
//önce 10 boyutunda bir dizi oluþturun.
  int a[10]={9,6,7,8,3,4,1,2,5,13};//diziye 10 elemanatadýk.
  int length=10; //dizinin boyutunu kaaydetme 
  //dizi öðelerini yazdýrmak için bir iþlev  yapmak verimlidir.
  cout<<"Array: ";
  print_array(a, length);
  //þimdi daha sonra yapacaðýmýz bir bubble_sort fonksiyonu diyoruz. 
  bubble_sort(a, length);
  //sýralý diziyi yazdýrmak
  cout<<endl<<"Sorted Array: ";
  print_array(a, length);
  
	return 0;
} 







