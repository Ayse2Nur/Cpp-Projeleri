#include <iostream>
using namespace std;
int main() {
	int sayi_1, sayi_2,sonuc;
	bool sonuc_hesapla; //bool de�i�ken tipi true ya da false de�i�ken de�eri al�r.
	char islem, cevap='e'; 
	while(cevap=='e'){ //e karekteri girdik�e d�ng� devam eder.
		cout<<"islem giriniz:"<<endl;
		cin>>sayi_1>>islem>>sayi_2;
		sonuc_hesapla=true;
	//switch-case kullan�m�
		switch(islem){
		case '+':
			sonuc=sayi_1+sayi_2;
			break;//sonucu bulduktan sonra durmas� i�in break kullan�lmazsa di�er i�lemleri de yapmaya devam eder ve ekrana b�t�n i�lem sonu�lar� yazar.
		case '-':
			sonuc=sayi_1-sayi_2;
			break;
		case '*':
			sonuc=sayi_1*sayi_2;
			break;
		case '/':
		if(sayi_2==0){//0' bolunme hatas�n� �nlemek i�in
			cout<<"Bolum sifir olmaz."<<endl;
			sonuc_hesapla=false;
			break;
		}
		sonuc=sayi_1/sayi_2;
		break;
		case '%':
			sonuc=sayi_1%sayi_2;
			break;
		default: //istenilen d���nda bir i�lem yap�ld��� zaman devreye girer.
		   	cout<<"Yanlis islem girdiniz."<<endl;
		   	sonuc_hesapla=false;
		   	break;
		   }
	       if(sonuc_hesapla){
	       	cout<<sayi_1<<" "<<islem<<" "<<sayi_2<<"="<<sonuc<<endl;
		   }
		   cout<<"Islem yapmaya devam etmek istiyor musunuz?"<<endl;
		   cin>>cevap;
	}
	return 0;
}
