#include <iostream>
using namespace std;

bool asal_mi(int x){//tamsay� t�r�nde bir de�er al ve bool(true-false) bir de�er d�nd�r.
for (int i=2; i<x; ++i){//girilen say�ya kadar olan asal say�lar� bulmas� i�in d�ng�
	if(x%i==0)//e�er tam b�leni varsa asal de�ildir.
	return false; //false de�er d�ner
}
return true;//de�ilse true de�er d�ner.	
}

int main() {
	int n;
	cout<<"Bir sayi giriniz: ";
	cin>>n;
	cout<<"Asallar: ";
	for(int i=2; i<=n; ++i){
		if(asal_mi(i))//true de�er d�nerse de�eri 
		cout<<i<<" ";//ekrana yazar. 
	}
	return 0;
}
