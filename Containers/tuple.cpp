#include <bits/stdc++.h>

using namespace std;

int main(){
	tuple <string,int,int>t1;
	t1 = make_tuple("Vivu",1,2);
	cout<<get<0>(t1)<<" "<<get<1>(t1);	//get<index>(tuple_obj)
	return 0;

	//tuples can be compared like pair
}