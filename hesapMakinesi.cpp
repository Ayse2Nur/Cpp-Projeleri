#include <iostream>
using namespace std;
int main() {
	int sayi_1, sayi_2,sonuc;
	bool sonuc_hesapla; //bool deðiþken tipi true ya da false deðiþken deðeri alýr.
	char islem, cevap='e'; 
	while(cevap=='e'){ //e karekteri girdikçe döngü devam eder.
		cout<<"islem giriniz:"<<endl;
		cin>>sayi_1>>islem>>sayi_2;
		sonuc_hesapla=true;
	//switch-case kullanýmý
		switch(islem){
		case '+':
			sonuc=sayi_1+sayi_2;
			break;//sonucu bulduktan sonra durmasý için break kullanýlmazsa diðer iþlemleri de yapmaya devam eder ve ekrana bütün iþlem sonuçlarý yazar.
		case '-':
			sonuc=sayi_1-sayi_2;
			break;
		case '*':
			sonuc=sayi_1*sayi_2;
			break;
		case '/':
		if(sayi_2==0){//0' bolunme hatasýný önlemek için
			cout<<"Bolum sifir olmaz."<<endl;
			sonuc_hesapla=false;
			break;
		}
		sonuc=sayi_1/sayi_2;
		break;
		case '%':
			sonuc=sayi_1%sayi_2;
			break;
		default: //istenilen dýþýnda bir iþlem yapýldýðý zaman devreye girer.
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
