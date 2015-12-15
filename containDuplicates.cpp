#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
using namespace std;

/*space comlexity is O(n), time complexity is O(n)*/
/*hashmap solution*/
bool containDuplicate_1(vector<int>& nums){
	unordered_map<int,int> record;
	for(int i=0;i<nums.size();i++){
		int n=nums[i];
		if(record.count(n)>0)
			return true;
		else
			record.insert(make_pair<int,int>(n,1));
	}
	return false;
}

/*space complexity is O(1),time complexity is O(nlogn)*/
/*sort vector first, then find out if there are duplicates*/

void QuickSort(vector<int>& nums){
//quick sort
	int pivot=nums[0]
}



int main(){
	vector<int> test;
	for(int i,j=0;j<5;j++){
		cin>>i;
		test.push_back(i);
	}

	if(containDuplicate_1(test))
		cout<<"It has duplicates"<<endl;
	else
		cout<<"It has no duplicates"<<endl;
	return 0;
}