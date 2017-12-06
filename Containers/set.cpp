#include <bits/stdc++.h>
#define present(container,element) (container.find(element)!=container.end())
#define cpresent(container, element) (find(all(container),element) != container.end()) 
#define all(v) v.begin(),v.end()

using namespace std;

int main(){
	set<int> s;
	/*
	int data[5] = { 5, 1, 4, 2, 3 }; 
 	set<int> S(data, data+5);		//rid of duplicates and sort

 	vector<int> v; 
 	// … 
 	set<int> s(all(v)); 
	vector<int> v2(all(s));
 	*/

	for(int i=10;i>0;i--)
		s.insert(i);

	s.erase(5);
	/*
		s.erase(itr); 	//removes value pointed by itr
		s.erase(it1,it2);	//removes all values [it1,it2)
	*/

	set<int>:: iterator it = s.find(9);
	if(it!=s.end())			//9 is present
	{
		//code
	}

	if(present(s,1))
		cout<<"Hi";
	return 0;
}