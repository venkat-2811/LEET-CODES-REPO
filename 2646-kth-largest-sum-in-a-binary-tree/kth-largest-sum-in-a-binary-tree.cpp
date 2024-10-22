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
class Solution {
public:
    vector<long> sum;
    void inordertrav(TreeNode* root, int level) {
        if (root == NULL) {
            return;
        }
        if (sum.size() <= level) {
            sum.push_back(0); 
        }
        sum[level] += root->val;

        inordertrav(root->left, level + 1); 
        inordertrav(root->right, level + 1);
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        sum.clear();
        inordertrav(root, 0);

        vector<long> levelSums = sum;
        sort(levelSums.begin(), levelSums.end(), greater<long>());

        if (k - 1 < levelSums.size()) {
            return levelSums[k - 1];
        }
        return -1;
    }
};