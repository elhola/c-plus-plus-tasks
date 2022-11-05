#include <iostream>

int main()
{
    using namespace std;
    int age = 23;
    double price = 42.67;
    int a = 20;
    int b = 10;
    cout << "Hello World!\n" << "age: " << age << endl << "price: " << price << endl << "a= " << a << endl << "b= " << b << endl;
    cout << "Yaroslav" << endl;

    //завдання 3.1
    string str;
    cout << "What's your name ? ";
    cin >> str;
    cout << "Hello, " << str << "!" << endl;

    //завдання 3.2
    int int_number;
    double real_number;
    cout << "Enter an integer and a real number: ";
    cin >> int_number >> real_number;
    cout << int_number << " and " << real_number << endl;

    //завдання 3.3
    cout << endl << "  |  " << endl << "  ^  " << endl << " / \\" << endl
        << "/ O \\" << endl << "|   |" << endl << "|   |" << endl
        << "|   |" << endl << "/^|^\\" << endl << " # # "
        << endl << " # # " << endl << " # # " << endl << " # # " << endl;

    //завдання 3.4
    double real_number2;
    cout << endl << "Enter a real number: ";
    cin >> real_number2;
    cout << (int)real_number2 << endl;

    return 0;
}
