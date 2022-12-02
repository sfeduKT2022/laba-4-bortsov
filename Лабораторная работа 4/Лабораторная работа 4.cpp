#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    FILE* f = fopen("Text.txt", "r");
    FILE* f1 = fopen("Vivod.txt", "w");
    char s[1000];
    int i;
    f = fopen("Text.txt", "r");
    while (!feof(f))
        {
            fgets(s, 1000, f);
            for (i = 0; i < strlen(s); i++)
            {
                if (s[i] == '.' && (s[i + 1] == ' ' || s[i + 1] == '\0') || s[i] == '!' && (s[i + 1] == ' ' || s[i + 1] == '\0') || s[i] == '?' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
                {
                    fprintf(f1, "%c \n", s[i]);
                }
                else
                {
                    fprintf(f1, "%c", s[i]);
                }
            }
        }
    fclose(f);
    fclose(f1);
}