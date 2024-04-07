 //Print a pattern of numbers from  to  as shown below. Each of the numbers is separated by a single space.
 #include <stdio.h>
int main() 
{

    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int val = n;
            if (i < j && i < size - j - 1) {
                val -= i;
            } else if (i < j && i >= size - j - 1) {
                val -= size - j - 1;
            } else if (i >= j && i >= size - j - 1) {
                val -= size - i - 1;
            } else {
                val -= j;
            }
            printf("%d ", val);
        }
        printf("\n");
    }

    return 0;
}