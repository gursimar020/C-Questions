/* find the lonely number

Sample Input 0
3
1 1 2
Sample Output 0
1
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int lonelyinteger(int ar, int* a) {
    int res=0;
    for(int i=0;i<ar;i++)
        res=res^a[i];
    return res;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *a = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%i",&a[i]);
    }
    int result = lonelyinteger(n, a);
    printf("%d\n", result);
    return 0;
}

