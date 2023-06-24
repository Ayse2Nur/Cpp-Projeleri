#include<iostream>
using namespace std;
int f(char s[], char t[]);
int main(){
	char str1[]="Ankara";
	char str2[]="Antalya";
	if(1==f(str1, str2))
	cout<<str1<<" ile "<<str2<<" esit uzunluktadırlar.";
	else
	cout<<str1<<" ile "<<str2<<" esit uzunlukta degildirler.";
	return 0;
}
int f(char s[], char t[]){
	int i=0, j=0;
	while ('\0'!=s[i])
	i++;
	while('\0'!=t[j])
	j++;
	if(i==j)
	return 1;
	else
	return 0;
}
