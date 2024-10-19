#include<stdio.h>

int main()
{
    /*
        ~ DATATYPES :
        
            - Types of the data which a variable will hold.
        
        There are two types of Datatypes :
        1) Primitive Datatypes (Built-in Datatypes) :
            [int, float, char, double] - System Software & Application Software
            [signed int, unsigned int, short int, long int] - Mainly used in OS
        
        2) Non-Primitive Datatypes (User-Defined Datatypes) :
            [structure, union, enum, void, typedef]
    */
    
    //  Implementation of Datatypes :
    
    /*
        INT => 32 bit = 2 bytes ; 64 bit = 4 bytes
        FLOAT => 4 bytes
        CHARACTER => 1 bytes
        DOUBLE => 8 bytes
    */
    
    //  Variable Declaration & Initialization
    
    int a = 10;
    float f = 2.7;
    char ch = 'a';
    // char ch2 = 'abc'; //- Printing the latest Character
    double d = 2.555;
    signed int si = -1;
    unsigned int ui = 22;
    short int shi = 12;
    long int li = 312321;
    
    //  Printing Variables
    
    printf("Integer : %d\n", a);
    printf("Float : %.0f\n", f); // Round of the value
    printf("Character : %c\n", ch);
    // printf("Character : %c\n", ch2);
    printf("Double : %f\n", d);
    printf("Signed Int : %d\n", si);
    printf("Unsigned Int : %d\n", ui);
    printf("Short Int : %d\n", shi);
    printf("Long Int : %ld\n", li);
    //  printf("Long Int : %d\n", li); //- will print the output but give warning to use ld
    
    
    // sizeof() Operator : 
    // Uses %ld because memory size may varies from small to large so, it is better to use ld
    // sizeof() operator give value in whole figure.
    
    printf("Memory size of a is : %ld\n", sizeof(a));
    // printf("Memory size of int is : %d\n", sizeof(int)); // It depends on compiler whether to take %ld or %d because C is the platform dependant lang.
    printf("Memory size of ch is : %ld\n", sizeof(ch));
    printf("Memory size of character is : %ld\n", sizeof(char));
    printf("Memory size of d is : %ld\n", sizeof(d));
    printf("Memory size of double is : %ld\n", sizeof(double));
    printf("Memory size of si is : %ld\n", sizeof(si));
    printf("Memory size of signed int is : %ld\n", sizeof(signed int));
    printf("Memory size of ui is : %ld\n", sizeof(ui));
    printf("Memory size of unsigned int is : %ld\n", sizeof(unsigned int));
    printf("Memory size of shi is : %ld\n", sizeof(shi));
    printf("Memory size of short int is : %ld\n", sizeof(short int));
    printf("Memory size of li is : %ld\n", sizeof(li));
    printf("Memory size of long int is : %ld\n", sizeof(long int));
    
    int data = sizeof(a) + sizeof(f);
    printf("Addition of size of integer a & float f is : %d\n\n", data);
    
    // Int VS float
    /*Some specific entities only has whole number to represent e.g. Age
        And some entities might need both whole & fraction number like Height
    */
    
    int age1 = 20;
    printf("Age : %d\n", age1);
    int age2 = 20.80;
    printf("Age : %d\n", age2);
    
    float height1 = 55;
    printf("Height : %.2f\n", height1);
    float height2 = 45.5;
    printf("Height : %.2f\n", height2);
    
    return 0;
}
