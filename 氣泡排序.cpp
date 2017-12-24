#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

#define MAX 10

int main(){
	int n[MAX];
	srand(time(NULL));
	for(int i = 0; i < MAX; i++){
		n[i] = rand()%10+1;
	}
	for(int i = MAX-1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(n[j+1] < n[j]){
				swap(n[j+1], n[j]);
			}
		}
	}
	for(int i = 0; i < MAX; i++){
		cout << n[i] << " ";
	}
}
