void heapify(TreeNode* t)
{
	int l = min(min(t->left->val,t->right->val),t->val);

	if(t->left->val == l) {
		swap(t->left->val , t->val);
	}
	else if(t->right->val == l)
		swap(t->right->val , t->val);

	heapify(t->left);
	heapify(t->right);
}