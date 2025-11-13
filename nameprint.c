A
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(j==0 || j==10 || i==5 || i==0)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0 ;
}







N
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(j==0 || j==10 || i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0 ;
}







 S
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(i==0 || (j==0 && i<=5) || i==5 ||( j==10 && i>=5 ) || i==10)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0 ;
}







 H 
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(j==0 || j==10 || i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0 ;
}





I
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(i==0 || i==10 || j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0 ;
}




K
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<=10;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(j==0 || ((i+j==5) && (j<=5) ) || ((i-j==5) && (j<=5)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0 ;
}








ANSHIKA
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0;i<=10;i++)
    {
        //for letter A
        for(j=0;j<=10;j++)
        {
            if(j==0 || j==10 || i==5 || i==0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        for(j=11;j<=12;j++)
        {
            printf(" ");
        }

        //for letter N
        for(j=14;j<=25;j++)
        {
            if(j==14 || j==25 || j-i==14)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        for(j=26;j<=27;j++)
        {
            printf(" ");
        }

        // for letter S 
        for(j=28;j<=39;j++)
        {
            if((i==0) || (i==10) || (j==28 && i<=5) || (i==5) || (j==39 && i>=5))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }     
        }
        for(j=40;j<=41;j++)
        {
            printf(" ");
        }

        //for letter H 
        for(j=42;j<=53;j++)
        {
             if((j==42) || (j==53) || (i==5))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
         }

         for(j=54;j<=55;j++)
         {
            printf(" ");
         }

         //for letter I 
         for(j=56;j<=67;j++)
         {
            if(i==0 || i==10 || j==61)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
         }

         for(j=68;j<=69;j++)
         {
            printf(" ");
         }

         //for letter K 
         for(j=70;j<=75;j++)
         {
            if(j==70 || (i+j==75 && j<=75) || (j-i==65 && i>=6))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }


         }

         for(j=76;j<=77;j++)
         {
            printf(" ");
         }

         for(j=78;j<=89;j++)
         {
            if(j==78 || j==89 || i==0 || i==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
         }
        printf("\n");
    }
    return 0 ;
}
