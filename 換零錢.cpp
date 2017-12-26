#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n, x, m[50001], v[1001];
	while(cin >> n){
		for(int i = 0; i < n; i++) cin >> v[i];
		cin >> x;
		memset(m, 0x6f, sizeof(m));
		m[0] = 0;
		for(int i = 0; i < n; i++){
			for(int j = v[i]; j <= x; j++){
				if(m[j - v[i]]+1 < m[j]){
					m[j] = m[j - v[i]]+1;
				}
			}
		}
		cout << m[x] <<endl;
	} 
}
