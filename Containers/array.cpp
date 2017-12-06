#include <bits/stdc++.h>
#include <array>
using namespace std;
/*
template <class  x>
class List{
    x a[10];
};
*/
int main(){
    //List<int> l;
    array<int,4> arr={99,88,77,66};
    array<int,4> obj={1,2,3};   //<data_type,size_of_array>
                        //can be initialised as array<int,4> obj = {1,2,3}
    cout<<obj.at(0);    //or obj[0]
    cout<<obj.front();  // 1
    cout<<obj.back();   // 0
    obj.fill(7);        // all cells have 7

    arr.swap(obj);      //same size and type
    for(int i=0;i<4;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<4;i++)
        cout<<obj[i]<<" ";

    cout<<obj.size();
    return 0;
}