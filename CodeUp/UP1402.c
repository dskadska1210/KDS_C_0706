// 코드업 1402 문제
#include <stdio.h>
#include <string.h>
int main(){
    char str[90];
    int alpha[26] = {0};
    gets(str);
    for(int i=0; i<strlen(str); i++){
        if(str[i]>=97 && str[i]<=122){
            alpha[str[i]-97]++; // 0~25
        }
    }
    // -----------------------------
    for(int i=0; i<26; i++){
        printf("%c:%d\n",i+97, alpha[i]);
    }

}