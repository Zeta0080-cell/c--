//����������5
#include<bits/stdc++.h>
using namespace std;
typedef char ElemType;
typedef struct ThreadNode{
	ElemType data;
	struct ThreadNode *lchild;
	struct ThreadNode *rchild;
	int ltag;
	int rtag;
}ThreadNode;//�����������Ľ��
typedef ThreadNode* ThreadTree;

char str[]="ABDH##I##EJ###CF##G##";
int idx=0;

ThreadTree prev;

//������
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

void threading(ThreadTree T) {
    if (T != NULL) {  // �����ǰ�ڵ㲻Ϊ��
        threading(T->lchild);  // �ݹ�������������
        
        // ����ǰ�ڵ��ǰ��
        if (T->lchild == NULL) {  // �����ǰ�ڵ������Ϊ��
            T->ltag = 1;         // ������������־Ϊ1����ʾָ�����ǰ����
            T->lchild = prev;     // ����ָ��ָ��ǰ���ڵ㣨prev��
        }
        
        // ����ǰ���ڵ�ĺ��
        if (prev != NULL && prev->rchild == NULL) {  // ���ǰ���ڵ���������Һ���Ϊ��
            prev->rtag = 1;       // ����ǰ���ڵ����������־Ϊ1����ʾָ����Ǻ�̣�
            prev->rchild = T;     // ǰ���ڵ���Һ���ָ��ָ��ǰ�ڵ㣨��Ϊ���̣�
        }
        
        prev = T;  // ���� prev Ϊ��ǰ�ڵ㣬�Ա��������
        threading(T->rchild);  // �ݹ�������������
    }
}

//��ʼ������
void inOrderThreading(ThreadTree *head, ThreadTree T) {
    // 1. ����ͷ���
    *head = (ThreadTree)malloc(sizeof(ThreadNode));
    (*head)->ltag = 0;  // ͷ��������ָ�����ĸ��ڵ㣨��������
    (*head)->rtag = 1;  // ͷ�����Һ���ָ�����һ���ڵ㣨������
    (*head)->rchild = *head;  // ��ʼʱ��ͷ�����Һ���ָ���Լ�����ֹ���������

    // 2. �����Ϊ�գ�ͷ��������Ҳָ���Լ�
    if (T == NULL) {
        (*head)->lchild = *head;
    }
    // 3. ���򣬽�������������
    else {
        (*head)->lchild = T;  // ͷ��������ָ�����ĸ��ڵ�
        prev = *head;         // ��ʼ�� prev��ǰ���ڵ㣩Ϊͷ���

        threading(T);         // ���� threading ������������������

        // 4. �������һ���ڵ������
        prev->rchild = *head;  // ���һ���ڵ���Һ���ָ��ͷ��㣨�γ�ѭ����
        prev->rtag = 1;        // ���Ϊ����

        // 5. ͷ�����Һ���ָ�����һ���ڵ㣨�������������
        (*head)->rchild = prev;
    }
}

//ʹ�����������������
void inOrder(ThreadTree T) {
    ThreadTree curr;        // ��ǰ�ڵ�ָ��
    curr = T->lchild;       // ��ͷ�������ӣ������ĸ��ڵ㣩��ʼ

    while (curr != T) {     // ѭ��ֱ���ص�ͷ��㣨������ɣ�
        // 1. �ҵ���ǰ����������ڵ㣨�������������㣩
        while (curr->ltag == 0) {  // �����������������������
            curr = curr->lchild;    // һֱ�������ƶ�
        }
        printf("%c ", curr->data); // ��������ڵ�

        // 2. �����������ʺ�̽ڵ�
        while (curr->rtag == 1 && curr->rchild != T) {  // ����Һ����������Ҳ���ͷ���
            curr = curr->rchild;   // �ƶ�����̽ڵ�
            printf("%c ", curr->data); // ���ʺ�̽ڵ�
        }

        // 3. ����������
        curr = curr->rchild;  // �Һ��ӿ�������������������������
    }
    printf("\n");  // ����
}

int main()
{
	ThreadTree head;
	ThreadTree T;
	//����
	createTree(&T);
	inOrderThreading(&head,T);
	inOrder(head); 
	return 0;
}
