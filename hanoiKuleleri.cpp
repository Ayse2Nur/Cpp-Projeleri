#include <iostream>
using namespace std;
//K: kaynak, H: hedef, Y: yedek
/*hanoi kuleleri; 3 çubuk vardýr, ortasý delik, diskleri üst üste bir tanesinden diðerine aktarmanýzý ister. Küçük diskin üstüne büyük disk gelemez ve 
her seferinde 1 disk hareket ettirilebilir.*/
void hanoiKuleleri(char kaynak, char yedek, char hedef, int  n){
	if(n==0){
		return ;
	}
    //n tane disk için n-1 tane disk taþýma iþlemi yapýlýr.
	hanoiKuleleri(kaynak, hedef, yedek, n-1);
	cout<<" K:kaynak, H:hedef, Y:yedek\n";
	cout<<n<<". disk ("<<kaynak<<"->"<<hedef<<")";
	hanoiKuleleri(yedek, kaynak, hedef, n-1);
}
int main(void){
	int n;
	cout<<"Disk sayisi giriniz:";
	cin>>n;
	hanoiKuleleri('K', 'Y', 'H',n);
	cout<<"\n";
	return 0;
	}

