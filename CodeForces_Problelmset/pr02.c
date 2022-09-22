#include<stdio.h>
#include<string.h>

int main(){
    char input[1000];
    gets(input);
    int count = 0;

    for (int i = 0; i < strlen(input); i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (input[i] == input[j])
            {
                break;
            }
        }
        if (i != j)
        {
            count++;
        }
    }
    printf ("%d\n" , count);
    // printf("%d\n", strlen(input));
    int ans = strlen(input) - count;
    printf("%d", ans + 1);
    return 0;
}