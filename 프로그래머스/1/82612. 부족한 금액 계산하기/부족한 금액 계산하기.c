#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    // long long 자료형을 사용해 overflow 방지
    long long total = (long long)price * count * (count + 1) / 2;
    
    // 부족한 금액을 계산 (부족하지 않으면 0 반환)
    if (money >= total)
        return 0;
    else
        return total - money;
}
