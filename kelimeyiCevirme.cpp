#include <iostream>
using namespace std;

int main(){
	char kelime[100], tmp;//karekter t�r�nde boyutu 100 olan kelime  ve tmp de�i�kenini tan�mlad�k.
	cout<<"Bir kelime giriniz: ";
	cin>>kelime;
	int uzunluk;
	for(uzunluk=0; kelime[uzunluk]!='\0'; ++uzunluk);
	for(int i=0; i<(uzunluk/2); ++i){//kelime ortas�n� belirler ve yer de�i�tirir.
	tmp=kelime[i];
	kelime[i]=kelime[uzunluk-i-1];//uzunluk-i-1 almam�z�n sebebi indislerin 0 dan ba�lamas�.
	kelime[uzunluk-i-1]=tmp;
}
cout<<kelime;//ters �evrilen kelimeyi ekrana yazar.
	return 0;
}
