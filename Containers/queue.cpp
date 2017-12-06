#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<int> q;
	q.push(10);
	q.pop();		//removes from the front fifo
	q.front();
	q.back();		//latest inserted value
	q.size();
	q.empty();
}