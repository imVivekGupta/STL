#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <string> v1{"Vivek","Vineet","Vineeta"}; //initialise during declaration 3 element vector
	vector <int> v2;	//zero length vector
	vector <char> v3(5);	//5 element char vector
	vector <char> v4(4,'a');		//4 element char vector with 'a'

	cout<<v4[0]<<" "<<v4[1]<<endl;	//subscript operator valid
    cout<<v3.capacity()<<endl;      //5
    cout<<v3.size()<<endl;          //5
    cout<<v3[0]<<endl;              // <blank>

	cout<<v2.capacity()<<endl;		//0 method returns no of elements it can hold before need to allocate more memory
	v2.push_back(10);				//member function adds value to the vector end

	cout<<v2.capacity()<<endl;		//1
	v2.push_back(20);

	cout<<v2.capacity()<<endl;		//2
	v2.push_back(30);

	cout<<v2.capacity()<<endl;		//4
	v2.push_back(40);
	cout<<v2.capacity()<<endl;		//4

	v2.push_back(50);
	cout<<v2.capacity()<<endl;		//8

	v2.pop_back();		//method removes one element from last without returning any value
	//capacity doesn't reduce bcoz of pop

	v2.at(0);	//or v2[0]

	cout<<v2.front()<<endl;	//returns first and last element of vector
	cout<<v2.back()<<endl;

	cout<<"capacity "<<v2.capacity()<<endl;	//8
	cout<<"size "<<v2.size()<<endl;	//4 no of elements in the vector

	v2.clear();	//removes all elements from vector

	cout<<"capacity "<<v2.capacity()<<endl;	//8
	cout<<"size "<<v2.size()<<endl;	//0

	vector<int> :: iterator itr = v2.begin();

	v2.insert(itr+2,100);		//inserts 100 at index 2 in final vector
  }
	s_box.resize(pow(2,l)-1);
