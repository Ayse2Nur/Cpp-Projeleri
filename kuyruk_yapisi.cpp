#include <iostream>
using namespace std;

int dizi[5];

int ilkeleman=-1, soneleman=-1;


void enQueue(int eleman)//Kuyru�a eleman ekleme fonksiyonu

{
	if (soneleman>4)
	{
		cout<<"kuyruk dolu";
		
		
	}
	else
	
	{
		if(ilkeleman==-1)
		{
			ilkeleman=ilkeleman+1;
			
		}
		soneleman=soneleman+1;
		dizi[soneleman]=eleman;
		
	}
	
}

void deQueue()//kuyruktan eleman ��karma fonksiyonu
{
	if(ilkeleman==-1 || ilkeleman>soneleman)
	{
		cout<<"kuyruk bos";
		
		
	}
	else
	
	{
		ilkeleman=ilkeleman+1;
		
	}
	
}


int main()

{ int sayi1=10;
int i;
	
	enQueue(sayi1);//kuyru�a 10 de�eri eklendi
	enQueue(20);//kuyru�a 20 de�eri eklendi
	enQueue(30);
	enQueue(40);
	for(i=soneleman;i>=ilkeleman; i--)
	
	{
		cout<<dizi[i]<<"\t";
		
	}
deQueue();//kuyruktan 1 eleman siler
cout<<endl;
for(i=soneleman;i>=ilkeleman; i--)//soneleman ilkelemandan b�y�k e�it oldu�u s�rece indisi 1 eksilterek devam eder.
	
	{
		cout<< dizi[i]<<"\t";
		
	}	
deQueue();
cout<<endl;
for(i=soneleman;i>=ilkeleman; i--)
	
	{
		cout<<dizi[i]<<"\t";
		
	}
	
}


