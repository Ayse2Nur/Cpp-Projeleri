#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//0'lar toprak, 1'ler may�n olsun
int main(){
	int satir=0, sutun=0, toprak=0;
	cout<<"Mayin tarlasinin boyutunu giriniz (orn:5 10):"<<endl;
	cin>>satir>>sutun;
	int tarla[satir][sutun];
	//t dizisi tarlan�n oyunu oynayan ki�iye g�sterilecek hali. Oyuncu nerede may�n oldu�unu bilmeyecektir.
	int t[satir][sutun];
	//rastgele olarak tarlay� olu�tur.
	srand(time(NULL));
	for(int i=0; i<satir; i++){
		for(int j=0; j<sutun; j++){
			//%50 ihtimalle may�n vard�r.
			tarla[i][j]=rand()%2;
			//b�t�n may�n ve topra��n �st�n� kapatal�m.
			t[i][j]=5;
			//bulunmas� gereken toprak say�s�
			if(tarla[i][j]==0)
			toprak++;
		}
	}
	//test ama�l� may�nlar� yazd�ral�m.
	cout<<"Kontrol amacli mayin tarlasi gosteriliyor."<<endl;
	for(int i=0; i<satir; i++){
		for(int j=0; j<sutun; j++){
			cout<<tarla[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	//kullan�c� oyun oynamaya ba�las�n.
	int i=0, j=0;
	while(true){
		//oyun bu matris �zerinden oynanacak.
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
				//kullan�c� 1. sat�r ve 1. sutunu  a�mak istedi�inde toprak[0][0] a��lmal�.
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
