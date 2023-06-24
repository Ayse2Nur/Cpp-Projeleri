#include <iostream>
using namespace std;
#define SINIF_MEVCUDU 50
class  Ogrenci{
	int no, vize, final;
	public:
		int noAl()
		{
		return no;
		}
		int vizeAl()
		{
			return vize;
		}
		int finalAl()
		{
			return final;
		}
		void noAta(int _no)
		{
			no=_no;
		}
		void vizeAta(int _vize)
		{
			vize=_vize;
		}
		void finalAta(int _final)
		{
			final=_final;
		}
};
int main(){
	Ogrenci sinif[SINIF_MEVCUDU];
	int no, vize, final, n;
	float ortalama;
	cout<<"kac ogrenci gireceksiniz? ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<endl<<"Ogrenci numarasi, vize ve final giriniz:";
		cin>>no>>vize>>final;
		Ogrenci ogrenci;
		ogrenci.noAta(no);
		ogrenci.vizeAta(vize);
		ogrenci.finalAta(final);
		sinif[i]=ogrenci;
	}
	for(int i=0; i<n; i++){
		ortalama=0.4*sinif[i].vizeAl()+0.6*sinif[i].finalAl();
		cout<<sinif[i].noAl()<<" numarali ogrenci ortalamasi: "<<ortalama<<endl;
	}
	return 0;	
}
