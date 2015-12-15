#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void moveZeroes(vector<int>& nums){
	for(int i,j=0;j<nums.size() && i<nums.size();){
		if(nums[i]==0 && nums[j]!=0) {
			swap(nums[i],nums[j]);
			cout<<123<<endl;
		}
		else{
			while(nums[i]!=0 && i<nums.size()){ 
				i++;
				j=i;
			}
			while(nums[j]==0 && j<nums.size()) j++;
		}
	}
}

int main(){
	vector<int> num;

	for(int i=0;i<5;i++){
		int j;
		cin>>j;
		num.push_back(j);
	}
	moveZeroes(num);
	for(int i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	cout<<endl;

	return 0;
}