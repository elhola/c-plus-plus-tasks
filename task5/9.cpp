#include <iostream>
#include <cstdlib>
#include <ctime>

void array(int size) {
    for (int i = 0; i < size; i++) {
        std::cout << 0 << " ";
    }
    std::cout << std::endl;
}
void array2(int size) {
    for (int i = 1; i < size + 1; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}
void read_array3(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "]: ";
        std::cin >> arr[i];
    }
}
void print_array3(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] * 2 << " ";
    }
    std::cout << std::endl;
}
void shift_right(int* numbers, int size) {
    int temp = numbers[size - 1];
    for (int i = size - 1; i >= 0; i--)
    {
        numbers[i] = numbers[i - 1];
    }
    numbers[0] = temp;
    std::cout << "\nTo right: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
}
void shift_left(int* numbers, int size) {
    int temp = numbers[0]; //5[0] 1 2 3 4
    int temp2 = numbers[1];//5 1[1] 2 3 4
    for (int i = 2; i < size; i++)
    {
        numbers[i - 2] = numbers[i]; //зсув на 2 вліво
    }
    numbers[size - 2] = temp;
    numbers[size - 1] = temp2;
    std::cout << "\nTo left: ";
    for (int i = 0; i < size; i++)
        std::cout << numbers[i] << " ";
}
void twins_array(int* twins, int* twins2, int size, int size2) {

    std::cout << "Enter the random numbers to fill first array: " << size << " numbers need!\n";
    for (int i = 0; i < size; i++) {
        std::cin >> twins[i];
    }
    std::cout << "\nEnter the random numbers to fill second array: " << size2 << " numbers need!\n";
    for (int i = 0; i < size2; i++) {
        std::cin >> twins2[i];
    }

    if (size > size2) {
        for (int i = 0; i < size; i++)
        {
            std::cout << twins[i] << " ";
        }
    }
    else {
        for (int i = 0; i < size2; i++)
        {
            std::cout << twins2[i] << " ";
        }
    }

    if (size == size2) {
        int* twins3 = new int[size];
        std::cout << "\nThe third array with the sum of two arrays:\n";
        for (int i = 0; i < size; i++) {
            twins3[i] = twins[i] + twins2[i];
            std::cout << twins3[i] << " ";
        }
        delete[]twins3;
    }
}
void random() {
    int length;
    std::cout << std::endl << "Enter size of array for random: "; std::cin >> length;
    int* randomNumbers = new int[length];
    srand(time(NULL));
    for (int i = 0; i < length; i++) {
        randomNumbers[i] = rand(); //от 0 дo 32767
        std::cout << randomNumbers[i] << " ";
    }
    delete[]randomNumbers;
}
void matrix() {
    int i, j, N, M, a[20][20];
    std::cout << std::endl << "N="; //ввод строк
    std::cin >> N;
    std::cout << "M="; //ввод столбцов
    std::cin >> M;
    srand(time(NULL));

    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            a[i][j] = rand();
    std::cout << "matrix A \n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
            std::cout << a[i][j] << " ";
        std::cout << std::endl;
    }
}



int main()
{
    //завдання 1
    int size;
    std::cout << "Enter array size: ";
    std::cin >> size;
    array(size);

    //завдання 2
    std::cout << "Enter array size: ";
    std::cin >> size;
    array2(size);

    //завдання 3
    int* arr = new int[size];
    std::cout << "Enter array size: ";
    std::cin >> size;
    read_array3(arr, size);
    print_array3(arr, size);
    delete[]arr;

    //завдання 4
    std::cout << "Enter elements of array: ";
    std::cin >> size;
    int* numbers = new int[size];
    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> numbers[i];
    }
    if (size < 2) {
        std::cout << "Enter a number greater than 1!";
        return -1;
    }
    shift_right(numbers, size);
    shift_left(numbers, size); //numbers зараз зсунутий вправо 5 1 2 3 4 -> 2 3 4 5 1
    delete[]numbers;

    //завдання 5
    int size2;
    std::cout << std::endl << "Enter size of array 1: "; std::cin >> size;
    int* twins = new int[size];
    std::cout << "Enter size of array 2: "; std::cin >> size2;
    int* twins2 = new int[size2];
    twins_array(twins, twins2, size, size2);
    delete[]twins;
    delete[]twins2;

    //завдання 6
    random();

    //завдання 7
    matrix();

    return 0;
}
