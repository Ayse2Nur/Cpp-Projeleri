#include <iostream>
using namespace std;
class Dene{
	int no;
	public:
		Dene(int n=0):no(n)	{} //yapýcý fonksiyon tanýmý
		friend void yaz(Dene&);//arkadaþ fonksiyon prototipi
};
void yaz(Dene &x){//arkadaþ fonksiyon tanýmý
	cout<<"numara="<<x.no<<endl;
}
int main(){
	Dene test1(7),test2(12);
	yaz(test1);   //arkadaþ fonksiyon çaðrýmý
	yaz(test2);
	return 0;
}
