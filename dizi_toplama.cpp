#include <iostream>
using namespace std;
int main(){
	int i, toplam=0;
	int a[10]={10,20,30,40,50,60,70,80,90,100};//10 elemanlý bir dizi tanýmladýk ve eleman atadýk.
	for(i=0; i<10; i++)
	toplam=toplam+a[i];//dizinin elemanlarýný toplar.
	cout<<"Dizinin elemanlarinin toplami="<<toplam;//sonucu ekrana yazar.

}
