#include <stdio.h>
int main(){


    int x =10;
    printf("The number of x:%d\n",x);
    //print memory address
    printf("Memory address of x:%d\n",&x);

    // create pointer
    int *ptr;
    ptr =&x;

    // print memory address with pointer
    printf("Memory address of x use pointer:%d\n", ptr);
    printf("The value of x with pointer:%d \n",*ptr);

    //print pointer memory address
    printf("pointer memory adderss:%d\n",&ptr);


    //sum to variable value with pointer
    int num1 = 20;
    int num2= 30;


    //create pointer
    int *ptr1;
    int *ptr2;

    //store the memory address with pointer

    ptr1 = &num1;
    ptr2 = &num2;

    int sum  = *ptr1 + *ptr2;
    printf("Two number sum use pointer:%d\n",sum);



return 0;

}
