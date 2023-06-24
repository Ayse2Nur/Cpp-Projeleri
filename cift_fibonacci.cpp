#include <iostream> 

using namespace std; 

int fibonacci(int n); 

int main(){ 

int i=0, number=0, toplam=0; 

number=fibonacci(i);//fibonacciyi numbere atar 

while(number<30000){//number 30000 den küçük olduðu müddetçe döngü devam eder. 

if(number%2==0){//çift olan fibonnaci deðerlerini vermesi için 

toplam+=number; 

cout<<i<<". fibonacci:"<<number<<endl; 

} 

i++; 

number=fibonacci(i); 

} 

cout<<"Toplam:"<<toplam<<endl; 

return 0; 

 

 

} 

//fibonacci sayilari bulan fonksiyon 

int fibonacci(int n){//fibonacci fonksiyonu 

//ilk iki deðeri döndürlür 0 1 ve daha sonra fibonacci diðer elemanlarý bulunur.  

if(n==0) 

return 0; 

if(n==1) 

return 1; 

else 

return fibonacci(n-1)+fibonacci(n-2); 

} 
