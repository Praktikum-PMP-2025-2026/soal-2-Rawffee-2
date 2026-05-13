#include <stdio.h>
#include <stdbool.h>

int main (){
    int i, j, r, c, curr, visited_dfs;
    printf("enter the row value : ");
    scanf("%d", &r);
    printf("enter the column value : ");
    scanf("%d", &c);

    int mat[r][c];
    
    for(i = 0; i < r; ++i){
        for(j = 0; j < c ; ++j) {
            printf("matriks [%d][%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("grid peta nya :\n");
    for(i = 0; i < r; ++i){
    for(j = 0; j < c ; ++j){
           printf("%d\t",mat[i][j]);
        }
    printf("\n");
    }

    printf("ISLANDS 0");
    printf("LARGEST 0");

return 0;
};
