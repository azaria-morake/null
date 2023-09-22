#include <stdio.h>

#define LEN 40 //define LENGTH macro to be 40
#define COND "too tough" //define CONDITION to be tough

int count = 0; //initialize count variable

void underscore(void); //underscore function prototype, epxects no values, expects no return type

int main(void) //beginnig of the program

{

  underscore(); //fist usage of function

  printf(" %s.\n", COND); //print CONDITION

  underscore(); //second usage of function

  return (0); //end program

}

void underscore(void) //define underscore function

{

  count = 1; //assing value to count so it can start appropriately
  
  while (count <= LEN) //start loop for as long as count is less than LENGTH
    {
     
      putchar('_'); //as long as above condition is met, print an underscore

      count++; //increment count by 1
    }
  
      putchar('\n'); //as long as the loop condition is met, print a new line to separate the underscore from other statments
    
}
