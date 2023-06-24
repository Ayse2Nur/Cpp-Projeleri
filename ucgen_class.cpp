#include <iostream>
#include <math.h>
using namespace std;
class ucgen{
	public:
		int kenar1, kenar2, kenar3, alan, cevre;
};
class dikdortgen{
	public:
	int k_kenar, u_kenar, alan, cevre;
};

	int main(){
		int kenar1, kenar2;
		int k_kenar, u_kenar;
		cout<<"Ucgenin birinci dik kenarini giriniz: ";
		cin>>kenar1;
		cout<<"Ucgenin ikinci dik kenarini girniz: ";
		cin>>kenar2;
		cout<<"Dikdortgenin kisa kenarini giriniz:";
		cin>>k_kenar;
		cout<<"Dikdortgenin uzun kenarini giriniz:";
		cin>>u_kenar;
		ucgen ucgen1;
		dikdortgen dikdortgen1;
		ucgen1.kenar1=kenar1;
		ucgen1.kenar2=kenar2;
		dikdortgen1.k_kenar=k_kenar;
		dikdortgen1.u_kenar=u_kenar;
		ucgen1.kenar3=sqrt(pow(ucgen1.kenar1,2)+pow(ucgen1.kenar2,2));
		ucgen1.alan=ucgen1.kenar1*ucgen1.kenar2/2;
		ucgen1.cevre=ucgen1.kenar1+ucgen1.kenar2+ucgen1.kenar3;
		dikdortgen1.alan=dikdortgen1.k_kenar*dikdortgen1.u_kenar;
		dikdortgen1.cevre=2*(dikdortgen1.k_kenar+dikdortgen1.u_kenar);
		cout<<"Ucgenin alani:"<<ucgen1.alan;
		cout<<" \nUcgenin cevresi:"<<ucgen1.cevre;
		cout<<"\nDikdortgenin alani: "<<dikdortgen1.alan;
		cout<<"\nDikdortgenin cevresi:"<<dikdortgen1.cevre;
	}



