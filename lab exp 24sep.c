que1
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

que2
//Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
int main() {
    char str[100];
    int i, alphabets = 0, digits = 0, specialChars = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        } else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if(str[i] != ' ' && str[i] != '\n') {
            specialChars++;
        }
    }
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);
    return 0;
}

que3
//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); 
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
    printf("Modified sentence: %s", str);
    return 0;
}

que4
//Check if a string is palindrome.
#include <stdio.h>
int main() 
{ char str[100];
  int i, len, flag = 0;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  // Calculate the length of the string
  for(len = 0; str[len] != '\0'; len++);
  // Check for palindrome
  for(i = 0; i < len / 2; i++) 
  {if(str[i] != str[len - i - 1]) 
    {flag = 1;
      break; }
  }
  if(flag)printf("%s is not a palindrome\n", str);  
  else printf("%s is a palindrome\n", str);  
  return 0;  
}

que5
//Find the longest word in a sentence.
#include <stdio.h>
int main()
 {
    char str[100], longest[100], word[100];
    int i = 0, j = 0, maxLength = 0, length = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') 
            {word[j++] = str[i]; } 
       else {
            if (j > maxLength) 
               { maxLength = j;
                word[j] = '\0';
                int k;
                for (k = 0; k <= j; k++) 
                  {  longest[k] = word[k]; }
               } j = 0; } 
        if (str[i] == '\0' || str[i] == '\n')
            { break; }
        i++;}
    
    printf("The longest word is: %s\n", longest);
    return 0;
}
