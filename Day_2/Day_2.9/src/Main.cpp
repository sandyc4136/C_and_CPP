#include<cstdio>
int main( void ){
    int number = 10;
    int *ptr1 = &number;
    *ptr1 = 50; //OK: Dereferencing
    printf("Number  :   %d\n", number); //50
    printf("Number  :   %d\n", *ptr1);  //50: Dereferencing
    printf("---------\n");
    const int *ptr2 = &number;
    // since here the number has been set to constant int;
    //*ptr2 = 60;   //Not OK


    printf("Number  :   %d\n", number); //50
    printf("Number  :   %d\n", *ptr2);  //50: Dereferencing
    *ptr1=70;
    printf("Number  :   %d\n", number); //70
       printf("Number  :   %d\n", *ptr1);//70
    return 0;
}
