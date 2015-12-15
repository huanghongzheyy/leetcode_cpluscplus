#include <iostream>
#include <vector>

using namespace std;
struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};
int main(){
  	vector<TreeNode*> tree;
  	TreeNode *root1=NULL;
  	tree.push_back(root1);

  	TreeNode *node1=new TreeNode(1);
  	TreeNode *node2=new TreeNode(1);
  	cout<<"node1 address: "<<&node1<<endl;
  	cout<<"node2 address: "<<&node2<<endl;
  	TreeNode *node3=node2;

  	if(node3==node2) cout<<"node3 share the same address with node 2"<<endl;
  	//cout<<tree.size()<<endl;
	return 0;
}