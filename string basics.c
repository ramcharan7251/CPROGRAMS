#include<stdio.h>
int main()
{
/*	char a[5];
	printf("enter a string");     // strings  for one word
	scanf("%s",&a);
	printf("%s",a);  */
/*	char a[10];
	printf("enter multiple strings");     //  multiple strings to include spaces
	scanf("%[^\n]s",&a);
	printf("%s",a);   */
	
	
 /* char c;
    printf("%c",c);     // c initialized but not declared,so nothings output
 //	printf("%c",a);    // a is not intialized
	printf("%c",'a');    // returns a
	printf("%d",'a');    // returns ascii valu   */
	
	char str1[6]="hello";               
	char str2[]="hello";
	char str3[]={'h','e','l','l','o'};
	char str4[6]={'h','e','l','l','o'};    // if elements are n ,then size must be n+1,if 
    char str5[5]={'h','r','l','l','o'};
    char str6[4]={'h','e','l','l','o'};    
	printf("%s",str1);
	printf("%s",str2);
	printf("%s",str3);
	printf("%s",str4);
	printf("%s",str5);
	printf("%s",str6);
	int i;
	for(i=0;str4[i]!='\0';i++)    // printing out throuth for loop
	{
		printf("%c",str4[i]);
	}
	
	
	
    
	return 0;
}
