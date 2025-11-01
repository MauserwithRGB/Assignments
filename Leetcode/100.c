/**
 * Definition for a binary tree node.
 * struct TreeNode {
 * int val;
 * struct TreeNode *left;
 * struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    // If both nodes are NULL, they are identical
    if (p == NULL && q == NULL) return true;
    
    // If one is NULL but the other isn't, they are different
    if (p == NULL || q == NULL) return false;
    
    // If values are different, trees are not the same
    if (p->val != q->val) return false;
    
    // Recursively check left and right subtrees
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
