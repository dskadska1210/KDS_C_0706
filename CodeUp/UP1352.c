#include <stdio.h>
int main(){
    // 4-> 4x4
    int size =0;
    scanf("%d",&size);
    
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}