#include <iostream>
//vekt�r kullanmak i�in gerekli k�t�phane
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	int sayi;
	cout<<"Vektor'e sayi giriniz. Cikmak icin -1 giriniz"<<endl;
	//sayilar vektore bu �ekilde at�l�r. Vektor uzunlu�u olmayan bir dizi gibi d���n�lebilir.
	while(sayi!=-1){
		cin>>sayi;
		v.push_back(sayi);//push_back() veriyi vekt�r�n arkas�na ekler.
	}
	for(vector<int>::iterator ite=v.begin(); ite!=v.end(); ite++){//vekt�r�n ba�lang�c�ndan(begin) sonuna(end) kadar t�m elemanlar� ekrana yazd�rmay� sa�layan d�ng�.
	cout<<*ite<<"\t";
		
	}
	return 0;
}
