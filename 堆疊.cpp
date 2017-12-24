#include<iostream>
using namespace std;

#define size 100

void push(int);
int pop();
void printStack();

struct Stack{
	int s[size];
	int top;
	Stack(){top = -1;}
};

Stack st;

int main(){
	for(int i = 1; i < 5; i++){
		push(i);
		printStack();
	}
	cout <<"top: " << pop() << endl;
	printStack();
}

void push(int i){
	if(st.top == size-1){
		cout << "Is full." <<endl;
	}else{
		st.s[++st.top] = i;
	}
}

int pop(){
	if(st.top == -1){
		cout << "Is empty." << endl;
	}else{
		return st.s[st.top--];
	}
}

void printStack(){
	cout << "Below: ";
	for(int i = 0; i <= st.top; i++){
		cout << st.s[i] << " ";
	}
	cout << endl;
}
