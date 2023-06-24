#include <iostream>
using namespace std;
double bol(double a, double b);
int main(){
	double a, b;
	cout<<"Sayilari giriniz"<<endl;
	cin>>a>>b;
	//try içindeki iþlem yapýlmaz ise program catch bloðundaki kod parçasý çalýþýr.
	try{
		cout<<bol(a,b)<<endl;
	}
	catch (const char *msg){
		cerr<<msg<<endl;//cerr karekter hatasý anlamýna gelir hatalarý bir dosyaya yazamak için hata akýþýný deðiþtirebilmektir.
	}
	return 0;
}
double bol(double a, double b){
	//hata throw ile fýrlatýlýr.
	if(b==0){
		throw "Sifira bolme hatasi";//mesajý fýrlat
	}
	return a/b;
}
