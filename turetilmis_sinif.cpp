#include <iostream>
using namespace std;

class Hayvan{//ana s�n�f.
	public:
		void hayvanSes(){
			cout<<"Hayvan hangi sesi cikarir?\n";
		}
};
//hayvan s�n�f�ndan kedi ve kopek s�n�f� turettik
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
