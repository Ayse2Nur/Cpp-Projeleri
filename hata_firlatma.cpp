#include <iostream>
using namespace std;
double bol(double a, double b);
int main(){
	double a, b;
	cout<<"Sayilari giriniz"<<endl;
	cin>>a>>b;
	//try i�indeki i�lem yap�lmaz ise program catch blo�undaki kod par�as� �al���r.
	try{
		cout<<bol(a,b)<<endl;
	}
	catch (const char *msg){
		cerr<<msg<<endl;//cerr karekter hatas� anlam�na gelir hatalar� bir dosyaya yazamak i�in hata ak���n� de�i�tirebilmektir.
	}
	return 0;
}
double bol(double a, double b){
	//hata throw ile f�rlat�l�r.
	if(b==0){
		throw "Sifira bolme hatasi";//mesaj� f�rlat
	}
	return a/b;
}
