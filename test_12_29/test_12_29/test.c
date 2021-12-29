#include<stdio.h>
////����һ�����������ҳ��������ȡ�
////�����������Ϊ���ڵ㵽��ԶҶ�ӽڵ���·���ϵĽڵ�����
////˵�� : Ҷ�ӽڵ���ָû���ӽڵ�Ľڵ㡣
////��������������
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
//����һ�����������ж����Ƿ��Ǹ߶�ƽ��Ķ�������
//�����У�һ�ø߶�ƽ�����������Ϊ��
//һ��������ÿ���ڵ� ���������������ĸ߶Ȳ�ľ���ֵ������ 1
//ƽ�������
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