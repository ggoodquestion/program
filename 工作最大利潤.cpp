#include<iostream>
#include<algorithm>
using namespace std;

struct job{
	int t;
	int x;
};

bool cmp1(job a, job b){
	if(a.x == b.x) return a.t < b.t;
	return a.x > b.x;
}

bool cmp2(job a, job b){
	return a.t < b.t;
}

int main(){
	int n, now, c;
	while(cin >> n){
		job jb[101], ans[101];
		for(int i = 0; i < n; i++){
			cin >> jb[i].t >> jb[i].x;
		}
		sort(jb, jb+n, cmp1);
		c = 1;
		ans[0] = jb[0];
		for(int i = 1; i < n; i++){
			int j;
			bool found = false;
			for(j = 0; j < c; j++){
				if(ans[j].t >= jb[i].t){
					found = true;
					break;
				}
			}
			while(found && (j < c-1) && (ans[j+1].t == ans[j].t)) j++;
			if(!found){
				ans[c] = jb[i];
				c++;
				sort(ans, ans+c, cmp2);
			}else if((j+1) < jb[i].t){
				ans[c] = jb[i];
				c++;
				sort(ans, ans+c, cmp2);
			}
		}
		int sum = 0;
		for(int i = 0; i < c; i++){
			sum += ans[i].x;
		}
		cout << sum << endl;
	}
}
