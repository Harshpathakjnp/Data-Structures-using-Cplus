// Kruskal's Algorithm in C
#define max 5
#define infinity 5000
#include <string.h>
#include <stdio.h>
typedef struct
{
    int from, to, distance;
} Edge;
int distances[max][max], qCount, treeCount;
Edge Edges[max * max];
Edge MinTree[max * max];
int inTree(Edge Edges[max * max], int value);
void swapEdges(Edge *e1, Edge *e2);
void selSort(Edge Edges[max * max]);
void writeEdges(Edge Edges[max * max], int l);
void addToQueue(int distances[max][max], Edge Edges[max * max]);
void writeMatrix(int distances[max][max]);
void readMatrix(int distances[max][max]);
void addToTree();
void main()
{

    treeCount = 0;
    readMatrix(distances);
    addToQueue(distances, Edges);
    writeEdges(Edges, qCount);
    selSort(Edges);
    writeEdges(Edges, qCount);
    addToTree();
    printf("\n\nMinimumSpanning Tree is");
    writeEdges(MinTree, treeCount);
}
void addToTree()
{
    int i;
    treeCount = 0;
    for (i = 0; i <= qCount - 1; i++)
    {
        if ((inTree(MinTree, Edges[i].from)) && (inTree(MinTree, Edges[i].to)))
            continue;
        MinTree[treeCount].from = Edges[i].from;
        MinTree[treeCount].to = Edges[i].to;
        MinTree[treeCount].distance = Edges[i].distance;
        treeCount += 1;
    }
}
int inTree(Edge Edges[max * max], int value)
{
    int i;
    for (i = 0; i <= treeCount - 1; i++)
    {
        if (Edges[i].from == value)
            return (1);
        if (Edges[i].to == value)
            return (1);
    }
    return (0);
}
void selSort(Edge Edges[max * max])
{
    int i, j, minpos;
    for (i = 0; i <= qCount - 2; i++)
    {
        minpos = i;
        for (j = i + 1; j <= qCount - 1; j++)
            if (Edges[j].distance < Edges[minpos].distance)
                minpos = j;
        swapEdges(&Edges[i], &Edges[minpos]);
    }
}
void swapEdges(Edge *e1, Edge *e2)
{
    int t;
    t = (*e1).from;
    (*e1).from = (*e2).from;
    (*e2).from = t;
    t = (*e1).to;
    (*e1).to = (*e2).to;
    (*e2).to = t;
    t = (*e1).distance;
    (*e1).distance = (*e2).distance;
    (*e2).distance = t;
}
void writeEdges(Edge Edges[max * max], int l)
{
    int row;
    printf("\n\nPrinting Edges");
    for (row = 0; row <= l - 1; row++)
        printf("\n%c to %c distance = %d", 'A' + Edges[row].from, 'A' + Edges[row].to, Edges[row].distance);
}
void addToQueue(int distances[max][max], Edge Edges[max * max])
{
    int row, col;
    qCount = 0;
    for (row = 0; row <= max - 1; row++)
        for (col = 0; col <= row - 1; col++)
            if ((distances[row][col] > 0) && (distances[row][col] < infinity))
            {
                Edges[qCount].from = row;
                Edges[qCount].to = col;
                Edges[qCount].distance = distances[row][col];
                qCount += 1;
            }
}
void writeMatrix(int distances[max][max])
{
    int row, col;
    printf("\n\nDistance matrix =\n");
    for (row = 0; row <= max - 1; row++)
    {
        for (col = 0; col <= max - 1; col++)
            printf("%6d", distances[row][col]);
        printf("\n");
    }
}
void readMatrix(int distances[max][max])
{
    int row, col;
    for (row = 0; row <= max - 1; row++)
    {
        for (col = 0; col <= max - 1; col++)
        {
            if (row == col)
            {
                distances[row][col] = 0;
                continue;
            }
            if (col > row)
            {
                printf("Enter negative number for infinity,Distance from %c to %c = ", 'A' + row, 'A' + col);
                scanf("%d", &distances[row][col]);
                if (distances[row][col] < 0)
                    distances[row][col] = infinity;
            }
            else
            {
                distances[row][col] = distances[col][row];
            }
        }
    }
}