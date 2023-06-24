#include <iostream>
using namespace std;
int main(){
	int arr[10];//10 elemanlı array bildirimi
	int i, j;
	//arrayın bileşenlerine değer atama.
	for(i=0; i<10; i++){
		arr[i]=i+100;//i indisli bileşene i+100 değerini at.
	}
	for(j=0; j<10; j++){
		cout<<"arr ["<<j<<"] ="<<arr[j];
		cout<<"\n";
	}
	return 0;
}
