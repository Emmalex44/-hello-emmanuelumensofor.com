#include <cs50.h>
#include <stdio.h>

int main(void)

{
    printf("kindly input weight: \n");
    float w = get_float("w: ");
    printf("%.2f\n",w);

printf("kindly input height: \n");

  float h = get_float("h: ");
  printf("%.2f \n", h);

  printf("bmi calculator:");

   float bmi = w/h/h;

    printf("w/h/h = %.2f\n", bmi);

      return 0;

}

