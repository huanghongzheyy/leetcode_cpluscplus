#include <iostream>
using namespace std;

bool canWinNim(int n){
	if(n%4==0) return false;
	else return true;
}

int main(){
 int n;
 cin>>n;

 if(canWinNim(n))
	cout<<"I Win!"<<endl;
 else
	cout<<"I Lose!"<<endl;
 return 0;
}
