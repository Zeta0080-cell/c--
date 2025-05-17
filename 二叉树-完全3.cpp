//二叉树-完全3
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

void createTree(BiTree *T)//这里为二级指针，这样才能修改相应的值 
{
	ElemType ch;
	ch=str[idx++];
	if(ch=='#')
	{
		*T=NULL;	
	}	
	else
	{
		*T=(BiTree)malloc(sizeof(TreeNode));//动态分配结点的空间 
		(*T)->data=ch;
		createTree(&(*T)->lchild);//创建左子结点 
		createTree(&(*T)->rchild);//创建右子结点 
	}
} 

void preOrder(BiTree T)
{
	if(T==NULL)//遍历到空结点直接返回 
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
