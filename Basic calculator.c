#include<stdio.h>
main()
{
    char ch;
    int a,b,c;
    printf("which operation do you want to do? /n A for addition /n S for subtruction /n M for multiplication /n D for division/n");
    scanf("%c",&ch);

    printf("enter the first value:");
    scanf("%d",&a);

    printf("enter the second value: ");
    scanf("%d",&b);

    if(ch=='A' || ch=='a')
    {
        c=a+b;
        printf("the result is a=%d and b=%d is c=%d",a,b,c);
    }
    else if(ch=='S' || ch=='s')
    {
        c=a-b;
        printf("the result is a=%d and b=%d is c=%d",a,b,c);
    }
    else if(ch=='M' || ch=='m')
    {
        c=a*b;
        printf("the result is a=%d and b=%d is c=%d",a,b,c);
    }
    else
    {
        c=a/b;
        printf("the result is a=%d and b=%d",a,b,c);
    }

}
