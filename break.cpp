#include <iostream>
using namespace std;
int main(){
	int i=0;
	while(i<20){//i 20'den k���k oldu�u m�ddet�e d�ner.
		cout<<i<<"\t";//say�lar� ekrana yazar aralar�nda 1 tab bo�luk ile
		i++;
		if(i==10)//say� 10  e�it oldu�u zaman gerisini getirmez. 
		break;
	}
	return 0;

}
