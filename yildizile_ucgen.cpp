#include <iostream>
using namespace std;
int main(){
	int i=0, bosluk=0, satir=0, k=0;
	int toplam;
	cout<<"kac satir gireceksiniz:";
	cin>>satir;
	//y�ld�zlar ile ��gen �izdirme
	for(i=1; i<=satir; ++i){//i girmek istedi�in sat�r say�s�ndan k���k veya e�itse d�ng� devam eder. 
		for(bosluk=1; bosluk<=satir-i; ++bosluk){
			cout<<" ";
		}
		while(k!=2*i-1){
	cout<<"* ";
	++k;
}
k=0;
cout<<"\n";
}
//��gensel yap�n�n hesaplanmas�
toplam=satir*(satir+1)/2;
cout<<"T_"<<satir<<"="<<toplam<<endl;
return 0;
}
