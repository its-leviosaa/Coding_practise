#include <stdio.h>
#include <math.h>

//creating function for taking fraction as input

void scan_fraction(int *nump, int *denomp)
{
    printf("Enter numerator.\n");
    scanf("%d", nump);
    printf("Enter denominator.\n");
    scanf("%d", denomp);
}

//creating function for asking which operation user want to perform on fraction

char get_operator()
{
    char c;
    printf("Enter '+' for addition, '-' for subtracton, '*' for multiplication, '/' for division.\n");
    scanf(" %c", &c);
    return c;
}

//creating function for finding gcd of fractions

int find_gcd(int n1, int n2)
{
    //abs is absolute value function which is pre defined
    //it returns absolute value of the number
    if (abs(n1) == abs(n2)) 
    return abs(n1);
    else if(abs(n1)>abs(n2))
    {
        find_gcd(abs(n1)-abs(n2), abs(n2));
    }
    else if(abs(n1)<abs(n2))
    {
        find_gcd(abs(n1), abs(n2)-abs(n1));
    }
}

//creating function for printing fractions

void print_frac(int num, int denum)
{
    printf("The final result is %d/%d \n", num, denum);
}

//creating function for printing reduced form of fractions

int reduce_function(int *nump, int *denump)
{
    int n_p = *nump/find_gcd(*nump, *denump);
    int d_p = *denump/find_gcd(*nump, *denump);
    print_frac(n_p , d_p);
}

//creating function for adding fractions

void add_fractions(int n1, int d1, int n2, int d2, int *n_ansp, int *d_ansp)
{
*n_ansp = (n1*d2) + (n2*d1);
*d_ansp = d1*d2;
printf("Without reducing the fraction answer is %d/%d \n", *n_ansp, *d_ansp);
reduce_function(n_ansp, d_ansp);
}

//creating function for subtracting fractions

void sub_fractions(int n1, int d1, int n2, int d2, int *n_ansp, int *d_ansp)
{
 *n_ansp = n1*d2 - n2*d1;
 *d_ansp = d1*d2;
 printf("Without reducing the fraction answer is %d/%d \n", *n_ansp, *d_ansp);
 reduce_function(n_ansp, d_ansp);
}

//creating function for multiplying fractions

void multiply_fractions(int n1, int d1, int n2, int d2, int *n_ansp, int *d_ansp)
{
*n_ansp = n1*n2;
*d_ansp = d1*d2;
printf("Without reducing the fraction answer is %d/%d \n", *n_ansp, *d_ansp);
reduce_function(n_ansp, d_ansp);
}

//creating function for dividing fractions
void division_fractions(int n1, int d1, int n2, int d2, int *n_ansp, int *d_ansp)
{
*n_ansp = n1*d2;
*d_ansp = n2*d1;
printf("Without reducing the fraction answer is %d/%d \n", *n_ansp, *d_ansp);
reduce_function(n_ansp, d_ansp);
}

//function for implementing those above functions

int main()
{
    int a,b,c,d;
    printf("For first fraction :\n");
    scan_fraction(&a,&b);
    printf("For second fraction :\n");
    scan_fraction(&c,&d);
    int e,f ;
    char ch = get_operator();
    if( ch == '+')
    { add_fractions(a,b,c,d,&e, &f); }
    else if ( ch == '-' )
    { sub_fractions(a,b,c,d,&e,&f); }
    else if ( ch == '*' )
    { multiply_fractions(a,b,c,d,&e,&f); }
    else if ( ch == '/' )
    { division_fractions(a,b,c,d,&e,&f); }
    return 0;
}