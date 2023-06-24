#include <iostream>
using namespace std;
int main(){
	char unsuz[21]={'b','c','d','f','g','�','h','j','k','l','m','n','p','r','s','�','t','v','y','z'};
	char unlu[8]={'a','e','�','i','o','�','u','�'};
	char kelime[20];//en fazla 20 karekterli bir kelime olsun
	int uzunluk=0;
	bool kelimeTurkceMi=true;
	cout<<"Turkce olup-olmadigi kontrol edilecek kelimeyi giriniz: "<<endl;
	cin>>kelime;
	//kelimenin ka� karekterden olu�tu�unu hesapla ve b�t�n karekterleri k���k harfe �evir.
	for(int i=0; kelime[i]!='\0';i++){
		uzunluk++;
		kelime[i]=tolower(kelime[i]);//tolower sitringe atanan metnin harflerini k���k harfe �evirir.
	}
	
	//kal�nl�k incelik
	bool kalin=false, ince=false;
	for(int i=0; i<uzunluk; i++)
{
    for(int j=0; j<4; j++){
    	if(kelime[i]==unlu[j*2]){
    		kalin=true;
		}
		else if(kelime[i]==unlu[(j+1)*2-1]){
			ince=true;
		}
	}	
}
if(kalin==ince){
	cout<<"kalinlik incelik bakimindan kelime T�rkce degildir."<<endl;
	kelimeTurkceMi=false;
	return 0;
}
//d�zl�k yuvarlakl�k
bool duz=false, yuvarlak=false;
for(int i=0; i<uzunluk; i++){
	for(int j=0; j<4; j++){
		if(kelime[i]==unlu[j]){
			duz=true;
		}
		else if(kelime[i]==unlu[j+4]){
			yuvarlak=true;
		}
	}
}
if(duz==yuvarlak){
	cout<<"duz yuvarlakl�k bak�m�ndan kelime Turkce degildir."<<endl;
	kelimeTurkceMi=false;
	return 0;
}
//iki �nl�n�n yan yana gelmesi
for(int i=0; i<uzunluk-1; i++){
	for(int j=0; j<8; j++){
		if(kelime[i]==unlu[j]){
			for(int k=0; k<8; k++){
				if(kelime[i+1]==unlu[k]){
					cout<<"Turkce''de iki unlu yan yana gelmez. Kelime Turkce degil."<<endl;
					kelimeTurkceMi=false;
					return 0;
				}
			}
		}
	}
}
//f, j, h harfleri T�rk�e kelimelerde yok.
for (int i=0; i<uzunluk-1; i++){
	if(kelime[i]=='f' || kelime[i]=='j' || kelime[i]=='h'){
		cout<<"Turkce'de f, j, h harfleri olmadigindan kelime Turkce degildir."<<endl;
		kelimeTurkceMi=false;
		return 0;
	}
}
//c,�,l,m,n,r,v,z harfleri kelimenin ba��nda bulunamaz.
if(kelime[0]=='c' || kelime[0]=='�' || kelime[0]=='l' || kelime[0]=='m' || kelime[0]=='n' || kelime[0]=='r' || kelime[0]=='v' || kelime[0]=='z'){
	cout<<"Turkce'de c, �, l, m, n, r, v, z harfleri kelimenin bas�nda bulunmadigindan kelime Turkce degildir."<<endl;
	kelimeTurkceMi=false;
	return 0;
}
//ba�ta �ift sessiz harf bulunmaz.
for(int i=0; i<21; i++){
	for(int j=0; j<21; j++){
		if(kelime[0]==unsuz[i] && kelime[0]==unsuz[j]){
			cout<<"Turkce'de basta iki unsuz harf bulunamayacagindan kelime Turkce degildir."<<endl;
			kelimeTurkceMi=false;
			return 0;
		}
	}
}
if(kelimeTurkceMi==true){
	cout<<kelime<<" "<<"kelimesi Turkce'dir."<<endl;
}
return 0;

}

