#include <iostream>
using namespace std;
int main(){
	long enBuyukAsalCarpan=1;
	long carpanlarinaAyrilacakSayi=600851475143;
	for(int i=2; i<=carpanlarinaAyrilacakSayi; i++){
		if(carpanlarinaAyrilacakSayi%i==0){
		//en b�y�k asal �arpan bu �ekilde bulunabilir.
		enBuyukAsalCarpan=i;
		carpanlarinaAyrilacakSayi/=i;
		//bu sat�r asal �arpanlar�n tekrar taranmamas� i�in
		i=i-1;
	}
}
cout<<enBuyukAsalCarpan;
return 0;
}
