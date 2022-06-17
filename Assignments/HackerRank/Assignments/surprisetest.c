// #include <stdio.h>

/*int main()


{
    int n;

    printf("Enter an integer\n");
    scanf("%d", &n);

    if (n & 1 == 1)
        printf("Odd\n");
    else
        printf("Even\n");

    return 0;
} */

/*
#include<stdio.h>
int main() 
{
 int intType;
 float floatType;
 double doubleType;
 char charType;

 printf("Size of int: %zu bytes\n", sizeof(intType));
 printf("Size of float: %zu bytes\n", sizeof(floatType));
 printf("Size of double: %zu bytes\n", sizeof(doubleType));
 printf("Size of char: %zu byte\n", sizeof(charType));
 return 0;
} */

/*
#include<stdio.h>  
 int main()  
{   
int a=10, b=20;    
printf("Before swap a=%d b=%d",a,b);    
a=a+b;//a=30 (10+20)   
b=a-b;//b=10 (30-20)   
a=a-b;//a=20 (30-10)   
printf("\nAfter swap a=%d b=%d",a,b);   
return 0;  
}
*/

/*
#include <stdio.h>
int main()
{
int a, b, c;
 printf("Enter 1st number\n");
 scanf("%d",&a);
 printf("Enter 2nd number\n");
 scanf("%d",&b);
 printf("Enter 3rd number\n");
 scanf("%d",&c);
 if(a>b)
 {
  if(a>c)
  {
   printf("%d is the greater number",a);
  }
  else{
   printf("%d is greater number",c);
  }
 }
 else
 {
  printf("%d is greater",b);
 }
} */

/*
#include<stdio.h>

int main()

{

int num1, num2;
printf("Enter 1st number\n");
scanf("%d",&num1);
printf("Enter 2nd number\n");
scanf("%d",&num2);
if(num1^num2)
{
  printf("both numbers are not equal");
}

else{
  printf("Both numbers are equal");
}

return 0;
}   */

/*This command is a preprocessor directive in C that includes all standard input-output files before compiling any C program so as to make use of all those functions in our C program.
#include <stdio.h>

int main() // This is the line from where the execution of the program starts. The main() function starts the execution of any C program.
{          //(Opening bracket) – This indicates the beginning of any function in the program (Here it indicates the beginning of the main function).
    // we can also put comments like this by using tow forward slash or multi line comments using /*_____*/
* /
/*
    printf(“Hello world”); //–The printf() command is included in the C stdio.h library, which helps to display the message on the output screen.
    return 0;              //–This command terminates the C program and returns a null value, that is, 0.
} //(Closing brackets)-  This indicates the end of the function. (Here it indicates the end of the main function)

  #include <stdio.h>

        int main()

        {

            float f = 1;

            switch (f)

            {

            case 1.0:

                printf("yes\n");

             break;

         default:

             printf("default\n");

         }

     }