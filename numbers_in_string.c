#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];
    int count = 0;
    int i = 0;
    
    fgets(str, sizeof(str), stdin);
    
    while (str[i] != '\0')
    {
        if (isdigit(str[i]))
        {
            count++;
        }
        i++;
    }

    printf("Numbers in string: %d\n", count);
    
    return 0;
}
