//Sarin Intaruksa 65543206082-1 Sec.3
//www.youtube.com/watch?v=lAuAU5WVMwc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//------------------------------------------------------------------------------------------------------------//
struct midtermNode 
{
    int num ;
    struct midtermNode *next ;
} ;
//------------------------------------------------------------------------------------------------------------//
struct midtermNode *AddNode ( struct midtermNode **walk , int num )
{
    while ( *walk != NULL )
    {
    	walk = &( *walk ) -> next ;
    }
    *walk = new struct midtermNode ;
    ( *walk ) -> num = num ;
    ( *walk ) -> next = NULL ;
    return *walk ;
}//end function midtermNode AddNode
//------------------------------------------------------------------------------------------------------------//
void showAll ( struct midtermNode *walk ) 
{
    struct midtermNode *current = walk ;
    while ( current != NULL ) {
        printf( " %d " , current -> num ) ;
        current = current -> next ;
    }
    printf( "\n" ) ;
}// end function showAll
//------------------------------------------------------------------------------------------------------------//
void showBack ( struct midtermNode *walk ) 
{
    if ( walk == NULL ) return ;
    showBack (walk -> next ) ;
    printf( " %d " , walk -> num ) ;
}// end function showBack
//------------------------------------------------------------------------------------------------------------//
void swapNode ( struct midtermNode *walk, int A , int B ) 
{
    struct midtermNode *nodeA = NULL ;
    struct midtermNode *nodeB = NULL ;
    struct midtermNode *current = walk ;
    while ( current != NULL ) {
        if ( current -> num == A ) {
            nodeA = current ;
        } 
		else if ( current -> num == B ) {
            nodeB = current ;
        }
		current = current -> next ;
    }
    if ( A == NULL || B == NULL ) ;
    int temp = nodeA -> num ;
    nodeA -> num = nodeB -> num ;
    nodeB -> num = temp ;
}// end function swapNode
//------------------------------------------------------------------------------------------------------------//
void updateNode ( struct midtermNode *walk , int Anum , int Bnum ) 
{
    midtermNode *current = walk ;
    while ( current != NULL )
    {
        if (current -> num == Anum) {
            current -> num = Bnum ;
        }
        current = current -> next ;
    }
}// end function updateNode
//------------------------------------------------------------------------------------------------------------//
int main ( ) 
{
    struct midtermNode *start = NULL ;
    printf( "\n--------------------------------\n" ) ;
    printf( "           Midterm\n" ) ;
    printf( " Sarin Intaruksa 65543206082-1 " ) ;
    printf( "\n            Sec.3" ) ;
    printf( "\n--------------------------------\n" ) ;
    
    AddNode( &start , 10 ) ;
    AddNode( &start , 20 ) ;
    AddNode( &start , 30 ) ;
    AddNode( &start , 40 ) ;
    
    printf( "\nShowAll     :  " ) ;
    showAll( start ) ;              //showAll
    
    printf( "ShowBack    :  " ) ;
    showBack( start ) ;             //showBack
    
    printf( "\n\nSwapNode1   :  " ) ;
    swapNode( start , 20 , 30 ) ;   //swap1
    showAll( start ) ; 
    
    printf( "SwapNode2   :  " ) ;
    swapNode( start , 40 , 10 ) ;   //swap2
    showAll( start ) ;
    
    swapNode( start , 10 , 40 ) ;
    swapNode( start , 20 , 30 ) ;
    
	printf( "\nUpdateNode1 :  " ) ;
    updateNode( start , 10 , 99 ) ; //update1
    showAll( start ) ; 
    
	printf( "UpdateNode2 :  " ) ;
    updateNode( start , 10 , 98 ) ; //update2
    showAll( start ) ;
    
    return 0 ;
}// end function main
//------------------------------------------------------------------------------------------------------------//
