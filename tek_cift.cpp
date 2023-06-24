#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
int c,r;
for(c=1; c<=10; c++){
	r=rand()%100+1;
	cout<<r<<" ";
	if(r%2==0){
		cout<<"sayi ciftir.\n";
	}
	else{
		cout<<"sayi tektir. \n";
	}
}	
}
