#include<cstdio>

using namespace std;

void printp(int *p){
    
    printf("pointer is %p, value is %d\n", p, *p);
    *p = 20;
}

void print(int p){
    
    printf("Value of the argument passed is %d\n", p);
    // Change the value of p
    p = 200;
}

int main(){

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    // Call by reference

    printp(p++);
    printp(p++);
    printp(p++);
    
    // This changed first three array elements
    
    for (int i : arr){

       printf("i is %d\n", i);
    }

    int val = 100;

    // Call by value
   
    print(val);

    printf("Current value of val is %d.\n \
Call By Value WILL NOT change the value inside main.\n", val);
    
    // Call by reference
    printp(&val);


    printf("Current value of val is %d.\n \
Call By Reference WILL change the value inside main.\n", val);


    return 0;
}
