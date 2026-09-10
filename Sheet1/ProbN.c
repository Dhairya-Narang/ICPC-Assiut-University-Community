#include <stdio.h>
#include <ctype.h>
int main()
{
    char input;
    scanf(" %c",&input);
    if (input >= 'a' && input <='z'){
        char upper = toupper(input);
        printf("%c",upper);
    }
    else if (input >= 'A' && input <= 'Z'){
        char lower = tolower(input);
        printf("%c",lower);
    }
}
