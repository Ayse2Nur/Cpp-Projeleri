#include <iostream>
using namespace std;
int main(){
	int n=1;
	int toplam=0;
	do{
		toplam+=n;
		n++;
	}while(n<=100);
	cout<<"100'e kadar tamsayilarin toplami="<<toplam;
}
