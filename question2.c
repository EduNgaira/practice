#include <stdio.h> 

int main() {
	    int n[5], s, i, j, w;
	        
	        for (i = 0; i < 5; i++) {
			        printf("Enter any integer: ");
				        scanf("%d", &(n[i]));

					        s = i; /* find index of smallest */
						        for (j = i - 1; j >= 0; j--) {
								            if (n[j] > n[s]) {
										                    s = j;
												                }
									            }
							        
							        w = n[i]; /* swap smallest with current */
								        n[i] = n[s];
									        n[s] = w;
										    }
		    
		    for (i = 0; i < 5; i++) {
			            printf("%d\n", n[i]);
				        }
		        
		        return 0;
}


