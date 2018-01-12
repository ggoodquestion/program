#include<iostream>
#include<cstring>
using namespace std;

char bm[51][51];
int bn[51][51];

void find(int x, int y){
	for(int i = x-1; i <= x+1; i++){
		for(int j = y-1; j <= y+1; j++){
			if((i >= 0 && j >= 0)){
				bn[i][j]++;
			}
		}
	}
	bn[x][y]--;
}

int main(){
	int n;
	int a, b;
	
	while(cin >> n){
		for(int q = 0; q < n; q++){
			cin >> a >> b;
			for(int i = 0; i < b; i++){
				for(int j = 0; j < a; j++){
					cin >> bm[i][j];
				}
			}
			memset(bn, 0, sizeof(bn));
			for(int i = 0; i < b; i++){
				for(int j = 0; j < a; j++){
					if(bm[i][j] == '*'){
						find(i, j);
					}
				}
			}
			
			
			
			
			for(int i = 0; i < b; i++){
				for(int j = 0; j < a; j++){
					if(bm[i][j] == '*'){
						cout << "*";
					}else if(bn[i][j] == 0){
						cout << "-";
					}else{
						cout << bn[i][j];
					}
					
				}
				cout << endl;
			}
			cout << endl;
		}
	}
}

