#include<stdio.h>
int main()
{   
   /*   char str[100];         //1st way
    gets(str);
    puts(str);    */
    
	char str[100];            //2nd way
    // gets(str);
	scanf("%[^\n]s",str);
    int i;
    for(i=0;str[i]!='\0';i++)
    {  
        
    	printf("\n%c",str[i]);   
	}       
    
   /* char str[100],*p;         // using pointers 
    printf("enter a string:");
    scanf("[^\n]s",str);
    p=str;
    int i;
    while(*p[i]!='\0')
    {
    	sleep(1);
    	printf("%c",*p);
    	p++;
	}
    */
	return 0;
}
