#include <iostream>
#include <stack>
#include <utility>
#include <algorithm>
using namespace std;

int main(){
	stack<pair<int,int> > s1;
	s1.push(make_pair(1,1));
	cout<<s1.top().first<<" and "<<s1.top().second<<endl;
	int maxDep=1;
	int dep=1;
	maxDep=max(maxDep,dep);
	cout<<maxDep<<endl;
	return 0;
}