#include <iostream>
using namespace std;

int addDigits(int num){
	int rootNum=(num - 1) %9 +1;
	return rootNum;
}


int main(){
	int num;
	cin>>num;
	cout<<addDigits(num)<<endl;


	return 0;
}