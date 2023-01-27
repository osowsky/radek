#include <stdio.h>
#include <stdlib.h>

/*Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.

For each multiple of 3, print "Foo" instead of the number.
For each multiple of 5, print "Baa" instead of the number.
For multiple numbers simultaneously of 3 and 5, print "FooBaa",
instead of the number.

Your solution should be using as few lines of code as possible,
but you should produce efficient code.*/

int main( void )
{
  int i;
  
  for ( i = 1; i <= 100; i++ )
  {
    if ( ( i % 3 ) && ( i % 5 ) ) // Number is not multiple of 3 and 5.
      printf( "%03d", i );

    if ( !( i % 3 ) ) // Number is multiple of 3.
      printf( "Foo" );

    if ( !( i % 5 ) ) // Number is multiple of 5.
      printf( "Baa" );

    printf( "\n" ); // Next line.
  }
};
