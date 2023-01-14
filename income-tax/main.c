/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int a;
  
    printf("Enter your amount in Rs.\t");
    scanf("%d",&a);
    
    
    if(a<250000){
        printf("You don't need to pay tax");
    }
    else if(a>=250000 && a<=500000){
        printf("You have to pay tax Rs.%d",(a*5)/100);
    }
    else if(a>500000 && a<=10000000){
        printf("You have to pay tax Rs. %d",(a*20)/100);
    }
    else{
        printf("You have to pay tax Rs.%d",(a*30)/100);
    }


    return 0;
}


