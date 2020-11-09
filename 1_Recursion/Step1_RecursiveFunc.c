// 재귀 함수 이해하기
#include <stdio.h>

void Recursive(int num)
{
    if (num <= 0) // 재귀의 탈출 조건
        return;
    printf("재귀함수 호출! %d\n", num);
    Recursive(num - 1);
}

int main()
{
    Recursive(3); // 재귀함수 호출! 3
                  // 재귀함수 호출! 2
                  // 재귀함수 호출! 1
    return 0;
}