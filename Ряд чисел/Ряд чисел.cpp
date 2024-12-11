//Используется массив int для хранения данных.
//В коде не используются библиотеки, кроме <iostream>.
//Программа корректно использует обращения по индексам и выдаёт правильный ответ.
//Асимптотическая сложность алгоритма менее O(n ^ 2).
#include <iostream>

int main() {
    int numbers[15] = { 114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118 };
    setlocale(LC_ALL, "Russian");
    // Найдём минимальное число X
    int minNumber = numbers[0];
    for (int i = 1; i < 15; ++i) {
        if (numbers[i] < minNumber) {
            minNumber = numbers[i];
        }
    }

    // Вычисляем идеальную сумму последовательности из 14 чисел начиная с minNumber
    int n = 14; // количество чисел в последовательности без повтора
    int idealSum = n * (2 * minNumber + n - 1) / 2;

    // Вычисляем фактическую сумму массива
    int actualSum = 0;
    for (int i = 0; i < 15; ++i) {
        actualSum += numbers[i];
    }

    // Повторяющееся число
    int repeatedNumber = actualSum - idealSum;

    std::cout << "Повторяющееся число: " << repeatedNumber << std::endl;

    return 0;
}