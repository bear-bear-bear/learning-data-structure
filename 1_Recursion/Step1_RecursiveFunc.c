// ��� �Լ� �����ϱ�
#include <stdio.h>

void Recursive(int num)
{
    if (num <= 0) // ����� Ż�� ����
        return;
    printf("����Լ� ȣ��! %d\n", num);
    Recursive(num - 1);
}

int main()
{
    Recursive(3); // ����Լ� ȣ��! 3
                  // ����Լ� ȣ��! 2
                  // ����Լ� ȣ��! 1
    return 0;
}