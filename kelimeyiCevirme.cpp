#include <iostream>
using namespace std;

int main(){
	char kelime[100], tmp;//karekter türünde boyutu 100 olan kelime  ve tmp deðiþkenini tanýmladýk.
	cout<<"Bir kelime giriniz: ";
	cin>>kelime;
	int uzunluk;
	for(uzunluk=0; kelime[uzunluk]!='\0'; ++uzunluk);
	for(int i=0; i<(uzunluk/2); ++i){//kelime ortasýný belirler ve yer deðiþtirir.
	tmp=kelime[i];
	kelime[i]=kelime[uzunluk-i-1];//uzunluk-i-1 almamýzýn sebebi indislerin 0 dan baþlamasý.
	kelime[uzunluk-i-1]=tmp;
}
cout<<kelime;//ters çevrilen kelimeyi ekrana yazar.
	return 0;
}
