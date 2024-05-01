//Дано целое число N и набор из N целых чисел. Найти 
//максимальное количество подряд идущих минимальных элементов 
//из данного набора
//затраченное время - 10:27-10:47

#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int numbers[N];

    printf("элементы:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    int min_element = numbers[0];
    for (int i = 1; i < N; i++) {
        if (numbers[i] < min_element) {
            min_element = numbers[i];
        }
    }

    int max_consecutive = 0;
    int current_consecutive = 0;
    for (int i = 0; i < N; i++) {
        if (numbers[i] == min_element) {
            current_consecutive++;
        } else {
            if (current_consecutive > max_consecutive) {
                max_consecutive = current_consecutive;
            }
            current_consecutive = 0;
        }
    }

    if (current_consecutive > max_consecutive) {
        max_consecutive = current_consecutive;
    }

    printf("%d\n", max_consecutive);

    return 0;
}