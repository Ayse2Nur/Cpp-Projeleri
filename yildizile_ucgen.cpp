#include <iostream>
using namespace std;
int main(){
	int i=0, bosluk=0, satir=0, k=0;
	int toplam;
	cout<<"kac satir gireceksiniz:";
	cin>>satir;
	//yýldýzlar ile üçgen çizdirme
	for(i=1; i<=satir; ++i){//i girmek istediðin satýr sayýsýndan küçük veya eþitse döngü devam eder. 
		for(bosluk=1; bosluk<=satir-i; ++bosluk){
			cout<<" ";
		}
		while(k!=2*i-1){
	cout<<"* ";
	++k;
}
k=0;
cout<<"\n";
}
//üçgensel yapýnýn hesaplanmasý
toplam=satir*(satir+1)/2;
cout<<"T_"<<satir<<"="<<toplam<<endl;
return 0;
}
