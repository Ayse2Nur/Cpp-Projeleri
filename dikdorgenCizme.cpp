#include <iostream>
using namespace std;
int main() {
	int en, boy;
	cout<<"En giriniz: ";
	cin>>en;
	cout<<"Boy giriniz:";
	cin>>boy;
	for(int i=0; i<boy; ++i){
		for(int j=0; j<en; ++j){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
