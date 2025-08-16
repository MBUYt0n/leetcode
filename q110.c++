#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr)
	{
	}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr)
	{
	}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right)
	{
	}
};

class Solution
{
	public:
	int maxDepth(TreeNode *root)
	{
		if (root == nullptr)
			return 0;
		int maxL = maxDepth(root->left);
		int maxR = maxDepth(root->right);
		return max(maxL, maxR) + 1;
	}
};

int main()
{
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);

	Solution solution;
	int depth = solution.maxDepth(root);
	cout << "Max depth: " << depth << endl;

	// Clean up memory
	delete root->left->right;
	delete root->left->left;
	delete root->left;
	delete root->right;
	delete root;

	return 0;
}