/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
/* Solved this by creating a hieght funtion where it stores the hight of the tree of the left side and hight oc the right side and then it is checked that if there is diffrence of more that 1 if so then it returns false*/

class Solution {
public:
int height(TreeNode* root) {
    if (!root) return 0;

    int left = height(root->left);
    if (left == -1) return -1;

    int right = height(root->right);
    if (right == -1) return -1;

    if (abs(left - right) > 1)
        return -1;

    return 1 + max(left, right);
}

bool isBalanced(TreeNode* root) {
    return height(root) != -1;
}
    
};
