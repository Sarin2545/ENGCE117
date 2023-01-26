#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NULL 0

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
    struct studentNode *back ;
} ;

struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ) ; 
void InsNode( struct studentNode *walk, char n[], int a, char s, float g ) ; 
void ShowAll( struct studentNode *walk ) ;
void GoBack( struct studentNode **walk ) ;
void DelNode( struct studentNode *walk ) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( start ) ;
    GoBack( &now ) ;
    DelNode( now ) ; ShowAll( start ) ; 
    DelNode( now ) ; ShowAll( start ) ; 
    DelNode( now ) ; ShowAll( start ) ; 
    return 0 ;
}//end function

struct studentNode *AddNode( struct studentNode **walk, char n[], int a, char s, float g ){
    struct studentNode *temp = NULL;
    while ( *walk != NULL )
    {
        temp = *walk;
        walk = &(*walk)->next;
    }  
    *walk = new struct studentNode;
    strcpy((*walk)->name, n);
    (*walk)->age = a;
    (*walk)->sex = s;
    (*walk)->gpa = g;
    (*walk)->next = NULL;
    (*walk)->back = temp;
    return *walk;
}//end function AddNode

void InsNode( struct studentNode *walk, char n[], int a, char s, float g ){
    if( walk->back != NULL ){
        walk->back->next = new struct studentNode;
        strcpy(walk->back->next->name, n);
        walk->back->next->age = a;
        walk->back->next->sex = s;
        walk->back->next->gpa = g;
        walk->back->next->next = walk;
        walk->back->next->back = walk->back;
        walk->back = walk->back->next;
    }
}//end function InsNode

void GoBack( struct studentNode **walk ){
    (*walk) = (*walk)->back;
}//end function GoBack

void DelNode( struct studentNode *walk ){
    printf("node now input : %s | ", walk->name);
    struct studentNode *temp;
    walk->back->next = walk->next;
    if( walk->next != NULL ){
        walk->next->back = walk->back;
        temp = walk->next;
    }else{
        temp = walk->back;
    }
    delete walk;
    walk = temp;
    walk->back;
    printf("move : %s | ", walk->name);
}//end function DelNode

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
    printf( " %s ", walk->name ) ;
    walk = walk->next ;
    }//end while
    printf( " \n " ) ;
}//end function
