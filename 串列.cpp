#include<iostream>
#include<list>
using namespace std;

void printList(list<int>);

int main(){
	list<int> mlist;
	list<int>::iterator it;
	mlist.push_back(1);
	printList(mlist);
	mlist.push_back(2);
	printList(mlist);
	mlist.push_back(4);
	printList(mlist);
	it = mlist.begin();
	it++;
	it++;
	mlist.insert(it, 3);
	printList(mlist);
	mlist.remove(2);
	cout << "Take off 2." << endl;
	printList(mlist);
}

void printList(list<int> a){
	cout << "Below: ";
	list<int>::iterator i;
	for(i = a.begin(); i != a.end(); i++){
		cout << *i << " ";
	}
	cout << endl;
}
