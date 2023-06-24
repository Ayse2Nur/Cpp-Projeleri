#include <iostream> 

using namespace std; 

int main(){ 

int toplam=0; 

for(int i=0; i<1000; i++){//döngü i 1000'den küçük olduðu müddetçe devam eder. 

if(i%3==0 || i%5==0)//eðer i 3'e ve 5'e tam bölünüyarsa 

toplam+=i;//toplama ata 

} 

cout<<"Toplam:"<<toplam; 

return 0; 

} 
