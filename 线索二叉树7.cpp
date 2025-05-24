//线索二叉树5
#include<bits/stdc++.h>
using namespace std;
typedef char ElemType;
typedef struct ThreadNode{
	ElemType data;
	struct ThreadNode *lchild;
	struct ThreadNode *rchild;
	int ltag;
	int rtag;
}ThreadNode;//线索二叉树的结点
typedef ThreadNode* ThreadTree;

char str[]="ABDH##I##EJ###CF##G##";
int idx=0;

ThreadTree prev;

//创建树
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
    if (T != NULL) {  // 如果当前节点不为空
        threading(T->lchild);  // 递归线索化左子树
        
        // 处理当前节点的前驱
        if (T->lchild == NULL) {  // 如果当前节点的左孩子为空
            T->ltag = 1;         // 设置左线索标志为1（表示指向的是前驱）
            T->lchild = prev;     // 左孩子指针指向前驱节点（prev）
        }
        
        // 处理前驱节点的后继
        if (prev != NULL && prev->rchild == NULL) {  // 如果前驱节点存在且其右孩子为空
            prev->rtag = 1;       // 设置前驱节点的右线索标志为1（表示指向的是后继）
            prev->rchild = T;     // 前驱节点的右孩子指针指向当前节点（作为其后继）
        }
        
        prev = T;  // 更新 prev 为当前节点，以便后续处理
        threading(T->rchild);  // 递归线索化右子树
    }
}

//开始线索化
void inOrderThreading(ThreadTree *head, ThreadTree T) {
    // 1. 创建头结点
    *head = (ThreadTree)malloc(sizeof(ThreadNode));
    (*head)->ltag = 0;  // 头结点的左孩子指向树的根节点（非线索）
    (*head)->rtag = 1;  // 头结点的右孩子指向最后一个节点（线索）
    (*head)->rchild = *head;  // 初始时，头结点的右孩子指向自己（防止空树情况）

    // 2. 如果树为空，头结点的左孩子也指向自己
    if (T == NULL) {
        (*head)->lchild = *head;
    }
    // 3. 否则，进行中序线索化
    else {
        (*head)->lchild = T;  // 头结点的左孩子指向树的根节点
        prev = *head;         // 初始化 prev（前驱节点）为头结点

        threading(T);         // 调用 threading 函数进行中序线索化

        // 4. 处理最后一个节点的线索
        prev->rchild = *head;  // 最后一个节点的右孩子指向头结点（形成循环）
        prev->rtag = 1;        // 标记为线索

        // 5. 头结点的右孩子指向最后一个节点（方便逆向遍历）
        (*head)->rchild = prev;
    }
}

//使用线索进行中序遍历
void inOrder(ThreadTree T) {
    ThreadTree curr;        // 当前节点指针
    curr = T->lchild;       // 从头结点的左孩子（即树的根节点）开始

    while (curr != T) {     // 循环直到回到头结点（遍历完成）
        // 1. 找到当前子树的最左节点（即中序遍历的起点）
        while (curr->ltag == 0) {  // 如果左孩子是子树（非线索）
            curr = curr->lchild;    // 一直向左下移动
        }
        printf("%c ", curr->data); // 访问最左节点

        // 2. 沿右线索访问后继节点
        while (curr->rtag == 1 && curr->rchild != T) {  // 如果右孩子是线索且不是头结点
            curr = curr->rchild;   // 移动到后继节点
            printf("%c ", curr->data); // 访问后继节点
        }

        // 3. 处理右子树
        curr = curr->rchild;  // 右孩子可能是子树或线索，继续遍历
    }
    printf("\n");  // 换行
}

int main()
{
	ThreadTree head;
	ThreadTree T;
	//创建
	createTree(&T);
	inOrderThreading(&head,T);
	inOrder(head); 
	return 0;
}
