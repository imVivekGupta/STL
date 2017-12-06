#include <bits/stdc++.h>

using namespace std;

int main(){
	pair <string,int> p1,p2;		//pair <t1,t2> t1,t2 can be class
	p1 = make_pair("Vivek",20);		//inserting value in pair
	p2 = make_pair("Vineet",27);
	cout<<p1.first<<endl;			//accessing value
	cout<<p1.second<<endl;

	cout<<(p1<p2)<<endl;		//compare 2 pairs based on first
	return 0;
}