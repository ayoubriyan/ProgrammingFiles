#include<stdio.h>

int main()
{
    int x , y, z ;

    for(x=1;x>=6;x++)
    {
        printf("       ");
        
        for(y=1;y>=x;y++)
        {
            printf("/b");
            for(z=1;z>=y;z++)
            {
                printf("*");
            }

        }




    }

    
    
   
    return 0;
}