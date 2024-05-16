#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
  int myNum = 5;
  int *pNum = myNum;

  pNum = 10;
  *pNum = 10;

}
