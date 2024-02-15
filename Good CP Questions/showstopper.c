#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
       int a[n],b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        } 
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        } 
        int mx1 = 0, mx2 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) swap(&a[i], &b[i]);
            mx1 = max(mx1, a[i]);
            mx2 = max(mx2, b[i]);
        }  
        if (mx1 == a[n - 1] && mx2 == b[n - 1]) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}