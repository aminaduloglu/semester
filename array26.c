//Дан целочисленный массив размера N. Проверить, чередуются ли в
//нем четные и нечетные числа. Если чередуются, то вывести 0, если нет,
//то вывести порядковый номер первого элемента, нарушающего закономерность
//затраченное время - 10:10 - 10:25

#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int arr[N];

    printf("элементы:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int expected_type = arr[0] % 2;

    int first_mismatch_index = -1;

    for (int i = 1; i < N; i++) {
        if (arr[i] % 2 != expected_type) {
            first_mismatch_index = i; 
            break; 
        }
 
        expected_type = 1 - expected_type;
    }

    if (first_mismatch_index == -1) {
        printf("0\n"); 
    } else {
        printf("%d\n", first_mismatch_index); 
    }

    return 0;
}