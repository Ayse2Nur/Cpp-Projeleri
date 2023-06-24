#include <iostream>
#include <vector>
using namespace std;
struct Kisi{
	int id;
	string ad;
};
int main(){
	Kisi k;
	k.id=0;
	vector<Kisi> v;
	cout<<"Vektore id ve isim girniz. Cikmak icin -1 giriniz"<<endl;
	while(k.id!=-1){
		cin>>k.id;
		if(k.id!=-1){
			cin>>k.ad;
			v.push_back(k);
		}
	}
	for(vector<Kisi>::iterator ite=v.begin(); ite!=v.end(); ite++){
		cout<<(*ite).ad<<"\t";
	}
	return 0;
}
