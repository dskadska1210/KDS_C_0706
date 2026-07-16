#include <stdio.h>
int main(){
    // 별 5 4 3 2 1
    int size;
    scanf("%d", &size);
    for(int i=0;i<size; i++){
        // 공백 0 1 2 3 4 ...
        for(int j=0;j<i; j++){
            printf(" ");
        }

        for(int j=0; j<size-i; j++){
            printf("*");
        }
        printf("\n");
    }
}