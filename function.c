// with return value
// addition
// subtraction
// multiplication
// quotient
// remainder

#include<stdio.h>

int add (int a , int b )
{
    return a+b ;
}

int sub (int a , int b )
{
    return a-b ;
}

int mult (int a , int b)
{
    return a*b ;
}

int div (int a , int b )
{
    return a/b;
}

int mod(int a , int b )
{
    return a%b;
}

int main()
{
    int a ,b;
    printf("Enter the first number = ");
    scanf("%d",&a);

    printf("Enter the second number = ");
    scanf("%d",&b);

    int sum = add(a,b);
    printf(" sum = %d\n",sum);

    int difference = sub(a,b) ;
    printf("Difference = %d\n",difference);

    int product = mult(a,b);
    printf("Product = %d\n",product);

    int quotient = div(a,b);
    printf("Quotient = %d\n",quotient);

    int remainder = mod(a,b);
    printf("Remainder =  %d",remainder);

    return 0 ;
    
}




//simple interest 
//compound interest

#include<stdio.h>
#include<math.h>

float si(float p,float r,float t )
{
    return (p*r*t)/100 ;
}

float ci(float p , float r , float t )
{
    return p*(pow(1+(r/100),t)-1);
}

int main()
{
    float principle_amt , rate , time ;
    printf("Enter principle amount = ");
    scanf("%f",&principle_amt);

    printf("Enter rate = ");
    scanf("%f",&rate );

    printf("Enter time= ");
    scanf("%f",&time);

    float simple_int = si (principle_amt,rate,time);
    printf("Simple interest = %.2f\n ",simple_int);

    float compound_int = ci(principle_amt,rate ,time);
    printf("compound interest = %.2f",compound_int);



}






//area and perimeter of rectangle

#include<stdio.h>

int per (int l,int b )
{
    return 2*(l+b);
}

int ar (int l , int b )
{
    return l*b;
}

int main()
{
    int length , breadth ;

    printf("Enter the length of rectangle = ");
    scanf("%d",&length);

    printf("Enter the breadth of rectangle = ");
    scanf("%d",&breadth );

    int perimeter = per(length,breadth);
    printf("Perimeter of rectangle = %d\n ",perimeter);

    int area = ar(length , breadth);
    printf("Area of rectangle = %d ",area);
}





//area and perimeter of a triangle

#include<stdio.h>
#include<math.h>

float ar(int a ,int b , int c )
{
    int s = (a+b+c)/2;
    return pow((s*(s-a)*(s-b)*(s-c)),(1/2));
}

float perim(int a , int b , int c )
{
    return a+b+c;
}

int main ()
{
    int a, b, c ;
    printf("Enter three sides of a triangle = ");
    scanf("%d,%d,%d",&a,&b,&c);

    float perimeter = perim(a,b,c);
    printf("Perimeter of triangle = %.2f\n",perimeter );

    float area = ar(a,b,c);
    printf("Area of given triangle = %.2f",area);

    return 0 ;

}





