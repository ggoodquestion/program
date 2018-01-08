#include<iostream>
#include<cstring>
using namespace std;

string s3;

int main(){
	string s1, s2;
	int lcs[101][101], map[101][101];
	int s1n, s2n;
	while(getline(cin, s1)){
		getline(cin, s2);
		s1n = s1.length();
		s2n = s2.length();
		memset(lcs, 0, sizeof(lcs));
		memset(map, 0, sizeof(map));
		for(int i = 0; i < s1n; i++){
			for(int j = 0; j < s2n; j++){
				if(s1[i] == s2[j]){
					lcs[i+1][j+1] = lcs[i][j]+1;
					map[i+1][j+1] = 3;
				}else{
					if(lcs[i][j+1] > lcs[i+1][j]){
						lcs[i+1][j+1] = lcs[i][j+1];
						map[i+1][j+1] = 1;  
					}else{
						lcs[i+1][j+1] = lcs[i+1][j];
						map[i+1][j+1] = 2;  
					}
				}
			}
		}
		cout << lcs[s1n][s2n] << endl;
		int now;
		int i = s1n, j = s2n;
		while(!(i== 0 || j == 0)){
			if(map[i][j] == 3){
				cout << s1[i-1];
				i--;
				j--;
			}
			if(map[i][j] = 1){
				i--;
			}
			if(map[i][j] = 2){
				j--;
			}
		}
		cout << endl;
	}
} 
