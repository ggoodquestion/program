#include<iostream>
#include<algorithm>
using namespace std;

struct job{
	int s;
	int e;
};

bool cmp(job a, job b){
	return a.e < b.e;
}

int main(){
	int n, now, ans;
	while(cin >> n){
		job jo[101];
		for(int i = 0; i < n; i++){
			cin >> jo[i].s >> jo[i].e;
		}
		sort(jo, jo+n, cmp);
		ans = 0;
		now =-1;
		for(int i = 0; i < n; i++){
			if(now <= jo[i].s){
				ans++;
				now = jo[i].e;
			}
		}
		cout << ans << endl;
	}
}
