/*Sample Input 0
4
3 2 1 3
Sample Output 0
2

Explanation 0
We have one candle of height 1, one candle of height 2, and two candles of height 3. Colleen only blows out the tallest candles, meaning the candles where height=3. Because there are 2such candles, we print 2 on a new line.
*/

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int birthdayCakeCandles(int n, int ar_size, int* ar,int m) {
   int count=0;
    for(int i=0;i<n;i++)
   {
       if(m==ar[i])
           count++;
   }
    return count;
}

int main() {
    int n; 
    int max=0;
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%i",&ar[i]);
        if(max<ar[i])
            max=ar[i];
    }
    int result = birthdayCakeCandles(n, n, ar,max);
    printf("%d\n", result);
    return 0;
}
