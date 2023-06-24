#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> v;
	int sayi=0, index=0;
	cout<<"Vektore sayi girniz. Cikmak icin -1 giriniz"<<endl;
	while(sayi!=-1){
		cin>>sayi;
		v.push_back(sayi);
	}
	cout<<"Silmek istediginiz indeksi giriniz. Silmeyi tamamlamak icin -1 girniz"<<endl;
	while(index!=-1){
		cout<<endl;
		cin>>index;
		v.erase(v.begin()+index);//silme iþlemi yapýlýyor.
		for(vector<int>::iterator ite=v.begin(); ite!=v.end(); ite++){
			cout<<*ite<<"\t";
		}
	}
	return 0;
}
