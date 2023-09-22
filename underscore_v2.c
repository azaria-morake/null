#include <stdio.h>
#include <string.h>

#define COND "too tough"
#define LEN 40
#define NL "\n"
#define SPACES " "
#define UNDS "_"

void undescore(char cCh, int iNum);
void new_line(char cNl);
	       
int main(void)

{

  new_line();
  underscore(UNDS, LEN);
  new_line();

  underscore(SPACES, (LEN - strlen(COND)));
  printf(" %s", COND);
  new_line();

  return (0);
  
}

void underscore(char cCh, int iNum)
{
  int count = 1;
  
  while (count <= iNum)
    {
      putchar("%c", cCh);
      count++;
    }
}

void new_line(char cNl)
{
  putchar("\n");

    }

    
