#include <iostream>
using namespace std;
class Dene{
	int no;
	public:
		Dene(int n=0):no(n)	{} //yap�c� fonksiyon tan�m�
		friend void yaz(Dene&);//arkada� fonksiyon prototipi
};
void yaz(Dene &x){//arkada� fonksiyon tan�m�
	cout<<"numara="<<x.no<<endl;
}
int main(){
	Dene test1(7),test2(12);
	yaz(test1);   //arkada� fonksiyon �a�r�m�
	yaz(test2);
	return 0;
}
