#include <iostream>
using namespace std;
int main(){
	int x=10, y=20, z;
	{
cout<<"takastan once:\n"<<"x="<<x<<" y="<<y;
z=x;//x bos olaz z'ye atanýr
x=y;//y x e atanýr
y=z;//z ye y atanýr ve x ile y yer deðiþtirmiþ olur.
}
cout<<"\ntakastan sonra:\n"<<"x="<<x<<" y="<<y;
}
