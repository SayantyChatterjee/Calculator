#include<stdio.h>
int main()
{
    char op;
    int a,b,result;
    printf("\n enter an operator");
    scanf("%c",&op);
    printf("\n enter two nos:");
    scanf("%d%d",&a,&b);
    switch (op)
    {
    case '+': result=a+b; 
           break;
     case '-': result=a-b; 
           break;
     case '*': result=a*b; 
           break;
     case '/': result=a/b; 
           break; 
    }
    printf("result=%d",result);
    return 0;
}