#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {

            sum += (double)i / (i + 1);
        } else {
           
            sum -= (double)i / (i + 1);
        }
    }

    printf("Sum of the series 1/2 - 2/3 + 3/4 - 4/5 + 5/6 + ... - %d/(%d+1): %lf\n", n, n, sum);

    return 0;
}
