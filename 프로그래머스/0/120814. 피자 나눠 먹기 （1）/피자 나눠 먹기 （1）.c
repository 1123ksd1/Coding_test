#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 사람수 % 7 =
// 15 % 7 = 2..1 만약 나머지가 발생하면 +1
//14 % 7== 2
// 사람수 :n 결과값 result 나머지 : remain
int solution (int n)
{
    int result = n / 7;
    
    if(n %7 !=0)
    {
        result+=1;
        printf("%d",result);
    }

    return result;
}