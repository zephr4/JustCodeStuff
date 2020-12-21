struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        int countNodes (TreeNode root) {
            if (root != nullptr) {
                countNodes(root->left);
                countNodes(root);
                countNodes(root->right);
            }

        return root->val;
    }
}

int main() {
    TreeNode test(2);
    TreeNode left(3);
    TreeNode right(1);
    test.left = &left;
    test.right = &right;
    Solution sol;
    sol.countNodes(&test);

    return 0;
}