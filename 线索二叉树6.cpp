//线索二叉树6 
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct ThreadNode{
	ElemType data;
	struct ThreadNode *lchild;
	struct ThreadNode *rchild;
	int ltag;
	int rtag;
}ThreadNode;
typedef ThreadNode* ThreadTree;

char str[]="ABDH##I##EJ###CF##G##";
int idx=0;

ThreadTree prev;

void createTree(ThreadTree *T)
{
	ElemType ch;
	ch=str[idx++];
	if(ch=='#')
	{
		*T=NULL;
	}
	else
	{
		*T=(ThreadTree)malloc(sizeof(ThreadNode));
		(*T)->data=ch;
		createTree(&(*T)->lchild);
		if((*T)->lchild!=NULL)
		{
			(*T)->ltag=0;
		}
		createTree(&(*T)->rchild);
		if((*T)->rchild!=NULL)
		{
			(*T)->rtag=0;
		}
	}
}

//代码遵循中序遍历的顺序：左子树 → 根节点 → 右子树。
//因此先递归处理左子树（threading(T->lchild)），
//再处理当前节点，最后递归处理右子树（threading(T->rchild)）。
void threading(ThreadTree T)
{
	if(T!=NULL)
	{
		threading(T->lchild)
		if(T->lchild==NULL)
		{
			T->ltag=1;//线索化
			T->lchild=prev;//处理前驱 
		}
		if(prev->rchild==NULL&&prev!=NULL)
		{
			prev->rtag=1;
			prev->rchild=T;//prev指向当前结点 
		}
		prev = T;  // 更新 prev 为当前节点，以便后续处理
        threading(T->rchild);  // 递归线索化右子树
	}
}

void inOrderThreading(ThreadTree *head,ThreadTree T)
{
	*head=(ThreadTree)malloc(sizeof(ThreadNode));
	*head->ltag=0;//非线索，因为要指向左孩子（中序） 
	*head->rtag=1;
	*head->rchild=*head;
	if(*head==NULL)
	{
		*head->lchild=*head;
	}
	else
	{
		*head->lchild=T;//头结点的左孩子指向T
		prev=*head;//开始时，让prev为head结点
		threading(T);//线索化，更新prev值
		prev->rchild=*head;
		prev->rtag=1;//标记线索
		*head->rchild=prev;//闭环 
	}
}

void inOrder(ThreadTree T)
{
	ThreadTree curr;//表示当前结点
	curr=T->lchild;
	while(curr!=T)
	{
		while(curr->ltag==0)
		{
			curr=curr->lchild;//一直向左;	
		}	
		printf("%c",curr->data);
		while(curr->rtag==1&&curr->rchild!=T)
		{
			curr=curr->rchild;//更新当前节点 
			printf("%c",curr->data);
		}
	} 
	curr=curr->rchild;
	printf("\n");
}

int main()
{
	ThreadTree head;
	ThreadTree T;
	createTree(&T);
	inOrderThreading(&head,T);
	inOrder(head); 
	return 0;
}
