#include <iostream>
using namespace std;

/*TreeNode definition*/
struct TreeNode{
	/* data */
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x),left(NULL),right(NULL){}
};

int maxDepth(TreeNode *root){
	int maxDep=0;
	if(!root) return maxDep;


}