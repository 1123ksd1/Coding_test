#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2,int answer)
{   
     if((-5000<=num1<=5000)&&(-5000<=num2<=5000))
     {
         answer = num1 + num2;
     }
    
    return answer;
}