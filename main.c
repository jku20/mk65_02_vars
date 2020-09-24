#include <stdio.h>

int main() {
    char a = '1';
    short i_forgot_a_variable_so_this_is_the_name_now = 1;
    int b = 1;
    long c = 1;
    unsigned int d = 1;

    //I wonder, should just be 255
    unsigned char e = -1;
    printf("e as decimal: %d\n", e);
    //wow, nothing
    printf("e: as character %c\n", e);

    //some more stuff
    printf("a: as character %c\n", a);
    a = -29;
    printf("a: as character %c\n", a);
    //should be 0
    char f = 256 ;
    printf("f as decimal: %d\n", f);

    int from_print = printf("the number of characters in this scentance");
    printf(": %d\n",from_print);

    printf("inital value of a: %d\n",a); 
    a = i_forgot_a_variable_so_this_is_the_name_now;
    printf("might be valid cast: %d\n",a); 
    i_forgot_a_variable_so_this_is_the_name_now = 300;
    //should be invalid
    a = i_forgot_a_variable_so_this_is_the_name_now;
    printf("should be invalid and random: %d\n",a);

    //random bit of memory
    long random_number_thing;
    printf("here's a random number in memory which is 0 for me a bunch for some reason: %ld\n",random_number_thing);

    int x,y,z;
    x = y = z = 1; //this should work
    printf("x: %d, y: %d, z: %d\n",x,y,z);
    
    float db = 123456789; //it is kind of right for a bit and than just become bad;
    printf("db: %f\n",db);
    //putting random really way to big number in the float
    //looks like what happens is the right length of the number is stored but the percsion past a point is not
    db = 101010101001010101010101010101010.11123;
    printf("db: %f\n",db);

    return 0;
}
