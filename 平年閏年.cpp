#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int y;
		for(int i = 0; i < n; i++){
			cin >> y;
			if((y%4 == 0 && y%100 != 0) || y%400 == 0){
				cout << "¶|¦~" << endl;
			}else{
				cout << "¥­¦~" << endl; 
			}
		}
	}
}
