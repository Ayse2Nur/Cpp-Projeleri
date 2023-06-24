#include <iostream>
using namespace std;
const int MAX=3;
int main(){
	int var[]={10,11,12};
	int i, *ptr;
	ptr=&var[MAX-1];
	for(i=MAX; i>0; i--){
		cout<<"Adres var ["<<i<<"] ="<<ptr;
		cout<<"\n";
		cout<<"Deger var ["<<i<<"] ="<<*ptr;
		cout<<"\n";
		ptr--;
	}
	return 0;
}
