#include <stdio.h>

int climbStairs(int n) {
    if (n <= 2) return n;
    int a = 1, b = 2, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the number of steps in the staircase: ");
    scanf("%d", &n);
    printf("Number of distinct ways to climb to the top: %d\n", climbStairs(n));
    return 0;
}
