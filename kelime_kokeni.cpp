#include <iostream>
using namespace std;
int main(){
	char unsuz[21]={'b','c','d','f','g','ð','h','j','k','l','m','n','p','r','s','þ','t','v','y','z'};
	char unlu[8]={'a','e','ý','i','o','ö','u','ü'};
	char kelime[20];//en fazla 20 karekterli bir kelime olsun
	int uzunluk=0;
	bool kelimeTurkceMi=true;
	cout<<"Turkce olup-olmadigi kontrol edilecek kelimeyi giriniz: "<<endl;
	cin>>kelime;
	//kelimenin kaç karekterden oluþtuðunu hesapla ve bütün karekterleri küçük harfe çevir.
	for(int i=0; kelime[i]!='\0';i++){
		uzunluk++;
		kelime[i]=tolower(kelime[i]);//tolower sitringe atanan metnin harflerini küçük harfe çevirir.
	}
	
	//kalýnlýk incelik
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
	cout<<"kalinlik incelik bakimindan kelime Türkce degildir."<<endl;
	kelimeTurkceMi=false;
	return 0;
}
//düzlük yuvarlaklýk
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
	cout<<"duz yuvarlaklýk bakýmýndan kelime Turkce degildir."<<endl;
	kelimeTurkceMi=false;
	return 0;
}
//iki ünlünün yan yana gelmesi
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
//f, j, h harfleri Türkçe kelimelerde yok.
for (int i=0; i<uzunluk-1; i++){
	if(kelime[i]=='f' || kelime[i]=='j' || kelime[i]=='h'){
		cout<<"Turkce'de f, j, h harfleri olmadigindan kelime Turkce degildir."<<endl;
		kelimeTurkceMi=false;
		return 0;
	}
}
//c,ð,l,m,n,r,v,z harfleri kelimenin baþýnda bulunamaz.
if(kelime[0]=='c' || kelime[0]=='ð' || kelime[0]=='l' || kelime[0]=='m' || kelime[0]=='n' || kelime[0]=='r' || kelime[0]=='v' || kelime[0]=='z'){
	cout<<"Turkce'de c, ð, l, m, n, r, v, z harfleri kelimenin basýnda bulunmadigindan kelime Turkce degildir."<<endl;
	kelimeTurkceMi=false;
	return 0;
}
//baþta çift sessiz harf bulunmaz.
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

