//二叉树-完全 
//结点:树中的一个独立单元
//结点的度:结点拥有的子树数称为结点的度
//树的度:树内各结点的最大值
//叶子:度为0的结点或终端结点
//非终端结点:度不为0的结点
//双亲和孩子:结点的子树的根称为该结点的孩子，相应地，该结点为孩子的双亲
//层次:结点的层次从根开始定义，根为第一层，根的孩子为第二层 
#include<bits/stdc++.h>
#define MAXSIZE 100 
using namespace std;
typedef int ElemType;
typedef struct TreeNode{
	ElemType data;//结点的数据域 
	TreeNode *lchild;//指向左孩子指针 
	TreeNode *rchild;//指向右孩子指针 
}TreeNode;
typedef TreeNode* BiTree;//定义一个指向TreeNode类型的指针 

char str[]="ABDH#K###E##CFI###G#J##";
int idx=0;

void createTree(BiTree *T)//传入T的地址 
{
	ElemType ch;
	ch=str[idx++];
	if(ch=='#')
	{
		*T=NULL;	
	}	
	else
	{
		*T=(BiTree)malloc(sizeof(TreeNode));
		(*T)->data=ch;
		createTree(&(*T)->lchild);//创建左子结点 
		createTree(&(*T)->rchild);//创建右子结点 
	}
} 

void preOrder(BiTree T)
{
	if(T==NULL)//根结点为空直接返回 
	{
		return;
	}
	printf("%c ",T->data);//访问根结点 
	preOrder(T->lchild);//递归遍历左结点 
	preOrder(T->rchild);//递归遍历右结点 
}

void inOrder(BiTree T)
{
	if(T==NULL)
	{
		return;
	}
	inOrder(T->lchild);
	printf("%c",T->data);
	inOrder(T->rchild);
}

void postOrder(BiTree T)
{
	if(T==NULL)
	{
		return;
	}
	postOrder(T->lchild);
	postOrder(T->rchild);
	printf("%c",T->data);
}

int main()
{
	BiTree T;
	createTree(&T);
	preOrder(T);
	printf("\n");
	inOrder(T);
	printf("\n");
	postOrder(T);
	printf("\n");
	return 0;
}
