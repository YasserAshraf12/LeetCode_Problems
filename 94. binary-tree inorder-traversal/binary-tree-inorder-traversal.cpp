#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> inorderTraversal(TreeNode* root);

vector<int> result;

/*
vector<int> inorderTraversal(TreeNode* root) {

    if(root == NULL)
        return {};

    inorderTraversal(root->left);

    result.push_back(root->val);

    inorderTraversal(root->right);

    return result;

}
*/

vector<int> inorderTraversal(TreeNode* root)
{
    vector<int> result;

    stack<TreeNode *> s;
    TreeNode *curr = root;

    while(curr != NULL || s.empty() == false)
    {
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();

        result.push_back(curr->val);

        curr = curr->right;
    }

    return result;
}