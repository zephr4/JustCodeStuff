struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode right) : val(x), left(left), right(right) {}
};

int maxPathSum (TreeNode root) {
    int max = INT_MIN;
    int currentSum = 0;
    int tempSum = 0;

    if (root == nullptr) {
        return;
    }
    else if (root->left == nullptr && root->right == nullptr) {
        max = root->val;
    }
    else if()

    return max;
}

int main {
    TreeNode test(2);
    TreeNode left(3);
    TreeNode right(1);
    test.left = &left;
    test.right = &right;
    Solution sol;
    sol.maxPathSum(&test);

    return 0;
}