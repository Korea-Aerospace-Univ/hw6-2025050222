#include <stdio.h>

int main() {

    
    // 최대 10글자 + 문자열 끝을 나타내는 \0 저장 공간
    char x[11];

    // 가장 많이 나온 문자를 저장할 변수
    char max_char;
    // 현재 까지의 최대 등장 횟수 저장
    int max_count = 0;

    // 문자열 입력 받기
    scanf("%s", x);

    // 문자열의 각 문자를 하나씩 검사
    // p는 현재 검사 중인 문자를 가리키는 포인터
    for (char *p = x; p < x + 10; p++) {

        // 현재 문자의 등장 횟수 저장 변수
        int now_count = 0;
        // q를 이용해 문자열 전체를 다시 탐색
        for (char *q =x;q < x +10; q++) {

            // p가 가리키는 문자와 q가 가리키는 문자가 같으면
            if (*p ==*q) {

            //  횟수 증가
                now_count++;
            }
        }

        // 현재 문자의 등장 횟수가 지금까지의 최대 등장 횟수보다 크면 변경
        if (now_count > max_count) {
            // 최대 등장 횟수 저장
            max_count = now_count;

            // 가장 많이 나온 문자 저장
            max_char = *p;
        }
    }

    // 가장 많이 나온 문자와 등장 횟수 출력
    printf("%c %d\n", max_char, max_count);

    return 0;
}
