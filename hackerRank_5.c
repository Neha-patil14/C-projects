/*ask
Hackerrank problem statement on pointers
Complete the function void update(int *a,int *b). It receives two integer pointers, int* a and int* b. Set the value of  to their sum, and  to their absolute difference. There is no return value, and no return statement is needed.

*/
#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    *a = sum;
    *b = abs(*a - (2 * (*b)));
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    update(&a, &b);
    printf("%d\n%d", a, b);
    return 0;
}
