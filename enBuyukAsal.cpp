#include <iostream>
using namespace std;
int main(){
	long enBuyukAsalCarpan=1;
	long carpanlarinaAyrilacakSayi=600851475143;
	for(int i=2; i<=carpanlarinaAyrilacakSayi; i++){
		if(carpanlarinaAyrilacakSayi%i==0){
		//en büyük asal çarpan bu þekilde bulunabilir.
		enBuyukAsalCarpan=i;
		carpanlarinaAyrilacakSayi/=i;
		//bu satýr asal çarpanlarýn tekrar taranmamasý için
		i=i-1;
	}
}
cout<<enBuyukAsalCarpan;
return 0;
}
