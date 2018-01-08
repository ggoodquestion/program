#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int k;
		for(int i = 0; i < n; i++){
			cin >> k;
			if(k == 3 || k == 4 || k == 5){
				cout << "Spring" << endl;
			}else if(k == 6 || k == 7 || k == 8){
				cout << "Summer" << endl;
			}else if(k == 9 || k == 10 || k == 11){
				cout << "Autumn" << endl;
			}else if(k == 12 || k == 1 || k == 2){
				cout << "Winter" << endl;
			}
		}
	}
} 
