#include <iostream>
using namespace std;
int main(){
int i=0;
while(i<20){
	i++;
	if(i==10)//e�er i 10 ise 
	continue;//atla s�radakilerden devam et.
	cout<<i<<"\t";
}
return 0;
}
