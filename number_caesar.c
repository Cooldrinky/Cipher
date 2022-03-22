#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 1)
    {
            printf("Provide one more argument. \n");
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {


        printf("%c", argv[1][i]+1);

    }
    printf("\n");
}