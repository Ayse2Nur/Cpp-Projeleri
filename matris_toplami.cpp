#include <iostream>
using namespace std;
//iki matris tan�mlad�k ve bu marislerin toplam i�in i� i�e d�ng�ler kulland�k.
int main(){
 int bir[3][3], iki[3][3], sonuc[3][3];
 //birinici  matrisin elemanlar�n� girmek i�in sat�r ve sutun de�erleri i�in 2 tane for d�ng�s� olu�turduk.
 for(int i=0; i<3; i++){
 	for(int j=0; j<3; j++){
 		cout<<"Birinci matris ["<<i+1<<"]["<<j+1<<"]=";
 		cin>>bir[i][j];
	 }
 }
 cout<<endl;
 //ikinci matrisin elemanlar�n� girmek i�in sat�r ve sutun de�erleri i�in 2 tane for d�ng�s� olu�turduk.
 for(int i=0; i<3; i++){
 	for(int j=0; j<3; j++){
 		cout<<"ikinic matris ["<<i+1<<"]["<<j+1<<"]=";
 		cin>>iki[i][j];
	 }
 }
 cout<<endl;
 for(int i=0; i<3; i++){
 	for(int j=0; j<3; j++){
 		sonuc[i][j]=bir[i][j]+iki[i][j];
	 }
 }
 cout<<"matrislerin toplami:\n\n";
 //iki matrisin topma� i�in d�ng�ler
 for(int i=0 ; i<3; i++){
 	for(int j=0; j<3; j++){
 		cout<<sonuc[i][j]<<" ";
	 }
	 cout<<endl<<endl;
}
	 return 0;
 }
