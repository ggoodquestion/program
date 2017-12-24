#include<iostream>
using namespace std;

#define size 99

void insertQueue(int);
int deletQueue();
void printQueue();

struct Queue{
	int q[size];
	int back;
	int front;
	Queue(){back = -1, front = -1;}
};

Queue qu;

int main(){
	for(int i = 1; i < 5; i++){
		insertQueue(i);
		printQueue();
	}
	cout << "first: " << deletQueue() << endl;
	printQueue();
}

void insertQueue(int n){
	if(qu.back == size-1){
		cout << "Is full." << endl;
	}else{
		qu.q[++qu.back] = n;
	}
}

int deletQueue(){
	if(qu.back == qu.front){
		cout << "Is empty." << endl;
	}else{
		return qu.q[++qu.front];
	}
}

void printQueue(){
	cout << "Below: ";
	for(int i = qu.front+1; i <= qu.back; i++){
		cout << qu.q[i] << " ";
	}
	cout << endl;
}
