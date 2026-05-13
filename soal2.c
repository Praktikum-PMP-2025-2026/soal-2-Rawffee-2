// Praktikum EL2008 Pemecahan Masalah dan Pemograman 2025/2026
// Modul : 5
// Nama : Muhammad Rafi Fathia Dzaky
// NIM  : 13224079
// file : soal2.c
// Deskripsi : soal kedua tentang pulau-pulau menggunakan DFS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
}

//source : https://www.geeksforgeeks.org/dsa/depth-first-traversal-dfs-on-a-2d-array/
//source : https://www.geeksforgeeks.org/dsa/print-matrix-elements-using-dfs-traversal/
//source : https://www.geeksforgeeks.org/dsa/breadth-first-traversal-bfs-on-a-2d-array/
