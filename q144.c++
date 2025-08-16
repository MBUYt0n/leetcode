
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
	vector<int> preOrderTraversal(TreeNode *root)
	{
		vector<int> result;
		stack<TreeNode *> st;
		TreeNode *curr = root;

		while (curr || !st.empty())
		{
			while (curr)
			{
				result.push_back(curr->val);
				st.push(curr);
				curr = curr->left;
			}
			curr = st.top();
			st.pop();
            curr = curr->right;
		}
		return result;
	}
};

int main()
{
    Solution solution;
    TreeNode *root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    vector<int> result = solution.preOrderTraversal(root);
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;

    // Clean up memory
    delete root->right->left;
    delete root->right;
    delete root;

    return 0;
}