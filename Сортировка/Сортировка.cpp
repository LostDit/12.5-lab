//Используется массив чисел с плавающей точкой для хранения данных.
//В коде не используются библиотеки, кроме <iostream>.
//Программа корректно использует обращения по индексам и выдаёт правильный ответ.
//Асимптотическая сложность алгоритма не более O(n ^ 2).
//Числа выводятся от большего к меньшему.
#include <iostream>

int main() {
    float array[15], tempvar1, tempvar2; bool chek = true;
    for (int i = 0; i < 15; i++) {
        std::cin >> array[i];
    }
    while (chek) {
        int correct = 0;
        for (int i = 0; i < 14; i++) {
            if (array[i] < array[i + 1]) {
                tempvar2 = array[i + 1];
                tempvar1 = array[i];
                array[i + 1] = tempvar1;
                array[i] = tempvar2;
            }
        }
        for (int i = 0; i < 14; i++) {
            if (array[i] > array[i + 1]) {
                correct++;
            }
            if (correct == 14) {
                chek = false;
            }
        }
    }
    for (int i = 0; i < 15; i++) {
        std::cout << array[i] << " ";
    }
}