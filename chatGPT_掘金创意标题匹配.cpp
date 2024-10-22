#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isMatching(const char *creative, const char *title) {
    const char *c = creative;
    const char *t = title;

    while (*c && *t) 
	{
        if (*c == '{') 
		{
            while (*c && *c != '}') 
			{
                c++;
            }
            if (*c) c++;
        } else if (*c == *t) 
		{
            c++;
            t++;
        } else 
		{
            return false;
        }
    }
    while (*c) 
	{
        if (*c == '{') 
		{
            while (*c && *c != '}') 
			{
                c++;
            }
            if (*c) c++;
        } else 
		{
            return false;
        }
    }

    return *t == '\0';
}

int main() 
{
    int N;
    scanf("%d\n", &N);
    
    char creative[101];
    fgets(creative, sizeof(creative), stdin);
    creative[strcspn(creative, "\n")] = 0;  

    for (int i = 0; i < N; i++) 
	{
        char title[101];
        fgets(title, sizeof(title), stdin);
        title[strcspn(title, "\n")] = 0;  

        if (isMatching(creative, title)) 
		{
            printf("True\n");
        } else 
		{
            printf("False\n");
        }
    }

    return 0;
}
