#include<iostream>
#include<cstring>
using namespace std;

int k[1001], w[101], v[101];
int n, ks;

int main(){
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> w[i]>> v[i];
		}
		cin >> ks;
		memset(k, 0, sizeof(k));
		for(int i = 0; i < n; i++){
			for(int j = ks; j >= w[i]; j--){
				if(k[j-w[i]]+v[i] > k[j]){
					k[j] = k[j-w[i]]+v[i];
				}
			}
		}
		cout << "most price: " << k[ks] << endl;
	}
}
