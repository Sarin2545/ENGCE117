#include <stdio.h>
//By Sarin Intaruksa
//65543206082-1
int main() {
	int x ;
	int y ;
	int z   = 9 ;
	int ans = 0 ;

	printf( "Input X :" ) ;
	scanf( "%ld" , &x );
	for ( y = 1 ; y <= x ; y++ ) {
		ans += z ;
	  	printf( " %ld + " ,z ) ;
	  	z = z*10+9 ;	  
	}//end for
	printf( "\n Ans = %d " , ans ) ;
	return 0 ;
}//end function 

