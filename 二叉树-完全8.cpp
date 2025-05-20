//二叉树-完全8
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct TreeNode{
	ElemType data;
	struct TreeNode *lchild;
	struct TreeNode *rchild;
}TreeNode;  
typedef TreeNode* BiTree;

char str[]="ABDH#K###E##CFI###G#J##";
int idx=0;

void createTree(BiTree *T)//二级指针，才能修改相应的值 
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
	if(T==NULL)
	{
		return;
	}
	printf ("%c",T->data);
	preOrder(T->lchild);
	preOrder(T->rchild);	
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
