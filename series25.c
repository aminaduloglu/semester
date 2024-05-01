//Дано целое число N и набор из N целых чисел, содержащий по крайней мере 
//два нуля. Вывести сумму чисел из данного набора, расположенных между первым 
//и последним нулем (если первый и последнийнули идут подряд, то вывести 0)
//затраченное время - 10:50-11:10

#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int numbers[N];

    printf("элементы:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    int first_zero_index = 0;
    while (numbers[first_zero_index] != 0) {
        first_zero_index++;
    }

    int last_zero_index = N - 1;
    while (numbers[last_zero_index] != 0) {
        last_zero_index--;
    }

    if (first_zero_index + 1 == last_zero_index) {
        printf("0\n");
        return 0;
    }

    int sum = 0;
    for (int i = first_zero_index + 1; i < last_zero_index; i++) {
        sum += numbers[i];
    }

    printf("%d\n", sum);

    return 0;
}