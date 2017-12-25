#include<iostream>
#include<cstring>
using namespace std;

struct item{
	int w;
	int v;
};

int main(){
	item a[101];
	int k[1001];
	int  n, ks;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> a[i].w >> a[i].v;
		}
		cin >> ks;
		int p[n][ks+1];
		memset(k, 0, sizeof(k));
		memset(p, -1, sizeof(p));
		for(int i = 0; i < n; i++){
			for(int j = ks; j >= a[i].w; j--){
				if(k[j-a[i].w]+a[i].v > k[j]){
					k[j] = k[j-a[i].w]+a[i].v;
					p[i][j] = i;
				}
			}
		}
		cout << "max price: " << k[ks] << endl;
		int j = ks;
		for(int i = n-1; i >= 0; i--){
			if(p[i][j] >= 0){
				cout << "put " << i+1 << " in pack." << endl;
				j = j-a[i].w;
			}
		}
	}
}
