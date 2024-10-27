#include<stdio.h>
#include<math.h>
int main()
{
	int electricity;
    scanf("%d",&electricity); 

    if (electricity<0)
	{ 
        printf("Invalid Value!\n");
    } 
	else if (electricity<=50) 
	{ 
        double cost=electricity * 0.53;
        printf("%.2f\n",cost); 
    }
	 else 
	{ 
        double cost=50*0.53+(electricity-50)*(0.53+0.05);
        printf("%.2f\n",cost); 
    }

    return 0;
}	

