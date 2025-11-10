#include <stdio.h>

#define MAX 100

struct Edge {
    int u, v, w;
};

// Bubble sort for simplicity
void sortEdges(struct Edge edges[], int e) {
    struct Edge temp;
    for (int i = 0; i < e - 1; i++)
        for (int j = 0; j < e - i - 1; j++)
            if (edges[j].w > edges[j + 1].w) {
                temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
}

int findParent(int parent[], int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void kruskalMST(struct Edge edges[], int n, int e) {
    int parent[MAX];
    struct Edge mst[MAX];
    int count = 0, totalCost = 0;

    for (int i = 0; i < n; i++)
        parent[i] = i;

    sortEdges(edges, e);

    for (int i = 0; i < e && count < n - 1; i++) {
        int p1 = findParent(parent, edges[i].u);
        int p2 = findParent(parent, edges[i].v);
        if (p1 != p2) {
            mst[count++] = edges[i];
            totalCost += edges[i].w;
            parent[p1] = p2;
        }
    }

    printf("🌐 Minimum Spanning Tree (Optimal Network):\n");
    printf("-------------------------------------------\n");
    for (int i = 0; i < count; i++)
        printf("Connect City %d ↔ City %d   | Cost: %d\n",
               mst[i].u, mst[i].v, mst[i].w);
    printf("-------------------------------------------\n");
    printf("✅ Total Minimum Cable Cost: %d\n", totalCost);
}

int main() {
    int n, e = 0;
    struct Edge edges[MAX];

    scanf("%d", &n); // number of cities

    // Read matrix (0 = no connection)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int cost;
            scanf("%d", &cost);
            if (cost != 0) {
                edges[e].u = i;
                edges[e].v = j;
                edges[e].w = cost;
                e++;
            }
        }
    }

    kruskalMST(edges, n, e);
    return 0;
}
