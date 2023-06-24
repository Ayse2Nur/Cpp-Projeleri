#include <iostream>
using namespace std;
int main(){
	int i;
	cout<<"Bir tamsayi giriniz: ";
	cin>>i;
	if(i%3==0)
	cout<<"Tamsayi 3 ile tam bolunebilir:"<<i;
	else if(i%2==0)
	cout<<"Tamsayi cift sayidir:"<<i;
	else
	cout<<"Tam sayi tek sayidir ama 3'e tam bolunemez:"<<i;
}
