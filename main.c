#include<stdio.h>

int main(int argc, char** argv)
{
    int select = 0;
    int a = 0;
    int b = 0;

    printf("1. 더하기 | 2. 빼기 | 3. 곱하기 | 4. 나누기\n");
    printf("> ");
    scanf("%d", &select);

    switch(select){
        case 1:
        break;
        case 2:
            printf("두 숫자를 입력\n");
            scanf("%d %d", &a, &b);
            break;
        case 3:
        break;
        case 4:
        break;
        default:
            printf("1~4 이내의 숫자를 입력해주세요\n");
    }


    return 0;
}