//ͼ�ĸ߼�Ӧ��-ͼ����С������
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INF 32767

typedef struct {
    char* vertices; // ������������
    int** adjMatrix; // �ڽӾ���
    int vertexNum; // ��������
    int edgeNum; // �ߵ�����
} Graph;

// ����ͼ
Graph* createGraph(int vertexNum, int edgeNum) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->vertexNum = vertexNum;
    graph->edgeNum = edgeNum;
    graph->vertices = (char*)malloc(vertexNum * sizeof(char));
    graph->adjMatrix = (int**)malloc(vertexNum * sizeof(int*));
    for (int i = 0; i < vertexNum; i++) {
        graph->adjMatrix[i] = (int*)malloc(vertexNum * sizeof(int));
        for (int j = 0; j < vertexNum; j++) {
            graph->adjMatrix[i][j] = INF;
        }
    }
    return graph;
}

// ��ӱ�
void addEdge(Graph* graph, int v1, int v2, int weight) {
    graph->adjMatrix[v1][v2] = weight;
    graph->adjMatrix[v2][v1] = weight;
}

// Prim�㷨
void primMST(Graph* graph) {
    int vertexNum = graph->vertexNum;
    int* parent = (int*)malloc(vertexNum * sizeof(int)); // �洢��С�������ĸ��ڵ�
    int* key = (int*)malloc(vertexNum * sizeof(int));    // �洢����ļ�ֵ
    int* inMST = (int*)malloc(vertexNum * sizeof(int));  // ��Ƕ����Ƿ���MST��

    // ��ʼ��
    for (int i = 0; i < vertexNum; i++) {
        key[i] = INF;
        inMST[i] = 0;
    }

    // ��0�Ŷ��㿪ʼ
    key[0] = 0;
    parent[0] = -1; // 0�Ŷ����Ǹ��ڵ�

    for (int count = 0; count < vertexNum - 1; count++) {
        // ѡȡkeyֵ��С�Ķ���
        int minKey = INF;
        int u = -1;
        for (int v = 0; v < vertexNum; v++) {
            if (!inMST[v] && key[v] < minKey) {
                minKey = key[v];
                u = v;
            }
        }

        if (u == -1) break; // ͼ����ͨ

        inMST[u] = 1; // ��u����MST

        // ����u���ڽӶ����keyֵ��parent
        for (int v = 0; v < vertexNum; v++) {
            if (graph->adjMatrix[u][v] != INF && !inMST[v] && graph->adjMatrix[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph->adjMatrix[u][v];
            }
        }
    }

    // ����ߵ����У�������˳��
    for (int i = 1; i < vertexNum; i++) {
        printf("%c%c ", graph->vertices[parent[i]], graph->vertices[i]);
    }
    printf("\n");

    free(parent);
    free(key);
    free(inMST);
}

int main() {
    int vertexNum, edgeNum;
    scanf("%d %d", &vertexNum, &edgeNum);

    Graph* graph = createGraph(vertexNum, edgeNum);

    // ��ȡ��������
    char vertices[vertexNum];
    for (int i = 0; i < vertexNum; i++) {
        scanf(" %c", &vertices[i]);
    }
    graph->vertices = vertices;

    // ��ȡ��
    for (int i = 0; i < edgeNum; i++) {
        char edge[3];
        int weight;
        scanf("%s %d", edge, &weight);
        int v1 = strchr(vertices, edge[0]) - vertices;
        int v2 = strchr(vertices, edge[1]) - vertices;
        addEdge(graph, v1, v2, weight);
    }

    primMST(graph);

    // �ͷ��ڴ�
    for (int i = 0; i < vertexNum; i++) {
        free(graph->adjMatrix[i]);
    }
    free(graph->adjMatrix);
    free(graph);

    return 0;
} 
