#include<iostream>

using namespace std;
// 树的存储结构
// 1> 孩子兄弟表示法，用二叉链表作为树的存储结构
#define ElemType char
struct CSNode
{
	ElemType data;// 存放数据元素
	CSNode* firstclid; // 指向第一个孩子节点的指针
	CSNode* nextsibling; // 指向下一个兄弟节点的指针
};
// 2> 双亲表示法
// 采用一组连续的空间来存储每个节点，每个节点都有一个整形的伪指针，存放双亲节点的数组下标。
// 根节点的下标为0，其伪指针固定为-1。
#define MAXSIZE 50
// 节点结构体
struct PTNode
{
	ElemType data; // 存放节点数据元素
	int parent; // 指向双亲结点的位置
};
// 树的结构体
struct PTree
{
	PTNode nodes[MAXSIZE]; // 树的节点
	int nn; // 树中结点数量
};
// 双亲表示法求双亲节点的时间复杂度O(1),求子节点的时间复杂度O(n)
// 3> 孩子表示法
// 孩子表示法是将每个子节点存放在单链表中，n个节点就有n个孩子链表(叶节点的孩子链表为空)
// 孩子节点的链表结构体
struct CNode
{
	int nn; // 存放孩子节点下标
	CNode* next; // 指向下个孩子节点的地址
};
// 节点的结构体
struct PNode
{
	ElemType data; // 存放节点数据元素
	CNode* child; // 指向孩子节点链表的地址
};
// 树的结构体
struct CTree
{
	PNode nodes[MAXSIZE];// 树的节点
	int nn; // 树中结点数量
};
// 孩子表示法求双亲节点的时间复杂度O(n),求子节点的时间复杂度O(1)
int main()
{

	return 0;
}
// 树到二叉树：左节点还是左节点，右节点和根节点断开，右节点为根左节点的右子节点.如果有树有多个子树，则右节点为根左节点的右子节点的有右子节点