//������-��ȫ 
//���:���е�һ��������Ԫ
//���Ķ�:���ӵ�е���������Ϊ���Ķ�
//���Ķ�:���ڸ��������ֵ
//Ҷ��:��Ϊ0�Ľ����ն˽��
//���ն˽��:�Ȳ�Ϊ0�Ľ��
//˫�׺ͺ���:���������ĸ���Ϊ�ý��ĺ��ӣ���Ӧ�أ��ý��Ϊ���ӵ�˫��
//���:���Ĳ�δӸ���ʼ���壬��Ϊ��һ�㣬���ĺ���Ϊ�ڶ��� 
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

void createTree(BiTree *T)//����T�ĵ�ַ 
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
		createTree(&(*T)->lchild);//�������ӽ�� 
		createTree(&(*T)->rchild);//�������ӽ�� 
	}
} 

void preOrder(BiTree T)
{
	if(T==NULL)//�����Ϊ��ֱ�ӷ��� 
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
