#include <iostream>
#include <vector>

using namespace std;

int main(){
	pair<int, string> p;
	p.first=1; 
	p.second="Hello";
	vector<int> vect{1,2,3,4};
	vector<pair<int, int> > pvect{
		{1,2},{3,4},{5,6}};
		pvect.push_back({7,8});
	for(auto i=0;i<pvect.size();++i){
		cout << pvect[i].first << " " << pvect[i].second<< "\n ";
	}

  return 0;
	
}