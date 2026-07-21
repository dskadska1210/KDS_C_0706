// UP1405.c
#include <stdio.h>
int main(){
    int n;
    int ary[1000] = {0};
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &ary[i]);
    // -------------------------
    for(int i=0; i<n; i++){
        for(int j=i; j<n+i; j++){
            int index = j%n;
            printf("%d ", ary[index]);
        }
        printf("\n");
    }
}