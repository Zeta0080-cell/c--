#include <stdlib.h>
#include <iostream>
using namespace std;

#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef int Status;
typedef int ElemType;

typedef struct LNode {
    ElemType data; // 结点的数据域
    struct LNode *next; // 结点的指针域
} LNode, *LinkList; // LinkList为指向结构体LNode的指针类型

// 创建单链表
Status CreateList(LinkList &L, int n) {
    L = (LinkList)malloc(sizeof(LNode)); // 创建头结点
    L->next = NULL; // 初始化为空链表
    LinkList p = L; // p指向头结点
    for (int i = 0; i < n; i++) {
        LinkList newNode = (LinkList)malloc(sizeof(LNode)); // 创建新结点
        cin >> newNode->data; // 输入新结点的数据
        newNode->next = NULL; // 新结点的next指针置空
        p->next = newNode; // 将新结点插入到链表尾部
        p = p->next; // p指向新的尾结点
    }
    return OK;
}

// 找到链表中的最小元素
ElemType FindMin(LinkList L) {
    if (L->next == NULL) {
        cout << "链表为空！" << endl;
        return ERROR;
    }
    LinkList p = L->next; // p指向第一个结点
    ElemType minVal = p->data; // 初始化最小值为第一个结点的数据
    while (p != NULL) {
        if (p->data < minVal) {
            minVal = p->data; // 更新最小值
        }
        p = p->next; // 移动到下一个结点
    }
    return minVal;
}

int main() {
    LinkList L;
    int n;
    cin >> n; // 输入元素个数
    CreateList(L, n); // 创建单链表
    ElemType minVal = FindMin(L); // 找到最小元素
    cout << minVal << endl; // 输出最小元素的值
    return 0;
}


