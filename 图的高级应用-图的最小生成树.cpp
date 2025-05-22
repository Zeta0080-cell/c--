//图的高级应用-图的最小生成树
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INF 32767

typedef struct {
    char* vertices; // 顶点数据数组
    int** adjMatrix; // 邻接矩阵
    int vertexNum; // 顶点数量
    int edgeNum; // 边的数量
} Graph;

// 创建图
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

// 添加边
void addEdge(Graph* graph, int v1, int v2, int weight) {
    graph->adjMatrix[v1][v2] = weight;
    graph->adjMatrix[v2][v1] = weight;
}

// Prim算法
void primMST(Graph* graph) {
    int vertexNum = graph->vertexNum;
    int* parent = (int*)malloc(vertexNum * sizeof(int)); // 存储最小生成树的父节点
    int* key = (int*)malloc(vertexNum * sizeof(int));    // 存储顶点的键值
    int* inMST = (int*)malloc(vertexNum * sizeof(int));  // 标记顶点是否在MST中

    // 初始化
    for (int i = 0; i < vertexNum; i++) {
        key[i] = INF;
        inMST[i] = 0;
    }

    // 从0号顶点开始
    key[0] = 0;
    parent[0] = -1; // 0号顶点是根节点

    for (int count = 0; count < vertexNum - 1; count++) {
        // 选取key值最小的顶点
        int minKey = INF;
        int u = -1;
        for (int v = 0; v < vertexNum; v++) {
            if (!inMST[v] && key[v] < minKey) {
                minKey = key[v];
                u = v;
            }
        }

        if (u == -1) break; // 图不连通

        inMST[u] = 1; // 将u加入MST

        // 更新u的邻接顶点的key值和parent
        for (int v = 0; v < vertexNum; v++) {
            if (graph->adjMatrix[u][v] != INF && !inMST[v] && graph->adjMatrix[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph->adjMatrix[u][v];
            }
        }
    }

    // 输出边的序列（按加入顺序）
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

    // 读取顶点数据
    char vertices[vertexNum];
    for (int i = 0; i < vertexNum; i++) {
        scanf(" %c", &vertices[i]);
    }
    graph->vertices = vertices;

    // 读取边
    for (int i = 0; i < edgeNum; i++) {
        char edge[3];
        int weight;
        scanf("%s %d", edge, &weight);
        int v1 = strchr(vertices, edge[0]) - vertices;
        int v2 = strchr(vertices, edge[1]) - vertices;
        addEdge(graph, v1, v2, weight);
    }

    primMST(graph);

    // 释放内存
    for (int i = 0; i < vertexNum; i++) {
        free(graph->adjMatrix[i]);
    }
    free(graph->adjMatrix);
    free(graph);

    return 0;
} 
