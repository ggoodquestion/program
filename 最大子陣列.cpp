#include<iostream>
using namespace std;

int main(){
	while(true){
		int n[10], sum, max;
		for(int i = 0; i < 10; i++){
			cin >> n[i];
		}
		max = -10000;
		sum = 0;
		for(int i = 0; i < 10; i++){
			sum += n[i];
			if(sum < 0) sum = 0;
			if(sum > max) max = sum;
		}
		cout << max << endl;
	}
} 
