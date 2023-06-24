#include <iostream>
using namespace std;
//fonksiyonlara aþýrý yüklenmesi, çoklu fonksiyonlarý farklý parametrelerle ayný anda sahip olabilir
//toplam fonksiyonuna aþýrý yükleniyoruz int ve double deðerler. 
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
