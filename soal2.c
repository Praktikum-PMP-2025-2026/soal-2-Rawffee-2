// Praktikum EL2008 PMP
// Nama : Muhammad Rafi Fathia Dzaky
// NIM  : 13224079
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int dx[] = {-1, 0, 1, 0, 1, -1, -1, 1};
int dy[] = {0, -1, 0, 1, 1, 1, -1, -1};

void dfs(int mat, int r, int c, int n, int m) {
    if (r < 0 || c < 0 || r >= n || c >= m || mat[r][c] != 1)
        return;

    mat[r][c] = 0;


    for (int i = 0; i < r; i++) {
        int newR = r + dx[i];
        int newC = c + dy[i];
        dfs(mat, newR, newC, n, m);
    }
}

int countIslands(int mat, int r, int m) {
    int count = 0;

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            if (mat[r][c] == 'L') {
                count++;
                dfs(mat, r, c, n, m);
            }
        }
    }

    return count;
}

int main (){
    int i, j, r, c;
    scanf("%d", &r);
    scanf("%d", &c);

    int mat[r][c];
    
    for(i = 0; i < r; ++i){
        for(j = 0; j < c ; ++j) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("ISLANDS 0\n");
    printf("LARGEST 0");

return 0;
};
//source : https://www.geeksforgeeks.org/dsa/depth-first-traversal-dfs-on-a-2d-array/
//source : https://www.geeksforgeeks.org/dsa/print-matrix-elements-using-dfs-traversal/
//source : https://www.geeksforgeeks.org/dsa/breadth-first-traversal-bfs-on-a-2d-array/
