#include <iostream>
#include <math.h>
#define M_PI 3.14159265358979323846

void sum(int x, int y){
    std::cout << x << " + " << y << " = " << x + y << std::endl;
}
void minus(int x, int y){
    std::cout << x << " - " << y << " = " << x - y << std::endl;
}
void umnos(int x, int y){
    std::cout << x << " * " << y << " = " << x * y << std::endl;
}
void deli(int x, int y){
    std::cout << x << " / " << y << " = " << x / y << std::endl;
}
void ost(int x, int y){
    std::cout << x << " % " << y << " = " << x % y << std::endl;
}
void program() {
    int x = 12;
    double si;
    si = x + (sin(x) / (x + 5)) - (14 * cos(x)) + pow(x, 2);
    std::cout << std::endl << "result = " << si << std::endl;
}
void perimetr(double buf, double buf2, double buf3) {
    double sum;
    sum = buf + buf2 + buf3;
    std::cout << "Perimetr = " << sum << std::endl;

}
void square(double a){
    double kvadrat;
    kvadrat = a * 2;
    std::cout << "Square = " << (int)kvadrat << std::endl;
}
void radius(double r) {
    double rada;
    rada = M_PI * pow(r,2);
    std::cout << "Circle length = " << rada << std::endl;
}


int main(){
    //завдання 1...
    int x, y; 
    double buf, buf2, buf3, a, r;

    std::cout << "Enter x y: " << std::endl;
    std::cin >> x >> y;
    sum(x,y); 
    minus(x, y);
    umnos(x, y);
    deli(x, y);
    ost(x, y);

    //завдання 2
    program(); 

    //завдання 3
    std::cout << std::endl << "x = ";
    std::cin >> buf;
    std::cout << "y = ";
    std::cin >> buf2;
    std::cout << "z = ";
    std::cin >> buf3;
    perimetr(buf,buf2,buf3); 

    //завдання 4
    std::cout << std::endl << "Enter side for square: ";
    std::cin >> a;
    square(a);

    //завдання 5
    std::cout << std::endl << "Enter radius: ";
    std::cin >> r;
    radius(r);

    return 0;
}
