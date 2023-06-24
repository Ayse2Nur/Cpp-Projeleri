#include <iostream>
#include <math.h>
using namespace std;
void kokleriHesapla(double, double, double);

int main() {
	double a, b, c;
	char devam;
	do{
	 kokleriHesapla(a,b,c);
		cout<<"Devam  etmek istiyor musnuz? Evet icin=e, Hayir icin=h"<<endl;
		cin>>devam;
	}while(devam=='e');
	return 0;
}
void kokleriHesapla(double a, double b, double c){
	double delta, x1, x2, x1re, x1sa, x2sa, x2re;
	cout<<" Denklemi giriniz. Orn: ax2+bx+c=0"<<endl;
	cin>>a>>b>>c;
	delta=(b*b)-(4*a*c);
	cout<<"Kokler toplami="<<(-b)/a<<endl;
	cout<<"Kokler carpimi="<<c/a<<endl;
	if(delta<0){
		cout<<"Reel kok yok.\n";
		delta=fabs(delta);
		x1re=(-b/(2*a));
		x1sa=(sqrt(delta)/(2*a));
		x2re=(-b/(2*a));
		x2sa=(sqrt(delta)/(2*a));
		cout<<"x1="<<x1re<<"+i*"<<x1sa<<endl;
		cout<<"x2="<<x2re<<"-i*"<<x2sa<<endl;
	} 
	else if (delta==0){
		cout<<"Simetrik iki kok var.\n";
		x1=(-b)/(2*a);
		cout<<"x1="<<x1<<"\t";
		cout<<"x2="<<x1<<"\t";
	}
	else if(delta>0){
	x1=(-b+sqrt(delta)/(2*a));
	x2=(-b-sqrt(delta)/(2*a));
	cout<<"iki reel kok var.\n";
	cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2;
	}
}
