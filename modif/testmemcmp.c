

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* My memcmp implementation */
int mymemcmp( const void * pointer1, const void * pointer2, size_t size ) {
    unsigned long position;
    for( position=0; position<size; ++position ) {
        int delta = *(unsigned char *)pointer1++ - *(unsigned char *)pointer2++;
        if ( delta ) return delta;
    }
    return 0;
}

int main() {

    int array1 [] = { 54, 85, 20, 63, 21 };
    int array2 [] = { 54, 85, 19, 63, 21 };
    size_t size = sizeof( int ) * 5;

    printf("%d ", memcmp( array1, array2, size));
    printf("%d\n", mymemcmp( array1, array2, size));       
    printf("%d ", memcmp( array1, array1, size));
    printf("%d\n", mymemcmp( array1, array1, size) );       
    printf("%d ", memcmp( array2, array1, size));
    printf("%d\n", mymemcmp( array2, array1, size) );       
    
    printf( "Test is ok\n" );
    
    return 0;
}