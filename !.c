#include <stdio.h>
int main () {
	int a , lt , i ; 
	lt = 1 ;
	printf ( " nhap a :") ;
	scanf ("%d", &a )  ;
	for (int i = 2 ; i <= a ; i++ ) {
	lt = lt * i ;
	}
	printf (" gt = %d ",lt ) ;
	return 0 ;           
}
