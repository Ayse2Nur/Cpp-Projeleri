#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"ucgenin kenarlarini giriniz:";
	cin>>a>>b>>c;
	if(a+b<c)
	cout<<"ucgen degil ";
	else if(a+c<b)
	cout<<"ucgen degil";
	else if(b+c<a)
	cout<<"ucgen degil";
	else
	cout<<"bu bir ucgen";
	return 0;
}
