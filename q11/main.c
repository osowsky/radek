#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Make a program in C/C++ or Java language that reverses a string informed by
the user without using any temporary variable, buffer or any pre-existing
function or method for this.*/

// Reverse a string.
char* _strrev(  char* lpszText )
{
  int iLen, i;

  if ( !lpszText ) // String must exist.
    return NULL;

  // size of a string.
  iLen = strlen( lpszText );

  for ( i = 0; i < iLen / 2; i++ )
  {
    // use the terminator as a temporary variable.
    lpszText[ iLen ] = lpszText[ iLen - 1 - i ];
    lpszText[ iLen - 1 - i ] = lpszText[ i ];
    lpszText[ i ] = lpszText[ iLen ];
  }
  lpszText[ iLen ] = 0; //return the string terminator.

  return lpszText;
};

int main( int argc, char** argv )
{
  int i;

  //Is there a string?
  if ( argv == 0)
    return -1;

  // Calc the length of the input arguments.
  for ( i = 1; i < argc; i++ )
    printf( "%s\n", _strrev( argv[ i ] ) );

  return 0;
};
