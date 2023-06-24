#include <iostream>
using namespace std;
int main(){
	int i=0;
	while(i<20){//i 20'den küçük olduðu müddetçe döner.
		cout<<i<<"\t";//sayýlarý ekrana yazar aralarýnda 1 tab boþluk ile
		i++;
		if(i==10)//sayý 10  eþit olduðu zaman gerisini getirmez. 
		break;
	}
	return 0;

}
