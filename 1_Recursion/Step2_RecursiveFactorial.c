// 재귀 함수를 통한 Factorial 구현
#include <stdio.h>

int Factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}

int main()
{
    printf("1! = %d \n", Factorial(1)); // 1! = 1
    printf("3! = %d \n", Factorial(3)); // 3! = 6
    printf("5! = %d \n", Factorial(5)); // 5! = 120
    printf("7! = %d \n", Factorial(7)); // 7! = 5040
    printf("9! = %d \n", Factorial(9)); // 9! = 362880

    return 0;
}