//acwing826-���������
#include <bits/stdc++.h>
using namespace std;

typedef int ElemType;
typedef struct Node {
    ElemType data;
    struct Node *next;
} Node;

Node* initList() {
    Node *head = (Node*)malloc(sizeof(Node));
    head->data = 0;
    head->next = NULL;
    return head;
}

// ȫ�ֱ�������¼��k������Ľڵ�
vector<Node*> nodes;

void insertHead(Node *L, ElemType e) {
    Node *p = (Node*)malloc(sizeof(Node));
    p->data = e;
    p->next = L->next;
    L->next = p;
    // ��¼����˳��
    nodes.push_back(p);
}

void nodelist(Node *L) {
    Node *p = L->next;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

void insertElem(Node *L, int k, ElemType e) {
    // ��k������Ľڵ���nodes[k-1]
    Node *p = nodes[k - 1];
    Node *q = (Node*)malloc(sizeof(Node));
    q->data = e;
    q->next = p->next;
    p->next = q;
    // ��¼����˳��
    nodes.push_back(q);
}

void deleteNode(Node *L, int k) {
    if (k == 0) {
        // ɾ��ͷ�ڵ�
        Node *q = L->next;
        if (q != NULL) {
            L->next = q->next;
            free(q);
        }
    } else {
        // ɾ����k������Ľڵ����һ���ڵ�
        Node *p = nodes[k - 1];
        if (p->next != NULL) {
            Node *q = p->next;
            p->next = q->next;
            free(q);
        }
    }
}

int main() {
    Node *list = initList();
    int T;
    cin >> T;
    char ch;
    int n, k;
    while (T--) {
        cin >> ch;
        if (ch == 'H') {
            cin >> n;
            insertHead(list, n);
        } else if (ch == 'D') {
            cin >> k;
            deleteNode(list, k);
        } else if (ch == 'I') {
            cin >> k >> n;
            insertElem(list, k, n);
        }
    }
    nodelist(list);
    // �ͷ������ڴ棨��ѡ��
    Node *p = list;
    while (p != NULL) {
        Node *q = p->next;
        free(p);
        p = q;
    }
    return 0;
}
