#include <iostream>
using namespace std;
int main(){
	int i;
	float aylikUcret[3];//float t�r�nde 3 elemanl� aylikUcret ad�nda dizi
	aylikUcret[0]=3456.76f;
	aylikUcret[1]=8765.37f;
	aylikUcret[2]=21347.72f;
	float gelirVergisi[3];//float t�r�nde 3 elemanl�  gelirVergisi ad�nda dizi
	for(i=0; i<3; i++){
		gelirVergisi[i]=aylikUcret[i]*30/100;//gelir vergisi hesab�
		cout<<aylikUcret[i]<<"tl ucretin gelir vergisi="<<gelirVergisi[i]<<"dir\n";
	}
}
