#include <stdio.h>
int main(){
    int size, repeat;
    scanf("%d%d", &size, &repeat);
    //0 *
    //1  *
    //2   *
    // 공백개수 0 1 2 .... + 별하나 무조건 출력
    for(int k=0; k<repeat; k++){

        for(int i=0; i<size; i++){
            for(int j=0;j<i;j++){
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
        // ---------------------
        // size = 3
        //   * // 2 1 0 + 별 하나
        //  *
        // *
        for(int i=0; i<size-1; i++){
            for(int j=0; j<size-i-2; j++){
                printf(" ");
            }
            printf("*");
            printf("\n");
        }
    }


}