#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	int pair;
	string s;
	stack<char> st;
	while(getline(cin, s)){
		pair = 0;
		while(!st.empty()) st.pop();
		for(int i = 0; i < s.length(); i++){
			if(s[i]=='{'){
				st.push('{');
			}
			if(s[i]=='}'){
				if(st.size() > 0){
					st.pop();
					pair++;
				}else{
					pair--;
					break;
				}
			}
		}
		if(st.size() == 0 && pair >= 0){
			cout << "There are " << pair << " pairs of {}." << endl;
		}else{
			cout << "Can't be any pair." << endl;
		}
	}
}
