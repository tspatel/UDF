#include<stdio.h>
calc(int n)
{
	int i,a,b;
	do{
		if(n==6)
		{
			printf("exit..");
		}
		else if(n>6)
		{
			printf("plz proper choice enter\n");
		}
		else if(n<6)
		{
			switch(n)
			{
				case 1:
					printf("enter value a=");
					scanf("%d",&a);
					printf("enter value b=");
					scanf("%d",&b);
					printf("addition of a+b=%d",a+b);
					break;
					
					
				case 2:
					printf("enter value a=");
					scanf("%d",&a);
					printf("enter value b=");
					scanf("%d",&b);
					printf("substriction of a-b=%d",a-b);
					break;
					
				case 3:
					printf("enter value a=");
					scanf("%d",&a);
					printf("enter value b=");
					scanf("%d",&b);
					printf("multipliction of a*b=%d",a*b);
					break;
					
					
				case 4:
					printf("enter value a=");
					scanf("%d",&a);
					printf("enter value b=");
					scanf("%d",&b);
					printf("divison of a/b=%d",a/b);
					break;
					
				case 5:
					printf("enter value a=");
					scanf("%d",&a);
					printf("enter value b=");
					scanf("%d",&b);
					printf("modulas of a%b=%d",a%b);
					break;
			}
			
		}
		
	  }while(n!=6);
		
	
}
main()
{
	int n;
	printf("press 1 for addition\n");
	printf("press 2 for substriction\n");
    printf("press 3 for multipliction\n");
    printf("press 4 for divison\n");
    printf("press 5 for modulas\n");
    printf("press 6 for exit\n");
    printf("enter your choice=\n");
    scanf("%d",&n);
    calc(n);
}
