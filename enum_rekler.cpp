#include <iostream>
using namespace std;
enum renkler {kirmizi, yesil, mavi, sari, siyah, beyaz};//enum tanımladık.
int main(){
	enum renkler renk;//enum tipinde renk değişkeni tanımladık.
	char kod;
	cout<<"renk kodunu giriniz(0-5)\n";
	kod=getchar();//getchar() fonksiyonu klavyeden girdiğimiz karekteri, int bir değere çevrilen unsigned char bir değer olarak okur.
	switch(kod){
		case '0':
			renk=kirmizi;
			cout<<"Sectiginiz renk kodu: kirmizi="<<kirmizi;
			break;
			case '1':
				renk=yesil;
				cout<<"Sectiginiz renk kodu: yesil="<<yesil;
				break;
					case '2':
				renk=mavi;
				cout<<"Sectiginiz renk kodu: mavi="<<mavi;
				break;
					case '3':
				renk=sari;
				cout<<"Sectiginiz renk kodu: sari="<<sari;
				break;
					case '4':
				renk=siyah;
				cout<<"Sectiginiz renk kodu: siyah="<<siyah;
				break;
					case '5':
				renk=beyaz;
				cout<<"Sectiginiz renk kodu: beyaz="<<beyaz;
				break;
				default:
					cout<<"Boyle bir renk kodu yok";
			
	}
}
