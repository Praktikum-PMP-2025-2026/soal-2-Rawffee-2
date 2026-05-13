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
};
