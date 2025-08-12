
#include <algorithm>
#include <iostream>
#include <stack>
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
	vector<int> postorderTraversal(TreeNode *root)
	{
		vector<int> result;
		stack<TreeNode *> st;
		TreeNode *curr = root;
		TreeNode *prev = nullptr;

		while (curr || !st.empty())
		{
			while (curr)
			{
				st.push(curr);
				curr = curr->left;
			}
			curr = st.top();
			// If right child doesn't exist or already visited
			if (!curr->right || curr->right == prev)
			{
				result.push_back(curr->val);
				st.pop();
				prev = curr;
				curr = nullptr;
			}
			else
			{
				curr = curr->right;
			}
		}
		return result;
	}
};