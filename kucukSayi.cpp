#include <iostream>
using namespace std;
int main(){
	int a, b, min;
	cout<<"iki tam sayi giriniz:"<<endl;
	cin>>a>>b;
     min=((a<b)?a:b);//a b'den k���kse a de�ilse b k���k  sayidir.
     cout<<"Kucuk olan sayi:"<<min;
     return 0;
}
