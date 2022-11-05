#include <iostream>
#include <vector>

int main()
{
    //завдання 1
    int size;
    std::cout << "Enter number: ";
    std::cin >> size;
    for (int i = 0; i < size; i++) std::cout << "Hello world!" << std::endl;

    //завдання 2
    int n;
    std::cout << "Enter number: ";
    std::cin >> n;
    for (int i = 1; i < n + 1; i++) std::cout << i << " ";

    //завдання 3
    int even;
    std::cout << std::endl << "Enter number: ";
    std::cin >> even;
    for (int i = 1; i < even + 1; i++) {
        if (even % 2 == 0) std::cout << i << " ";
    }

    //завдання 4
    int da;
    std::cout << std::endl << "Enter a number greater than zero : ";
    std::cin >> da;
    if (da < 0) std::cout << "sorry your number less than zero" << std::endl;
    for (int i = 1; i < da + 1; i++) std::cout << da << " ";

    //завдання 5
    int weight; int height;
    std::cout << std::endl << "Enter weight and height: ";
    std::cin >> weight >> height;
    for (int i = 1; i <= weight; i++) {
        for (int j = 1; j <= height; j++) {
            std::cout << "#";
        }
        std::cout << std::endl;
    }
    //завдання 6
    int buf;
    int max{};
    int numc;
    int i = 1;
    std::cout << std::endl << "Enter size for numbers : ";
    std::cin >> numc;
    while (i <= numc) {
        std::cout << "number " << i << ": ";
        std::cin >> buf;
        if (i == 1) {
            max = buf;
        }
        else if (buf > max) {
            max = buf;
        }
        ++i;
    }
    std::cout << "Maximum: " << max << std::endl;

    return 0;
}