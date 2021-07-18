#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
    struct TreeNode *right;

	TreeNode(int val1)
    {
        val = val1;
 
        // Left and right child for node
        // will be initialized to null
        left = NULL;
        right = NULL;
    }
};
vector<int> v;
vector<int> spiraltree(TreeNode* root)
{
	//vector<int> v;
	stack<TreeNode*> s1;
	stack<TreeNode*> s2;

	s1.push(root);
	while(!s1.empty() || !s2.empty())
	{
	while(!s1.empty())
	{
		
		
			TreeNode* f = s1.top();
			s1.pop();

			if(f->left) s2.push(f->left);
			if(f->right) s2.push(f->right);

			v.push_back(f->val);

		
	}
	while(!s2.empty())
	{
		TreeNode* f = s2.top();
		s2.pop();
if(f->right) s1.push(f->right);
		if(f->left) s1.push(f->left);
		

		v.push_back(f->val);
	}
}

return v;
}

int main()
{
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);
	root->right->left = new TreeNode(6);
	root->right->right = new TreeNode(7);
	

 spiraltree(root);

	
	

	

	for(int i = 0;i<v.size();i++)
		{ printf("%d ",v[i]);


		}

// stack<TreeNode*> s1;
// 	stack<TreeNode*> s2;

// 	s1.push(root);
// 	while(!s1.empty() || !s2.empty())
// 	{
// 	while(!s1.empty())
// 	{
		
		
// 			TreeNode* f = s1.top();
// 			s1.pop();

// 			if(f->left) s2.push(f->left);
// 			if(f->right) s2.push(f->right);

// 			printf("%d ",f->val);

		
// 	}
// 	while(!s2.empty())
// 	{
// 		TreeNode* f = s2.top();
// 		s2.pop();

// 		if(f->left) s1.push(f->left);
// 		if(f->right) s1.push(f->right);

// 		printf("%d ",f->val);
// 	}
// }

return 0;
	

}