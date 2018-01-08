#include<iostream>
using namespace std;

int main(){
	int n, s, k;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> k;
			s = k / 3;
			cout << s*(3+3*s)/2 << endl;
		}
	}
}
