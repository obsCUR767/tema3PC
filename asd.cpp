#include <stdio.h>

int main( int argc, char* argv[] )
{
	printf( "%d %s:\n", argc, argc > 1 ? "args" : "arg" );
	for( int i = 0; i < argc; i++ )
		printf( "arg %d %s ",i, argv[i] );
	printf( "\n" );

}
