#include <iostream>
#include <stdlib.h>
using namespace std;
/*Tek boyutlu sihirli kare algoritmasý.
1)herhangi bir satýrýn ortasýna 1 yazýlýr.
2)kareyi bir silindir gibi düþünerek, her defasýnda sað alt çapraza bir sonraki sayýyý yaz.
3)eðer çaprazda boþ yer kalmadýysa, bir kare yukarý çýk ve ikinci adýma git.
4)sihirli kare dolduysa bitir.*/
int main(){
	int n=0;//kare boyut
	//eðer boyut tek deðilse tekrar boyut girilmesi istenir.
	if(n%2==0){
		cout<<"sihirli karenin boyutunu giriniz(n*n)"<<endl;
		cin>>n;
	}
	int sihirliKare[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			sihirliKare[i][j]=0;
		}
	}
	int row=n-1, col=n/2, k=0;
	while(k<n*n){
		//bu yer doldurulduysa bir kare yukarý çýk.
		if(sihirliKare[row][col]!=0){
			row=abs(row-1)%n;
		}
		//sað çaprazý doldur.
		else{
			sihirliKare[row][col]=k+1;
			k++;
			if(sihirliKare[(row+1)%n][(col+1)%n]==0){
				row=(row+1)%n;
				col=(col+1)%n;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<sihirliKare[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
