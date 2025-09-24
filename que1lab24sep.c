//wap to count the total no. of word of string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++)
    {if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
      {count++;}  
    }
    printf("Total number of words: %d\n", count + 1);
    return 0;
}
