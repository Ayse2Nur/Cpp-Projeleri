#include <iostream>
using namespace std;
union meslek{
	char ad[20];
	double ucret;
	int sicilNo;
}u;
int main(){
	cout<<"union'un boyu: "<<sizeof(u);
	return 0;
}
