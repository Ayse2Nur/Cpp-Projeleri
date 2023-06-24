#include <iostream>
#include <stdlib.h>
using namespace std;
/*Tek boyutlu sihirli kare algoritmas�.
1)herhangi bir sat�r�n ortas�na 1 yaz�l�r.
2)kareyi bir silindir gibi d���nerek, her defas�nda sa� alt �apraza bir sonraki say�y� yaz.
3)e�er �aprazda bo� yer kalmad�ysa, bir kare yukar� ��k ve ikinci ad�ma git.
4)sihirli kare dolduysa bitir.*/
int main(){
	int n=0;//kare boyut
	//e�er boyut tek de�ilse tekrar boyut girilmesi istenir.
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
		//bu yer doldurulduysa bir kare yukar� ��k.
		if(sihirliKare[row][col]!=0){
			row=abs(row-1)%n;
		}
		//sa� �apraz� doldur.
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
