#include<stdio.h>
int main()
{ 
    printf("%c",'c'-34);   //a
    printf("%c",'A'+35);    //d
    printf("%c",'c');       //c
    printf("%d",'1');        //49
    printf("%c",'1'+2);     //3
    printf("%c",'1'+'3');   //49+51=d
    printf("%c",'1'+2);     //3
	return 0;
}
