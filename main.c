#include<stdio.h>

int main(int argc, char** argv)
{
    int select = 0;
    int a = 0;
    int b = 0;

    printf("1. ���ϱ� | 2. ���� | 3. ���ϱ� | 4. ������\n");
    printf("> ");
    scanf("%d", &select);

    switch(select){
        case 1:
        break;
        case 2:
            printf("�� ���ڸ� �Է�\n");
            scanf("%d %d", &a, &b);
            break;
        case 3:
        break;
        case 4:
        break;
        default:
            printf("1~4 �̳��� ���ڸ� �Է����ּ���\n");
    }


    return 0;
}