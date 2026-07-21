// C11_Function.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
// =========================================================
// < 함수 자리 >
// =========================================================
// 1. 리턴없고, 매개변수 없고 🎪
void E(){ printf("---------\n"); }
// < Introduce 함수 > - 자기소개.
void Introduce(){
    E();
    printf("죄송한데 저 여자친구 있어요\n");
    E();
}
// < 랜덤으로 1~10 중 숫자하나 뽑아서
//    5 이상이면 "당첨" 아니면 "꽝" 출력
void SimpleLotto(){
    int lotto = rand()%10 + 1;
    if(lotto>=5) printf("당첨\n");
    else         printf("꽝\n"  );
}

void PrintMenu(){
    printf("   < 메뉴판 >   \n");
    printf(" 1. 커피\n");
    printf(" 2. 에이드\n");
    printf(" 3. 티\n");
    printf(" 4. 디저트\n");
    printf("---------------\n");
}
void Finish1(){
    for(int i=0; i<5; i++){
        printf("%d초뒤 종료\n",i+1);
        Sleep(1000); // 1초대기
    }
    // 대신, 5초라는 고정 시간만 가능한 단점있음.
}
// --------------------------------------------
// 2. 리턴있고, 매개변수 없고 🎈
// 리턴 뭐할수있어? -> 다 . 대신배열은 ㄴㄴ
// ★ TIP : 리턴 있으면 함수이름 Get시작

// < 랜덤 숫자 하나 1~10 리턴 >
int GetRandom1_10(){
    int random = rand()%10 + 1;
    return random;
}
int GetRandom1_100(){
    int random = rand()%100 + 1;
    return random;
}
// KEY, Address, IP
int GetKEY(){
    return 157651981;
}
char* GetAddress(){
    return "192.168.0.1";
}
char* GetIP(){
    return "fe80::bb9a:5c7a:7797:af17%%12";
}
// --------------------------------------------
// 3. 리턴없고, 매개변수 있고 ✨
void P(int asdf){
    printf("%d\n", asdf);
    // return; // 즉시 함수 종료(void전용)
}
void Lotto(int cnt){
    // cnt횟수만큼, 복권 돌리기
    for(int i=0; i<cnt; i++)
        SimpleLotto();
}
// <실습> 숫자 하나 넘겨받으면 그 숫자만큼*출력
void PrintStar(int cnt){
    for(int i=0; i<cnt; i++)
        printf("* ");
    printf("\n");
}
// 숫자 하나 넘겨받아서 직각삼각형모양
// 별 출력
// *
// **
// ***
void PrintTriangle(int size){
    for(int i=0; i<size; i++)
        PrintStar(i+1);
}
// --------------------------
// < 실습 >
// PrintMenu 리X매X -> 메뉴 목록을 출력
//                 출력은 메뉴 대충 4가지정도
// Menu 함수는, 메인에서 숫자하나를 넘겨받아
//   해당 메뉴를 출력하는 함수. -> ??맛있게드셔
// (만약1~4의 숫자가 아닌 -1를 입력하면 종료.)
void Menu(int c){
    if(c==-1) return;

    char menu[4][30]={"커피","에이드",
                      "티","디저트"};
    printf("%s 맛있게 드셔\n", menu[c-1]);
}
void Finish2(int time){
    for(int i=0; i<time; i++){
        printf("%d초뒤 종료\n",time-i);
        Sleep(1000); // 1초대기
    }
    // 대신, 5초라는 고정 시간만 가능한 단점있음.
}
// --------------------------------------------
// 4. 리턴있고, 매개변수 있고 🎁
// 기존의 Menu와 기능은 동일하되 정상이면 
// 기능 실행 후 1 리턴, 비정상인 경우 바로 0리턴
// (추가)1~4, -1이 아니면, 잘못된 입력입니다.출력
int Menu2(int choice){
    if(choice == -1) 
        return 0;
    else if(choice<1 || choice>4){
        printf("잘못된 입력입니다.\n");
        return 1;
    }
    else{
        Menu(choice);
        return 1;
    }
}

void Start(){
    Introduce();
    SimpleLotto();
    SimpleLotto();
    SimpleLotto();
    printf("Random : %d\n",GetRandom1_10());
    P( GetRandom1_10() );
    // ------------------------
    printf("KEY : %d\n", GetKEY() );
    printf("Address : %s\n", GetAddress());
    printf("IP : %s\n", GetIP());
    // ------------------------
    Lotto(10);
    // ------------------------
    PrintTriangle(5);
    PrintTriangle(8);
    PrintTriangle(3);
    // ------------------------
    for(;1;){
        int choice = 0;
        PrintMenu();
        printf("뭐먹을래 : ");
        scanf("%d",&choice);
        if( !Menu2(choice) ){
            // 1정상 -> 못들어오게,0->1 만족!
            printf("프로그램 종료\n");
            break;
        }
        // < 실습> 아래의 기능을 함수로 빼서 구현하세요
        Finish2(3);
    }
}
// =========================================================
int main(){
    srand(time(NULL));
    Start();

}// ========================================================
/*----------------------------------------------------------
< 함수는 왜 써야 할까? >
1. 협업
  ★ Main함수에는, 반드시 최소한의 코드만 있어야 한다
  팀장 : Main함수 컨트롤.
  팀원 : 필요한 기능을 Main 작성 X 별도 함수 만들어서 전달
2. 유지보수에 좋다
  E() -> printf("----------------\n");
  아... ----은 좀 식상한데~~~ -> ~~~~~~~~~
  함수 만들기 전?? -> 매 코드를 뒤져가며 수정
  함수를 만들었으면?? -> 함수자리만 변경하면 전체 영향
3. 오히려 코드의 길이가 짧아짐 -> 접을수 있고, 재사용되기 때문

< 언제 함수를 만들까? >
1. 같은 로직, 같은 기능이 2번 이상 반복 사용될 경우
2. 해당 기능이 2번 이상 사용이 될 것으로 예상되는 경우
3. 그냥 웬만한건 함수로 만드세요.

< 함수 문법 >
리턴형태 함수이름(매개변수들...){
    실행할 코드들
    return 근데 필요하면 하고, 리턴없으면 안해도됨.
}

< 함수 유형 >
1. 리턴 없고 매개변수 없고 void E(){}
2. 리턴 있고 매개변수 없고
3. 리턴 없고 매개변수 있고
4. 리턴 있고 매개변수 있고
 
----------------------------------------------------------*/