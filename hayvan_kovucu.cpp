#include <iostream>
#include <windows.h>//windows un beep özelliðini kullanabilmek için ekledik
using namespace std;
/*insan:20 Hz-20 kHz
kedi:100 Hz-60 kHz
fare:1-100 kHz
köpek:100-29.000 Hz
fil:1 Hz-20 kHz
kuþ: 100-29.000 Hz
balýk:200-800 Hz
sivrisinek: 1200 Hz-2000 Hz*/
int main(){
	int secim;
	cout<<"Test(insanin duyabilecegi ses) "<<"1"<<endl;
	cout<<"Sinek savar "<<"2"<<endl;
	cout<<"Kedi savar "<<"3"<<endl;
	cout<<"Kopek savar "<<"4"<<endl;
	cout<<"Manuel "<<"5"<<endl;
	cout<<"1-5 arasinda bir sayi seciniz:";
	cin>>secim;
	switch(secim){
		case 1:
			Beep(10000,5000);//Beep(frekans,milisaniye) bilgisayarýn fonksiyonu
			break;
			case 2:
				Beep(1500, 5000);
				break;
				case 3:
					Beep(50000,5000);
					break;
					case 4:
						Beep(30000,5000);
						break;
						case 5:
						int sure, frekans;
						cout<<"Bir frekans araligi ve sure giriniz"<<endl;
						cin>>frekans>>sure;
						Beep(frekans, sure);//belirtilen süre kadar bip sesi duyulur.
						break;
						default:
							cout<<"Seciminiz yanlistir"<<endl;
	}
	return 0;
}
