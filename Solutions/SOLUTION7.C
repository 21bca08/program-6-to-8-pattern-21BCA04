/* WAP to print following pattern
*****
 ***
  *
DATE : 23/01/2022
AUTHOR: KAMLESH KUMAWAT */
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("enter a number till you are draw patttern:");
	scanf("%d",&n);
	for(i=n;i>=1;i=i-2)
		{
			for(j=1;j<=i;j++)
				printf("*");
			printf("\n");
		}
	getch();
}