#include <stdio.h>
int main() {
    short shortVar;
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    char stringVar[100];

    scanf("%hd", &shortVar);    // 1 E
    scanf("%d", &intVar);       // 1 E
    scanf("%f", &floatVar);     // 1 E
    scanf("%lf", &doubleVar);   // 1 E
    scanf(" %c", &charVar);     // 문자입력시 공백도 문자니
    scanf("%s", stringVar);     // 필요하다면 공백넣어서 무시!
    
    printf("Short: %hd\n", shortVar);
    printf("Int: %d\n", intVar);
    printf("Float: %.2f\n", floatVar);
    printf("Double: %.10lf\n", doubleVar);
    printf("Char: %c\n", charVar);
    printf("String: %s\n", stringVar);
    return 0;
}
