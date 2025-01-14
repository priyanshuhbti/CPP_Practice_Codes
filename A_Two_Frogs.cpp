#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool can_win(int n, int a, int b) {
    if (abs(a - b) % 2 == 0) {
        return false;
    }
    return true;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        if (can_win(n, a, b)) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    return 0;
}