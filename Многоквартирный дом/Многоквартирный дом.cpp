//Используется массив строк для хранения данных.
//В коде не используются библиотеки, кроме <iostream> и <string>.
//Программа проверяет доступность элемента по индексу и выдаёт корректный результат.
#include <iostream>
#include <string>

int main() {
    //SidorovA IvanovA PetrovA SidorovB IvanovB PetrovB SidorovC IvanovC PetrovC SidorovD - для проверки, вставка для массива
    std::string sitizen[10] = {}; int j;
    for (int i = 0; i < 10; i++) {
        getline(std::cin, sitizen[i]);
    }
    
    std::cout << "Enter number: ";
    std::cin >> j;

    if (j <= 0 || j > 10) {
        std::cout << "Out of range" << "\n";
    }else std::cout << sitizen[j - 1] << "\n";
    
    return 0;
}