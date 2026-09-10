#include <stdio.h>

int main()
{
    long long x , y;
    char sign;
    scanf("%lld %c %lld", &x , &sign , &y);
    if (sign == '+'){
        int add = x + y;
        printf("%d",add);
    }
    else if (sign == '-'){
        int sub = x - y;
        printf("%d",sub);
    }
    else if (sign == '*'){
        long long multiply = 1ll*(x * y);
        printf("%lld",multiply);
    }
    else if (sign == '/'){
        long long div = x / y;
        printf("%lld", div);
    }
}
