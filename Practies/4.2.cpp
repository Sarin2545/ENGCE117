#include <stdio.h>
#include <string.h>

void go( int ***p, int **z ) {
	**p = *z ;
}

int main() {
 int *b = new int ; *b = 10 ;
 int *c = new int ; *c = 20 ;
 int **a ;
 go( &a, &b ) ;
 printf( "%d %p %p %p ", **a, *a, a, &a ) ;
 go( &a, &c ) ;
 printf( "%d %p %p %p ", **a, *a, a, &a ) ;
 return 0 ;
}//end function
