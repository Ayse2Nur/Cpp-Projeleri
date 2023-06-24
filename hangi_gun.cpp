#include <iostream>
using namespace std;
int main(){
	int gun;
	cout<<"Haftanini kacinci gunundeyiz? \n";
	cin>>gun;
	switch(gun){
		case 1:
			cout<<"Bugun Pazartesi \n";
			break;
			case 2:
				cout<<"Bugun Salý \n";
				break;
				case 3:
					cout<<"Bugun Carsamba \n";
					break;
					case 4:
						cout<<"Bugun Persembe \n";
						break;
						case 5:
							cout<<"Bugun Cuma \n";
							break;
							case 6:
								cout<<"Bugun Cumartesi \n";
								break;
								case 7:
									cout<<"Bugun Pazar \n";
									break;
									default:
										cout<<"Haftada oyle bir gun yok!\n";
										return 0;
	}
}
