#include <stdio.h>
int main()
{
    int day,number;
    printf("enter the number between 1 to 3\n");
    scanf("%d",&day);
    
    switch (day)
    {
    case 1:
        printf("monday");
        break;
    
    case 2:
        printf("tuesday");
        break;

    case 3:
        printf("wednusday");
        break;    
    
    }


    return 0;
}
