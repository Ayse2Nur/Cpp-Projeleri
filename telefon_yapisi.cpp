#include <iostream>
using namespace std;
struct cep_telefonu{//Bir cep telefonunun bilgilerini modelleyebilen ve saklayabilen yapý
	char marka[10];
	char model[10];
	char isletim_sistemi[10];
	char ekran_boyutu[10];
	int dahili_bellek;
	char kamera_cozunurluk[10];
	char ekran_cozunurluk[10];
};
void bilgileri_al(struct cep_telefonu *x){//parametre olarak bir cep_telefonu yapýsý iþaretçisi alýr ve kullanýcýdan aldýðý bilgileri bu yapýya kaydeder.
	cout<<"Bilgileri giriniz: "<<endl;
	cout<<"Marka: ";
	cin>>x->marka;
	cout<<"Model: ";
	cin>>x->model;
	cout<<"Isletim sistemi: ";
	cin>>x->isletim_sistemi;
	cout<<"Ekran boyutu: ";
	cin>>x->ekran_boyutu;
	cout<<"Dahili bellek: ";
	cin>>x->dahili_bellek;
	cout<<"Kamera cozunurlugu: ";
	cin>>x->kamera_cozunurluk;
	cout<<"Ekran cozunurlugu: ";
	cin>>x->ekran_cozunurluk;
}
void bilgileri_yaz(struct cep_telefonu *x){//parametre olarak bir cep_telefonu yapýsý iþaretçisi alýr ve bu yapýdaki bilgileri ekrana yazdýrýr. 
	cout<<"Cep telefonu bilgileri: "<<endl;
	cout<<"Marka: "<<x->marka<<endl;
	cout<<"Model: "<<x->model<<endl;
	cout<<"Isletim sistemi: "<<x->isletim_sistemi<<endl;
	cout<<"Ekran boyutu: "<<x->ekran_boyutu<<endl;
	cout<<"Dahili bellek: "<<x->dahili_bellek<<endl;
	cout<<"Kamera cozunurlugu: "<<x->kamera_cozunurluk<<endl;
	cout<<"Ekran cozunurlugu: "<<x->ekran_cozunurluk<<endl;
						
}
int main(){
	struct cep_telefonu a;
	bilgileri_al(&a);
	bilgileri_yaz(&a);
	return 0;
}
