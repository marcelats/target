#include <string.h>
#include <stdio.h>
int main()
{
    char string[6] = "sdgvr", temp; 
    int i;
    for(i = 0; i < strlen(string)/2; i++)
    {
        temp = string[i];
        string[i] = string[strlen(string) - 1 - i];
        string[strlen(string) - i - 1] = temp;
    }
    printf("%s\n", string);
    return 0;
}
