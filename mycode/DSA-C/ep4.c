#include<conio.h>
#include <stdio.h>
#define nV 6
#define INF 999
void printMatrix(int matrix[][nV]);
void floydWarshall(int graph[][nV]) {
int matrix[nV][nV], i, j, k;
for (i = 0; i < nV; i++)
for (j = 0; j < nV; j++)
matrix[i][j] = graph[i][j];
for (k = 0; k < nV; k++) {
for (i = 0; i < nV; i++) {
for (j = 0; j < nV; j++) {
if (matrix[i][k] + matrix[k][j] < matrix[i][j])
matrix[i][j] = matrix[i][k] + matrix[k][j];
}
}
}
printMatrix(matrix);
}
void printMatrix(int matrix[][nV]) {
for (int i = 0; i < nV; i++) {
for (int j = 0; j < nV; j++) {
if (matrix[i][j] == INF)
printf("%4s", "INF");
else
printf("%4d", matrix[i][j]);
}
printf("\n");
}
}
int main() {
int graph[nV][nV] = {{INF, 3, 9, INF,INF,INF},
{3,INF,8,11,9,INF},
{9, 8,INF,1,INF,2},
{INF,9,1, INF,6,9},
{INF, 11,INF,6,INF,7},
{INF, INF, 2, 9,7,INF}};
printf("\n floyd warshall algorithm \n");
floydWarshall(graph);
} 