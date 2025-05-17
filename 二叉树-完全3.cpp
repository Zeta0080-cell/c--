//������-��ȫ3
#include<bits/stdc++.h>
#define MAXSIZE 100 
using namespace std;
typedef int ElemType;
typedef struct TreeNode{
	ElemType data;//���������� 
	TreeNode *lchild;//ָ������ָ�� 
	TreeNode *rchild;//ָ���Һ���ָ�� 
}TreeNode;
typedef TreeNode* BiTree;//����һ��ָ��TreeNode���͵�ָ�� 

char str[]="ABDH#K###E##CFI###G#J##";
int idx=0;

void createTree(BiTree *T)//����Ϊ����ָ�룬���������޸���Ӧ��ֵ 
{
	ElemType ch;
	ch=str[idx++];
	if(ch=='#')
	{
		*T=NULL;	
	}	
	else
	{
		*T=(BiTree)malloc(sizeof(TreeNode));//��̬������Ŀռ� 
		(*T)->data=ch;
		createTree(&(*T)->lchild);//�������ӽ�� 
		createTree(&(*T)->rchild);//�������ӽ�� 
	}
} 

void preOrder(BiTree T)
{
	if(T==NULL)//�������ս��ֱ�ӷ��� 
	{
		return;
	}
	printf("%c ",T->data);//���ʸ���� 
	preOrder(T->lchild);//�ݹ�������� 
	preOrder(T->rchild);//�ݹ�����ҽ�� 
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
