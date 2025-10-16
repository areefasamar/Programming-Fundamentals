#include <stdio.h>
int main () {
	int t , x , n , i , j , sum=0 ;
	
	scanf ("%d", &t) ; 
	
	for (i= 1 ; i<=t ; i++) {
		scanf ("%d %d" , &x , &n) ; 
		sum = 0 ; 
		for (j=1 ; j<=n ; j++) {
			sum +=x ; 
			x= x*-1 ; 
		}
		printf("%d\n" , sum) ; 
	}
return 0 ; 
}
