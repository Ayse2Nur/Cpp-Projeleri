#include <iostream>
using namespace std;
//fonksiyonlara a��r� y�klenmesi, �oklu fonksiyonlar� farkl� parametrelerle ayn� anda sahip olabilir
//toplam fonksiyonuna a��r� y�kleniyoruz int ve double de�erler. 
int toplam(int x, int  y){
	return x+y;
}
double toplam(double x, double y){
	return x+y;
}
int main(){
	int top1=toplam(8,5);
	double top2=toplam(4.3, 6.26);
	cout<<"tamsayi:"<<top1<<"\n";
	cout<<"ondalikli sayi:"<<top2;
	return 0;
	
}
