#include <stdio.h>        // printf
#include <assert.h>       // assert
#include <limits.h>       // named constants for min, max of C integer data types


float sales_example(float item_cost, unsigned short num_items, float tax);

// TODO: (Task 2) Put declaration of loop_example here
void loop_example();

void utype_sizes();

// TODO: (Task 4) Put declaration of stype_sizes here

void stype_sizes();

int main() {
    // TASK 1: sales example
    float total1;
    total1 = sales_example(3.94, 4, 0.06);
    printf("Total1 = $%.2f\n", total1);
    // TODO: Test on multiple calls, then add assert statements here
    float total2;
    total2 = sales_example(4, 1, 0.06);
    printf("Total2 = $%.2f\n", total2);
    assert(total2 - 4.24 <= 0.000001);
    float total3;
    total3 = sales_example(0.25, 4, 0.06);
    printf("Total3 = $%.2f\n", total3);
    assert(total3 - 1.06 <= 0.000001);
    float total4;
    total4 = sales_example(0.01, 4, 0.00);
    printf("Total1 = $%.2f\n", total4);
    assert(total4 - 0.04 <= 0.000001);

    // TASK 2: loop experiment
    // TODO: place function call here
    loop_example();

    // TASK 3: unsigned integer types, sizes, and maximums
    utype_sizes();

    // TASK 4: signed integer types, sizes, mins and maxs
    // TODO: place function call here
    stype_sizes();

    return 0;
}


/** TODO TASK 1:
    * Complete the function below to implement the simple sales example
    */
float sales_example(float item_cost, unsigned short num_items, float tax) {
    // TODO: Complete this definition (removing the default return)
    float pretax = item_cost*num_items;
    float total = pretax * (1+tax);
    if (tax == 0){
        printf("no sales tax");
    }
    return total;
}

/** TODO TASK 2:
    * Create your loop_example function here
    */
void loop_example(){
    for (int i = 10; i <= 25; i = i + 5){
        printf("%d ,",i);
        printf("%d \n",i*i);
    }
    int i = 10;
    while (i <= 25){
        printf("%d ,",i);
        printf("%d \n",i*i);
        i = i + 5;
    }
    int i2 = 10;
    do {
        printf("%d ,",i2);
        printf("%d \n",i2*i2);
        i2 = i2 + 5;
    } while (i2 <= 25);
}

/** TODO TASK 3:
    * Add print statements to print the max values and sizes of each unsigned
    * integer type (short, int, long), based on the example of unsigned char.
    */
void utype_sizes() {
	printf("unsigned char | max: %hu | size: %zu\n", 
           (unsigned char) UCHAR_MAX, 
           sizeof(unsigned char));
    printf("unsigned short | max: %hu | size: %zu\n", 
           (unsigned short) USHRT_MAX, 
           sizeof(unsigned short));
    printf("unsigned int | max: %hu | size: %zu\n", 
           (unsigned int) UINT_MAX, 
           sizeof(unsigned int));
    printf("unsigned long | max: %hu | size: %zu\n", 
           (unsigned long) ULONG_MAX, 
           sizeof(unsigned long));
}

/** TODO TASK 4:
    * Create your stype_sizes function here to print min/max values and sizes of 
    * signed integer types: char, short, int, long
    */
void stype_sizes() {
	printf("signed char | min: %hu | max: %hu | size: %zu\n",
            (signed char) CHAR_MIN, 
            (signed char) CHAR_MAX, 
            sizeof(signed char));
    printf("signed short | min: %hu | max: %hu | size: %zu\n",
            (signed short) SHRT_MIN,  
            (signed short) SHRT_MAX, 
            sizeof(signed short));
    printf("signed int | min: %hu | max: %hu | size: %zu\n",
            (signed int) INT_MIN,
            (signed int) INT_MAX, 
            sizeof(signed int));
    printf("signed long | min: %hu | max: %hu | size: %zu\n", 
            (signed long) LONG_MIN,
            (signed long) LONG_MAX, 
            sizeof(signed long));
}
