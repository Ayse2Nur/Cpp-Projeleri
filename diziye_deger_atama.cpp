#include <iostream>
using namespace std;
int main(){
	int arr[10];//10 elemanl� array bildirimi
	int i, j;
	//array�n bile�enlerine de�er atama.
	for(i=0; i<10; i++){
		arr[i]=i+100;//i indisli bile�ene i+100 de�erini at.
	}
	for(j=0; j<10; j++){
		cout<<"arr ["<<j<<"] ="<<arr[j];
		cout<<"\n";
	}
	return 0;
}
