#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Make a program in C/C++ or Java language that calculates the length of a string
informed by the user (do not use any pre-existing function or method for this,
such as len(), count(), strlen() or lenght());*/

// Get the length of a string.
int _strlen(  char* lpszText )
{
  int iLen = 0;

  if ( !lpszText ) // String must exist.
    return -1;

  while( *( lpszText + iLen ) )
    iLen++;

  return iLen;
};

int main( int argc, char** argv )
{
  int i;

  //Is there a string?
  if ( argv == 0)
    return -1;

  // Calc the length of the input arguments.
  for ( i = 1; i < argc; i++ )
    printf( "%d\n", _strlen( argv[ i ] ) );

  return 0;
};
