#include <iostream>
using namespace std;
const  double pi=3.14;
class Kure{
	public:
		float r, x, y, z, hacim(), alan();
};
float Kure::hacim(){//kure sýnýfýndan //kure sýnýfýna ait hacim fonksiyonu tanýmladýk. 
	return (r*r*r*4*pi/3);
}
float Kure::alan(){//kured sýnýfýna ait alan fonksiyonu tanýmladýk 
	return (4*pi*r*r);
}
int main(){
	Kure k;
	//k nesnesine degerler atadýk.
	k.r=1.0;
	k.x=2.0;
	k.y=3.0;
	k.z=4.0;
	cout<<"X="<<k.x<<"\n";
	cout<<"Y="<<k.y<<"\n";
	cout<<"Z="<<k.z<<"\n";
	cout<<"R="<<k.r<<"\n";
	cout<<"Hacim="<<k.hacim()<<"\n";
	cout<<"Alan="<<k.alan();
	return 0;
}
