#include <stdio.h>

int main() {
    // 10글자 + 널 문자를 위해 크기를 11로 설정
    char x[11]; 

    char max_char;
    int max_count = 0;   // 전체에서 가장 많이 나온 횟수
    
    // 문자열 입력 받기
    scanf("%s", x);

    
    for (char *p = x; p < x + 10; p++) {
        int now_count = 0; // 새로운 문자를 검사할 때마다 0으로 초기화

        for (char *q = x; q < x + 10; q++) {
            if (*p == *q) {
                now_count++;
            }
        }

        // 루프가 끝나면 현재 문자의 빈도수가 역대 최댓값보다 클때 갱신
        if (now_count > max_count) {
            max_count = now_count;
            max_char = *p; // 현재 가리키는 문자를 저장
        }
    }

    // 결과 출력
    printf("%c %d\n", max_char, max_count);
    
    return 0;
}
