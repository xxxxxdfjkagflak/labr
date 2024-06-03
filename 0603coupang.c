#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int x, y, m;
    int sum = 0;
    int z = 0;
    int i;
    int shift;

    for (i = 0; i <= 100; i++) {
        printf("내가 오늘 일해서 받은 금액을 쓰시오: ");
        scanf("%d", &x);

        if (x <= 45450)
            printf("주간조입니다\n");
        else if (x <= 80880)
            printf("야간조입니다\n");
        else
            printf("심야조입니다\n");

        do {
            printf("일주일에 몇 번 나가셨나요? (1~7): ");
            scanf("%d", &y);
            if (y < 1 || y > 7) {
                printf("잘못된 입력입니다. 1에서 7 사이의 값을 입력해주세요.\n");
            }
        } while (y < 1 || y > 7);

        sum = y * x;
        z += sum;

        printf("일주일 동안 번 금액: %d\n", sum);
        printf("현재까지 번 금액: %d\n", z);

        if (z > 1000000) {
            printf("목표 금액인 100만원을 채웠습니다.\n");
            break;
        }
    }

    printf("돈을 더 버실 계획입니까? (맞다면 1 아니면 0을 눌러주세요): ");
    scanf("%d", &m);
    if (m == 1) {
        printf("주간조, 야간조, 심야조 중 나갈 것을 고르시오 (1: 주간조, 2: 야간조, 3: 심야조): ");
        scanf("%d", &shift);
        switch (shift) {
        case 1:
            printf("주간조를 선택하셨습니다.\n");
            break;
        case 2:
            printf("야간조를 선택하셨습니다.\n");
            break;
        case 3:
            printf("심야조를 선택하셨습니다.\n");
            break;
        default:
            printf("잘못된 선택입니다.\n");
            break;
        }
    }
    else if (m == 0) {
        printf("수고하셨습니다\n");
    }

    return 0;
}
