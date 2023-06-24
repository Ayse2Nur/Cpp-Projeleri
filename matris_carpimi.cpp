#include <iostream>
using  namespace  std;
int main(){
	int m,n,p,q,c,d,k, toplam=0;
	int ilk[10][10], ikinci[10][10], carp[10][10];
	cout<<"ilk matrisin satir ve sutun sayilarini giriniz:";
	cin>>m>>n;
	cout<<"ilk matrisin bilesen degerlerini giriniz:";
	for(c=0;c<m;c++)
		for(d=0;d<n; d++)
			cin>>ilk[c][d];
			cout<<"ikinci matrisin satir ve sutun sayilarini giriniz:";
			cin>>p>>q;
			if(n!=p)
			cout<<"bu matris carpilamaz!";
			
			else{
				cout<<"ikinci matrisin bilesen degerlerini giriniz:";
				for(c=0; c<p; c++)
				for(d=0; d<p; d++)
				cin>>ikinci[c][d];
				
				for(c=0; c<m; c++){
					for(d=0; d<q; d++){
						for(k=0; k<p; k++){
							toplam=toplam+ilk[c][k]*ikinci[k][d];
						}
						carp[c][d]=toplam;
						toplam=0;
					}
				}
				cout<<"Matrislerin carpimi:\n";
				for(c=0; c<m; c++){
					for(d=0; d<q; d++)
					cout<<carp[c][d]<<"\t";
					cout<<"\n";
				}
			}
			return 0;
	}
