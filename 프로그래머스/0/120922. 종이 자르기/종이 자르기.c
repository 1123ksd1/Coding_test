#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int M, int N) {
    int answer = 0;
    int a = 0;
    int b = 0;
    a = N - 1;
    b = N * (M-1);
    answer = a + b;
    printf("총 가위질 %d번이 필요합니다",answer);
    return answer;
}