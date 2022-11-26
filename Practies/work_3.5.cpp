#include <stdio.h>
//By Sarin Intaruksa
//65543206082-1
//Input4Number
int main() {
	int w ;
	int x ;
	int y ;
	int z ;
	int a = 1 ;
	int i = 1 ;
	int t = 1 ;
	int u = 1 ;
	int b , c , d ;
	int e , f , g ;
	 	printf( "Element[1] : " ) ;
	 	scanf( "%d" , &w ) ;
	 	printf( "Element[2] : " ) ;
	 	scanf( "%d" , &x ) ;
	 	printf( "Element[3] : ") ;
	 	scanf( "%d" , &y ) ;
	 	printf( "Element[4] : " ) ;
	 	scanf( "%d" , &z ) ;
	 	
	 	for( b = 1 ; w==x||w==y||w==z||x==y||x==z||y==z , x , y , z , w ; b ) {
	 		if( w==x ) {
	 			d = 1 ;
			}//end if 
			else {
			 	d = 0 ;
			}//end else
	 		if ( w==y ) {
	 			b = 1 ;
			}//end if
			else {
			 	b = 0 ;
			}//end else
			if( w==z ) {
	 			c = 1 ;
			}//end if
			else {
			 	c = 0 ;
			}//end else
			 if( x==y ) {
	 			e = 1 ;
			}//end if 
			 else {
			 	e = 0 ;
			}//end else
	 		if( x==z ) {
	 			f = 1 ;
			}//end if
			else {
			 	f = 0 ;
			}//end else
			 if( y==z ) {
	 			g = 1 ;
			}//end if
			 else {
			 	g = 0 ;
			}//end else
			 
			printf( "--------------------------------" ) ;
			printf( "\n" ) ;
			 
	 		a = 1 + d + b + c ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , w ) ;
	 		printf( "%d\n" , a ) ;
	 		
	 		if( i==d ) {
	 			
			}//end if
			else {			 
	 		i = 1 + d + e + f ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , x ) ;
	 		printf( "%d\n" , i ) ;
	 		}//end else
	 		if( t==e||t==b ) {
	 			
			}//end if
			else {	
	 		t = 1 + b + e + g ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , y ) ;
	 		printf( "%d\n" , t ) ;
	 		}//end else
	 		
	 		if( u==g||u==c||u==f ) {
	 			
			}//end if
			else {	
	 		u = 1 + c + f + g ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , z ) ;
	 		printf( "%d\n" , u ) ;
	 		}//end else
	 		printf( "\n" ) ;
	 		printf( "\n" ) ;
	 		printf( "       BY Sarin Intaruksa\n" ) ;
	 		printf( "         65543206082-1" ) ;
	 		return 0;
		 }//end for		 	
}//end function
