#include <stdio.h>
//By Sarin Intaruksa
//65543206082-1
//Input9Number
int main() {
	int w ;
	int x ;
	int y ;
	int z ;
	int w1 ;
	int x1 ;
	int y1 ;
	int z1 ;
	int q1 ;
	int w2 = 1 ;
	int x2 = 1 ;
	int y2 = 1 ;
	int z2 = 1 ;
	int q2 = 1 ;
	int a = 1 ;
	int i = 1 ;
	int t = 1 ;
	int u = 1 ;
	int a50 = 1 ;
	int i50 = 1 ;
	int t50 = 1 ;
	int u50 = 1 ;
	int r50 = 1 ;
	int b , c , d ;
	int e , f , g ;
	int a1 , a2 , a3 , a4 , a5 , a6 ;
	int a7 , a8 , a9 , a10 , a11 , a12 ;
	int a13 , a14 , a15 , a16 , a17 , a18 ;
	int a19 , a20 , a21 , a22 , a23 , a24 ;
	int a25 , a26 , a27 , a28 , a29 , a30 ;
	 	printf( "Element[1] : " ) ;
	 	scanf( "%d" , &w ) ;
	 	printf( "Element[2] : " ) ;
	 	scanf( "%d" , &x ) ;
	 	printf( "Element[3] : ") ;
	 	scanf( "%d" , &y ) ;
	 	printf( "Element[4] : " ) ;
	 	scanf( "%d" , &z ) ;
	 	printf( "Element[5] : " ) ;
	 	scanf( "%d" , &w1 ) ;
	 	printf( "Element[6] : " ) ;
	 	scanf( "%d" , &x1 ) ;
	 	printf( "Element[7] : ") ;
	 	scanf( "%d" , &y1 ) ;
	 	printf( "Element[8] : " ) ;
	 	scanf( "%d" , &z1 ) ;
	 	printf( "Element[9] : " ) ;
	 	scanf( "%d" , &q1 ) ;
	 	
	 	for( b = 1 ; w==x||w==y||w==z||w==w1||w==x1||w==y1||w==z1||w==q1||x==y||x==z||x==w1||x==x1||x==y1||x==z1||x==q1||
		 		y==z||y==w1||y==x1||y==y1||y==z1||y==q1||z==w1||z==x1||z==y1||z==z1||z==q1||w1==x1||w1==y1||w1==z1||w1==q1||
				x1==y1||x1==z1||x1==q1||y1==z1||y1==q1||z1==q1||  x , y , z , w , w1 , x1 , y1 , z1 , q1 ; b ) {
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
			
			//Start to nine number...Im crazy!!!
			if( w==w1 ) {
	 			a1 = 1 ;
			}//end if 
			else {
			 	a1 = 0 ;
			}//end else
	 		if ( w==x1 ) {
	 			a2 = 1 ;
			}//end if
			else {
			 	a2 = 0 ;
			}//end else
			if( w==y1 ) {
	 			a3 = 1 ;
			}//end if
			else {
			 	a3 = 0 ;
			}//end else
			 if( w==z1 ) {
	 			a4 = 1 ;
			}//end if 
			 else {
			 	a4 = 0 ;
			}//end else
	 		if( w==q1 ) {
	 			a5 = 1 ;
			}//end if
			else {
			 	a5 = 0 ;
			}//end else
			 if( x==w1 ) {
	 			a6 = 1 ;
			}//end if
			 else {
			 	a6 = 0 ;
			}//end else
			if( x==x1 ) {
	 			a7 = 1 ;
			}//end if 
			else {
			 	a7 = 0 ;
			}//end else
	 		if ( x==y1 ) {
	 			a8 = 1 ;
			}//end if
			else {
			 	a8 = 0 ;
			}//end else
			if( x==z1 ) {
	 			a9 = 1 ;
			}//end if
			else {
			 	a9 = 0 ;
			}//end else
			 if( x==q1 ) {
	 			a10 = 1 ;
			}//end if 
			 else {
			 	a10 = 0 ;
			}//end else
	 		if( y==w1 ) {
	 			a11 = 1 ;
			}//end if
			else {
			 	a11 = 0 ;
			}//end else
			 if( y==x1 ) {
	 			a12 = 1 ;
			}//end if
			 else {
			 	a12 = 0 ;
			}//end else
			if( y==y1 ) {
	 			a13 = 1 ;
			}//end if 
			else {
			 	a13 = 0 ;
			}//end else
	 		if ( y==z1 ) {
	 			a14 = 1 ;
			}//end if
			else {
			 	a14 = 0 ;
			}//end else
			if( y==q1 ) {
	 			a15 = 1 ;
			}//end if
			else {
			 	a15 = 0 ;
			}//end else
			 if( z==w1 ) {
	 			a16 = 1 ;
			}//end if 
			 else {
			 	a16 = 0 ;
			}//end else
	 		if( z==x1 ) {
	 			a17 = 1 ;
			}//end if
			else {
			 	a17 = 0 ;
			}//end else
			 if( z==y1 ) {
	 			a18 = 1 ;
			}//end if
			 else {
			 	a18 = 0 ;
			}//end else
			if( z==z1 ) {
	 			a19 = 1 ;
			}//end if 
			else {
			 	a19 = 0 ;
			}//end else
	 		if ( z==q1 ) {
	 			a20 = 1 ;
			}//end if
			else {
			 	a20 = 0 ;
			}//end else
			if( w1==x1 ) {
	 			a21 = 1 ;
			}//end if
			else {
			 	a21 = 0 ;
			}//end else
			 if( w1==y1 ) {
	 			a22 = 1 ;
			}//end if 
			 else {
			 	a22 = 0 ;
			}//end else
	 		if( w1==z1 ) {
	 			a23 = 1 ;
			}//end if
			else {
			 	a23 = 0 ;
			}//end else
			 if( w1==q1 ) {
	 			a24 = 1 ;
			}//end if
			 else {
			 	a24 = 0 ;
			}//end else
			if( x1==y1 ) {
	 			a25 = 1 ;
			}//end if 
			else {
			 	a25 = 0 ;
			}//end else
	 		if ( x1==z1 ) {
	 			a26 = 1 ;
			}//end if
			else {
			 	a26 = 0 ;
			}//end else
			if( x1==q1 ) {
	 			a27 = 1 ;
			}//end if
			else {
			 	a27 = 0 ;
			}//end else
			 if( y1==z1 ) {
	 			a28 = 1 ;
			}//end if 
			 else {
			 	a28 = 0 ;
			}//end else
	 		if( y1==q1 ) {
	 			a29 = 1 ;
			}//end if
			else {
			 	a29 = 0 ;
			}//end else
			 if( z1==q1 ) {
	 			a30 = 1 ;
			}//end if
			 else {
			 	a30 = 0 ;
			}//end else
			 
			printf( "--------------------------------" ) ;
			printf( "\n" ) ;
			 
	 		a = 1 + d + b + c + a1 + a2 + a3 + a4 + a5 ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , w ) ;
	 		printf( "%d\n" , a ) ;
	 		
	 		if( i==d ) {
	 			
			}//end if
			else {			 
	 		i = 1 + d + e + f + a6 + a7 + a8 + a9 + a10 ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , x ) ;
	 		printf( "%d\n" , i ) ;
	 		}//end else
	 		if( t==e||t==b ) {
	 			
			}//end if
			else {	
	 		t = 1 + b + e + g + a11 + a12 + a13 + a14 + a15 ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , y ) ;
	 		printf( "%d\n" , t ) ;
	 		}//end else
	 		
	 		if( u==g||u==c||u==f ) {
	 			
			}//end if
			else {	
	 		u = 1 + c + f + g + a16 + a17 + a18 + a19 + a20 ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , z ) ;
	 		printf( "%d\n" , u ) ;
	 		}//end else
	 		
	 		//new project!!!///////////////////////////////////////////////////////////////////////
	 		if( a50==c||a50==f||a50==g||a50==a1||a50==a6||a50==a11 ) {
	 			
			}//end if
			else {	
	 		a50 = 1 + a1 + a6 + a11 + a16 + a21 + a22 + a23 + a24 ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , w1 ) ;
	 		printf( "%d\n" , a50 ) ;
	 		}//end else
	 		
	 		if( i50==a2||i50==a7||i50==a12||i50==a17||t50==a21) {
	 			
			}//end if
			else {	
	 		i50 = 1 + a2 + a7 + a12 + a17 + a21 + a25 + a26 + a27 ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , x1 ) ;
	 		printf( "%d\n" , i50 ) ;
	 		}//end else
	 		
	 		if( t50==a3||t50==a8||t50==a13||t50==a18||t50==a22||t50==a25 ) {
	 			
			}//end if
			else {	
	 		t50 = 1 + a3 + a8 + a13 + a18 + a22 + a25 + a28 + a29 ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , y1 ) ;
	 		printf( "%d\n" , t50 ) ;
	 		}//end else
	 		
	 		if( u50==a4||u50==a9||u50==a14||u50==a19||u50==a23||u50==a26||u50==a28 ) {
	 			
			}//end if
			else {	
	 		u50 = 1 + a4 + a9 + a14 + a19 + a23 + a26 + a28 + a30 ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , z1 ) ;
	 		printf( "%d\n" , u50 ) ;
	 		}//end else
	 		
	 		if( r50==a5||r50==a10||r50==a15||r50==a20||r50==a24||r50==a27||r50==a29||r50==a30 ) {
	 			
			}//end if
			else {	
	 		r50 = 1 + a5 + a10 + a15 + a20 + a24 + a27 + a29 + a30 ;
	 		printf( "Number " ) ;
	 		printf( "%d = " , q1 ) ;
	 		printf( "%d\n" , r50 ) ;
	 		}//end else
	 		
	 		printf( "\n" ) ;
	 		printf( "\n" ) ;
	 		printf( "       BY Sarin Intaruksa\n" ) ;
	 		printf( "         65543206082-1" ) ;
	 		return 0;
		 }//end for		 	
}//end function
