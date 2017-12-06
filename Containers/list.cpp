#include <bits/stdc++.h>

using namespace std;

int main(){
	list <int> l1{13,15,90,23,67,45,89,23,21,99};
	list <string> l2{"India","China","America"};

	/*
	list <string> :: iterator  p =l2.begin();
	while(p!=l2.end()){
		cout<<*p<<endl;
		p++;
	}*/

	list <int> :: iterator  p =l1.begin();
	while(p!=l1.end()){
		cout<<*p<<endl;
		p++;
	}

	l1.push_back(20);
	l1.push_front(10);

	p =l1.begin();
	while(p!=l1.end()){
		cout<<*p<<endl;
		p++;
	}

	l1.pop_back();			//doesn't return anything
	l1.pop_front();
	
	l1.sort();
	l1.reverse();
	l1.remove(90);			//removes all occurences of the argument from the list

	l1.clear();				//clears the list

	p =l1.begin();
	while(p!=l1.end()){
		cout<<*p<<endl;
		p++;
	}

	return 0;
}