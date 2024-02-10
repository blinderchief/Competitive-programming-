#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        if (n == 1) {
            printf("YES\n");
        } else {
            int x = 0, y = 0;
            int b[n], c[n];
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0) {
                    b[x++] = a[i];
                } else {
                    c[y++] = a[i];
                }
            }
        
            for (int i = 0; i < x - 1; i++) {
                for (int k = 0; k < x - 1 - i; k++) {
                    if (b[k] > b[k + 1]) {
                        int temp = b[k];
                        b[k] = b[k + 1];
                        b[k + 1] = temp;
                    }
                }
            }
            
            for (int i = 0; i < y - 1; i++) {
                for (int k = 0; k < y - 1 - i; k++) {
                    if (c[k] > c[k + 1]) {
                        int temp = c[k];
                        c[k] = c[k + 1];
                        c[k + 1] = temp;
                    }
                }
            }
            int z=0,w=0;
           for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    a[i] = b[z++];
                }
                else
                {
                    a[i] = c[w++];
                }
            }
            bool _Sorted = true;
        
            for (int i = 0; i < n - 1; i++) {
                if (a[i] > a[i + 1]) {
                    _Sorted = false;
                    break;
                }
            }
            if (_Sorted) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    return 0;
}



