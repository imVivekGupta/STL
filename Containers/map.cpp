#include <bits/stdc++.h>

using namespace std;

int main(){

	map<int,string> M;	//int-key string-value
	M[100]="Vivek";
	M[34]="Nishant";

	M.insert(pair<int,string>(205,"sourav"));

	map<int,string> m{{25,"delhi"},{31,"kolkata"},{28,"chennai"},{30,"mumbai"}};

	cout<<m[31]<<endl;	//kolkata
	cout<<m[30]<<endl;	//nothing printed

	map <int,string> :: iterator  p =m.begin();
	while(p!=m.end()){
		cout<<p->second<<endl;
		p++;
	}	

	//m.find(key)
	cout<<M.at(34)<<endl;	//returns value at key 34
	M.size();
	M.empty();				//0 for nonempty or 1 for empty
