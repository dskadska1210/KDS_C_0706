// C15_PointerArray.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
void Set2Ship(int* ary, int size){
    for(int i=0; i<size; i++){
        *(ary+i) *= 2;
    }
}
void PrintArray(int* ary, int size){   // 이 코드 다시 공부 !!
    for(int i=0; i<size; i++){
        printf("%d ", *(ary+i));
    }   printf("\n");
}
//====================================================================
int main()
{
    srand(time(NULL));
    // -----------------------
    int ary[4][10] = {{1,2,3,4,5,6,7,8,9,10},
                      {1,2,3,4,5,6,7,8,9,10},
                      {1,2,3,4,5,6,7,8,9,10},
                      {1,2,3,4,5,6,7,8,9,10}};
    // 0번은 1번, 1번은 2번, 2번은 3번, 3번은 4번
    // Set2Ship함수 사용!
    // <2차원 배열의 주소를 확인하기>
    printf("%d\n", ary);
    printf("%d\n", *ary);
    printf("%d\n", &ary);
    printf("%d\n", **ary); 
    printf("%d\n", ary[0][3]);   // 4
    printf("%d\n", *(*(ary+0)+3)); //4
    // java -> 객체
    // python -> 리스트(객체)
    // 객체를 함수에 전달 -> 원본이 그대로 이동

    // ary[2][6]
    printf("%d\n", *(*(ary+2)+6));
    printf("%d\n", ary[2][6]);

    

    int* ptr1 = ary[0];  // 1차원 배열의 주소값이 나옴
    int* ptr2 = ary[2]; //2
    int* ptr3 = ary[3]; //3
    int* ptr4 = ary[4]; //4

    Set2Ship(ptr1, 10);
    for(int i=0; i<2; i++)
        Set2Ship(ptr2,10);
        
    for(int i=0; i<3; i++)
        Set2Ship(ptr3,10);
    
    for(int i=0; i<4; i++)
        Set2Ship(ptr4,10);
    printf("aaaaaaaaaaaa\n");
    // 진짜 증가했는지 확인법
    // PrintArray를 만들어 모든 요소 출력
    PrintArray(ptr1, 10);
    PrintArray(ptr2, 10);
    PrintArray(ptr3, 10);
    PrintArray(ptr4, 10);
}