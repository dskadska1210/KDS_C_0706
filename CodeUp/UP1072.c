// UP1072.c
// 숫자 n개 입력 -> n번 반복
// 입력된 정수 출력
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        int temp;
        scanf("%d", &temp);
        printf("%d ",temp);
    }
}