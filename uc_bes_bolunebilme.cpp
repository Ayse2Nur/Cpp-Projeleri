#include <iostream> 

using namespace std; 

int main(){ 

int toplam=0; 

for(int i=0; i<1000; i++){//d�ng� i 1000'den k���k oldu�u m�ddet�e devam eder. 

if(i%3==0 || i%5==0)//e�er i 3'e ve 5'e tam b�l�n�yarsa 

toplam+=i;//toplama ata 

} 

cout<<"Toplam:"<<toplam; 

return 0; 

} 
