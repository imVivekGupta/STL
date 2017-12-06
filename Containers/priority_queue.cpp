#include <iostream>
#include <queue>

using namespace std;

int main(){
	priority_queue<int> pq;		//optional second argument to specify basis of adapter 
	pq.push(12);
	pq.empty();
	pq.size();
	int x = pq.top();			//sorts greatest to least
	pq.pop();

	/*
		bool Car::operator<(const Car & c1) const{
			return speed < c1.speed;
		}
	*/
	return 0;
}