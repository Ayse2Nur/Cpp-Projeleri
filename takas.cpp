#include <iostream>
using namespace std;
int main(){
	int x=10, y=20, z;
	{
cout<<"takastan once:\n"<<"x="<<x<<" y="<<y;
z=x;//x bos olaz z'ye atan�r
x=y;//y x e atan�r
y=z;//z ye y atan�r ve x ile y yer de�i�tirmi� olur.
}
cout<<"\ntakastan sonra:\n"<<"x="<<x<<" y="<<y;
}
