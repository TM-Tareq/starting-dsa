// https://codeforces.com/contest/2040/problem/A

#include<stdlib.h>
#include<math.h>
#include<stdio.h>
int main() {
    int t, n, k;

    scanf("%d", &t);

    for(int m = 0; m < t; m ++) {
        scanf("%d%d", &n, &k);

        int a[n];
        
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

// Choosing index number

int found = 0;

// for first player in i index choose
        for(int i = 0; i < n; i++) {

            int canWin = 0;
            
            // for second player in j index choose
            for(int j = 0; i < n; j++) {
                if(i != j) {
                    int dif = abs(a[i] - a[j]);

                    if(dif % k != 0) {
                        // first player win
                        // print the index number i
                        canWin = 0;
                        break;
                    }
                }
            }

            if(canWin) {
                printf("YES\n%d\n", i + 1);
                found = 1;
                break;
            }

            if (!found) {
            printf("NO\n");
        }
        }

         
    }

    return 0;
}