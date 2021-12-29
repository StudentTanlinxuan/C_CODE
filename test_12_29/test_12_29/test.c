#include<stdio.h>
////给定一个二叉树，找出其最大深度。
////二叉树的深度为根节点到最远叶子节点的最长路径上的节点数。
////说明 : 叶子节点是指没有子节点的节点。
////二叉树的最大深度
////https://leetcode-cn.com/problems/maximum-depth-of-binary-tree/
//struct TreeNode {
//    int val;
//    struct TreeNode* left;
//    struct TreeNode* right;
//};
//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//        return 0;
//    int leftDepth = maxDepth(root->left);
//    int rightDepth = maxDepth(root->right);
//    return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
//
//}
//给定一个二叉树，判断它是否是高度平衡的二叉树。
//本题中，一棵高度平衡二叉树定义为：
//一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1
//平衡二叉树
//https://leetcode-cn.com/problems/balanced-binary-tree/
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
int maxDepth(struct TreeNode* root) {
    if (root == NULL)
        return 0;
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}
bool isBalanced(struct TreeNode* root) {
    if (root == NULL)
        return true;
    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);
    return abs(leftDepth - rightDepth) < 2
        && isBalanced(root->left)
        && isBalanced(root->right);

}