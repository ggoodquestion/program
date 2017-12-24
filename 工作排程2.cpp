#include<iostream>
#include<algorithm>
using namespace std;

struct job{
	int s;
	int e;
};

bool cmp(job a, job b){
	if(a.s == b.s) return a.e < b.e;
	return a.s < b.s;
}

int main(){
	int n, m[101], ans;
	while(cin >> n){
		job jo[101];
		for(int i = 0; i < n; i++){
			cin >> jo[i].s >> jo[i].e;
		}
		sort(jo, jo+n, cmp);
		ans = 1;
		m[0] = jo[0].e;
		for(int  i = 1;i < n; i++){
			bool found = false;
			for(int j = 0; j < ans; j++){
				if(m[j] <= jo[i].s){
					m[j] = jo[i].e;
					found = true;
					break;
				}
			}
			if(found == false){
				m[ans] = jo[i].e;
				ans++;
			}
		}
		cout << ans << endl;
	}
}
