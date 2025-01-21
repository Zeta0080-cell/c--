//À¶ÇÅoj¡ª202 È·¶¨×Ö·û´®ÊÇ·ñ°üº¬Î¨Ò»×Ö·û 
#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
  int i,j,flag=1;
  char s[10000];
  for(i=0;1;i++)
  {
    scanf("%s",&s[i]);
    s[i]='\0';
  }
  for(i=0;s[i]!='\0';i++)
  {
    for(j=i+1;s[j]!='\0';j++)
    {
      if(s[i]==s[j])
      {
        flag=0;
        break;
      }
    }
  }
  if(flag==1)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  return 0;
}
