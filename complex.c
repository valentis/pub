#include <stdio.h>
#include <complex.h>

int main( int argc, char *argv[] ) 
{
  float complex num1 = { 2.0f, 3.0f }; 
  float complex num2 = 3.0f - 4.0f * I;
  printf( "z = %f + %f * i\n", crealf(num1+num2), cimagf(num1+num2) ); 
  return 0;
}
