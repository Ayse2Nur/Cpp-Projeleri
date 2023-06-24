#include <iostream>
using namespace std;
//iki matris tanýmladýk ve bu marislerin toplam için iç içe döngüler kullandýk.
int main(){
 int bir[3][3], iki[3][3], sonuc[3][3];
 //birinici  matrisin elemanlarýný girmek için satýr ve sutun deðerleri için 2 tane for döngüsü oluþturduk.
 for(int i=0; i<3; i++){
 	for(int j=0; j<3; j++){
 		cout<<"Birinci matris ["<<i+1<<"]["<<j+1<<"]=";
 		cin>>bir[i][j];
	 }
 }
 cout<<endl;
 //ikinci matrisin elemanlarýný girmek için satýr ve sutun deðerleri için 2 tane for döngüsü oluþturduk.
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
 //iki matrisin topmaý için döngüler
 for(int i=0 ; i<3; i++){
 	for(int j=0; j<3; j++){
 		cout<<sonuc[i][j]<<" ";
	 }
	 cout<<endl<<endl;
}
	 return 0;
 }
