#include<cstdio>
int main( void ){
    const int number = 10;
    const int *ptr1 = &number;
    //*ptr1 = 50;   //Not OK
    printf("Number  :   %d\n", number);//10
    printf("Number  :   %d\n", *ptr1);//10: Dereferencing
        printf("---------\n");
        int *ptr2 = (int *)&number;
        *ptr2 = 50;
        printf("Number  :   %d\n", number);//10
        printf("Number  :   %d\n", *ptr2);//50: Unexpected behavior
        return 0;
}
