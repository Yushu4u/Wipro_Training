#include <stdio.h>
#include <simpleClac.h>


int main()
{
    int a1,a2;
    int result=0;
    int c;

    banner();
    c = dispMenu();
    printf("\nEnter the two values: ");
    scanf("%d%d",&a1,&a2);
    // switch (dispMenu())
    switch(c)
    {
        case 1:
            result = add(a1,a2);
            printf("\nAdditon of %d + %d = %d",a1,a2,result);
            print_dots(41,'*');
            break;

        case 2:
            result = sub(a1,a2);
            printf("\nSub of %d - %d = %d",a1,a2,result);
            print_dots(41,'*');
            break;
        
        case 3:
            result = mul(a1,a2);
            printf("\nMultiplication of %d * %d = %d",a1,a2,result);
            print_dots(41,'*');
            break;

        case 4:
            result = div(a1,a2);
            printf("\nDivision of %d / %d = %d",a1,a2,result);
            print_dots(41,'*');
            break;
        
        case 5:
            result = mod(a1,a2);
            printf("\nMod of %d %% %d = %d",a1,a2,result);
            print_dots(41,'*');
            break;
            
        default:
            printf("\nEnter the correct choice\n");
            break;
    }
    
    printf("\n\n");
    return 0;

}