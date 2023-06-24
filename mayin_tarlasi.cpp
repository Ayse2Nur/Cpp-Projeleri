#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//0'lar toprak, 1'ler mayýn olsun
int main(){
	int satir=0, sutun=0, toprak=0;
	cout<<"Mayin tarlasinin boyutunu giriniz (orn:5 10):"<<endl;
	cin>>satir>>sutun;
	int tarla[satir][sutun];
	//t dizisi tarlanýn oyunu oynayan kiþiye gösterilecek hali. Oyuncu nerede mayýn olduðunu bilmeyecektir.
	int t[satir][sutun];
	//rastgele olarak tarlayý oluþtur.
	srand(time(NULL));
	for(int i=0; i<satir; i++){
		for(int j=0; j<sutun; j++){
			//%50 ihtimalle mayýn vardýr.
			tarla[i][j]=rand()%2;
			//bütün mayýn ve topraðýn üstünü kapatalým.
			t[i][j]=5;
			//bulunmasý gereken toprak sayýsý
			if(tarla[i][j]==0)
			toprak++;
		}
	}
	//test amaçlý mayýnlarý yazdýralým.
	cout<<"Kontrol amacli mayin tarlasi gosteriliyor."<<endl;
	for(int i=0; i<satir; i++){
		for(int j=0; j<sutun; j++){
			cout<<tarla[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	//kullanýcý oyun oynamaya baþlasýn.
	int i=0, j=0;
	while(true){
		//oyun bu matris üzerinden oynanacak.
		for(i=0; i<satir; i++){
			for(j=0; j<sutun; j++){
				cout<<t[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<"Acmak istediginiz indeksleri giriniz (orn:0 1):"<<endl;
		cin>>i>>j;
		if(i>=0 && j>=0 && i<satir && j<sutun){
			if(t[i][j]==5 && tarla[i][j]==0){
				//kullanýcý 1. satýr ve 1. sutunu  açmak istediðinde toprak[0][0] açýlmalý.
				t[i][j]=tarla[i][j];
				toprak--;
				if(toprak==0){
					cout<<"Butun mayinlari buldunuz."<<endl;
					return 0;
				}
			}
			else if (t[i][j]==5 && tarla[i][j]==1){
				cout<<"Mayina bastiniz!"<<endl;
				return 0;
			}
			else{
				cout<<"Daha once actiginiz bir yeri tekrar acmaya calisiniz!"<<endl;
			}
		}
		else{
			cout<<"Gecersiz bir indeks girdiniz"<<endl;
		}
	}
	return 0;
}
