#include <iostream>
using namespace std;
void tatil_mi( int g){
	int gun=g;
	if(gun>0 && gun<6)
	cout<<"bu bir is gunu calismalisin.";
	if(gun==6 || gun==7)
	cout<<"bugun hafta sonu dinlenmelisin.";
}
int main(){
	int n;
	cout<<"bugun haftanin kacinici gunudur?";
	cin>>n;
	tatil_mi(n);
	return 0;
}
