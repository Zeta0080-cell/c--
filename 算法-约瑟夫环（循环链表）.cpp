//�㷨-Լɪ�򻷣�ѭ������ 
#include<bits/stdc++.h>
using namespace std;
typedef int ElemType;
typedef struct Node{
	ElemType data;//������ 
	struct Node *next;//ָ���� 
}Node;

void createlist(int n, int m) // �ܹ���n���ˣ�����m����
{
    if (n <= 0 || m <= 0) {
        printf("Invalid input: n and m must be positive.\n");
        return;
    }

    // ����ѭ��������Ŵ�1��n��
    Node *head = NULL;
    Node *p = NULL;
    for (int i = 1; i <= n; i++) {
        Node *q = (Node*)malloc(sizeof(Node));
        q->data = i;
        q->next = NULL;
        if (head == NULL) {
            head = q;
            p = head;
        } else {
            p->next = q;
            p = q;
        }
    }
    p->next = head; // �γ�ѭ������
    p = head;       // ��head��ʼ����

    while (p->next != p) // ѭ��ֱ��ֻʣһ���ڵ�
    {
        // ������m-1���ҵ�ǰ���ڵ�r
        Node *r = NULL;
        for (int i = 1; i < m; i++) {
            r = p;
            p = p->next;
        }
        // ��̭p�ڵ�
        printf("%d ", p->data);
        r->next = p->next; // ����p�ڵ�
        Node *temp = p;
        p = r->next;       // ����һ���ڵ����
        free(temp);        // �ͷű���̭�ڵ�
    }

    // ������ʣ�µĽڵ�
    printf("%d\n", p->data);
    free(p); // �ͷ����һ���ڵ�
}

int main()
{
	int n,m;
	cin>>n>>m;
	createlist(n,m);
	return 0;
}
