#include <iostream>
using namespace std;

class Hayvan{//ana sýnýf.
	public:
		void hayvanSes(){
			cout<<"Hayvan hangi sesi cikarir?\n";
		}
};
//hayvan sýnýfýndan kedi ve kopek sýnýfý turettik
class Kedi: public Hayvan{
	public:
		void hayvanSes(){
			cout<<"Kedi sesi: miyav  miyav\n";
		}
};
class  Kopek: public Hayvan{
	public:
		void hayvanSes(){
			cout<<"Kopek sesi: hav hav\n";
}
};
int main(){
	Hayvan hayvan;//nesne
	Kedi kedi;//nesne
	Kopek kopek;//nesne
	hayvan.hayvanSes();
	kedi.hayvanSes();
	kopek.hayvanSes();
	return 0;
}
