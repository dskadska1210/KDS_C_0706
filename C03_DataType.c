// C03_DataType.c
#include <stdio.h>
int main()
{
    // Ctrl + B하면 왼쪽 창 넣을 수 있음.
    // 작업 잘 하려면, 마우스를 최대한 쓰지 마십쇼.
    // --------------------------------------------
    // < 정수형 > : 소수가 없는 형태의 음수 양수
    // char, short, int, long -> int만 쓰십쇼(Integer)
    // < 실수형 > : 소수가 있는 형태의 음수 양수
    // float, double -> double만 쓰십쇼(float의 2배란의미)
    // < 문자형 > : 문자 딱 한개
    // char -> 1글자, 반드시 ' ' 묶어야 함.
    // < 문자열 > : 1개이상의 문자들
    // Java String, Python str, 우리는 없음 ㅠㅠㅠㅠ
    // char 배열 -> 나중에 알아봅시다 ^^;
    // ----------------------------------------------
    // 변수 어케 만들어????
    // 자료형 변수명 = 초기화값;  -> 넣을거 없으면 0 넣으세요
    // 자료형 변수명;    -> 추천 안함
    // ----------------------------------------------
    int gfupi = 4147685472;
    printf(" int : %d\n", gfupi);
    double ngfx = 3.1415926847;
    float ngfx2 = 3.1415926847;
    printf(" double : %.8lf\n", ngfx );
    printf(" float  : %.8f\n" , ngfx2);
    // 컴터는 바보라 소수 정확히 저장못함
    char mjg = 'K';
    // char mjg = "K";
    printf(" Char : %c\n", mjg);
    printf(" Char : %c\n", mjg+1);
    printf(" Char : %c\n", mjg+2);
    printf(" Char : %c\n", mjg-1);
    
    // 문자열-> 배열
    char str[123] = "알라봉 최고의 무기";
    printf("String : %s\n",str);
    // chcp 65001

    // 형식지정자
    // %d int   %f float  %lf double  %c char, %s string











}