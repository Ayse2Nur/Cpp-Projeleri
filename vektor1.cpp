#include <iostream>
//vektör kullanmak için gerekli kütüphane
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	int sayi;
	cout<<"Vektor'e sayi giriniz. Cikmak icin -1 giriniz"<<endl;
	//sayilar vektore bu þekilde atýlýr. Vektor uzunluðu olmayan bir dizi gibi düþünülebilir.
	while(sayi!=-1){
		cin>>sayi;
		v.push_back(sayi);//push_back() veriyi vektörün arkasýna ekler.
	}
	for(vector<int>::iterator ite=v.begin(); ite!=v.end(); ite++){//vektörün baþlangýcýndan(begin) sonuna(end) kadar tüm elemanlarý ekrana yazdýrmayý saðlayan döngü.
	cout<<*ite<<"\t";
		
	}
	return 0;
}
