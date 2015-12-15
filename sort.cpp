#include <vector>
#include <iostream>
#include <utility>
using namespace std;

/*****Quick Sort*****/
void Partition(vector<int>& num,int &pivot,int high){
	for(int low=pivot+1;low<=high;){
		if(num[low]<num[pivot]) low++;
		if(num[high]>=num[pivot]) high--;

		if(num[low]>=num[pivot] && num[high]<num[pivot] && low<high) swap(num[low++],num[high--]);
	}
	if(num[high]<num[pivot]){
		swap(num[pivot],num[high]);
		pivot=high;
	} 
	
}

void QuickSort(vector<int>& num,int low,int high){
	int pivot=low;

	if(high>low){
		Partition(num,pivot,high);
		QuickSort(num,low,pivot-1);
		QuickSort(num,pivot+1,high);
	}
}


int main(){
	vector<int> num;

	for(int i=0;i<5;i++){
		int j;
		cin>>j;
		num.push_back(j);
	}

	QuickSort(num,0,num.size()-1);


	for(vector<int>::iterator it=num.begin();it!=num.end();++it){
		cout<<*it<<" ";
	}
	cout<<endl;

	return 0;
}