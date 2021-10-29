#include <stdio.h>
#include <string.h>


int HuiWen(int x)
{
    int num = 0;
    int ori = x;
    while(x>0);
    {
       num = num*10 + x%10;
       x = x/10;
    }
if(num == ori)
    return 1;
else
    return 0;
}
