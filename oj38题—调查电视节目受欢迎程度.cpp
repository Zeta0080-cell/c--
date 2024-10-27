//oj38题—调查电视节目受欢迎程度 
#include <stdio.h>
int main() 
{
    int n; 
    scanf("%d", &n); 
    int votes[8] = {0}; 
    for (int i = 0; i < n; i++) 
	{
        int vote;
        scanf("%d", &vote); 
        if (vote >= 1 && vote <= 8) 
		{
            votes[vote - 1]++; 
        }
    }
    for (int i = 0; i < 8; i++) 
	{
        printf("%d %d\n", i + 1, votes[i]);
    }
    return 0;
}
