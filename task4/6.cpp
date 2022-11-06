#include <iostream>

void age(int g) {
    if (g > 11) std::cout << "Access" << std::endl;
    else std::cout << "Deny";
}
void buy(int b, double m) {
    if (b > 17 && m > 49) std::cout << "Can buy" << std::endl;
    else std::cout << "Can not buy";
}
void carta(double c, double cc) {
    if (c > 80 || cc > 80) std::cout << "Can buy" << std::endl;
    else std::cout << "Can not buy";
}
void triangle(int t, int tt, int ttt) {
    double p;
    double s;
    p = (t + tt + ttt) / 2;
    s = sqrt(p * (p - t) * (p - tt) * (p - ttt));
    if (s > 0) std::cout << "It is  triangle!" << std::endl;
    else std::cout << "It is not a triangle!";
}
void number(int no) {
    if(no > 0) std::cout << no << " is positive!" << std::endl;
    else if( no < 0) std::cout << no << " is negative!" << std::endl;
    else std::cout << no << " is zero!" << std::endl;
}

void month(int n) {
    if (n <= 0 || n > 12) std::cout << "There is no such month!" << std::endl;
        switch (n) {
        case 1: {
            std::cout << "January" << std::endl;
        }
              break;
        case 2: {
            std::cout << "February" << std::endl;
        }
              break;
        case 3: {
            std::cout << "March" << std::endl;
        }
              break;
        case 4: {
            std::cout << "April" << std::endl;
        }
              break;
        case 5: {
            std::cout << "May" << std::endl;
        }
              break;
        case 6: {
            std::cout << "June" << std::endl;
        }
              break;
        case 7: {
            std::cout << "July" << std::endl;
        }
              break;
        case 8: {
            std::cout << "August" << std::endl;
        }
              break;
        case 9: {
            std::cout << "September" << std::endl;
        }
              break;
        case 10: {
            std::cout << "October" << std::endl;
        }
               break;
        case 11: {
            std::cout << "November" << std::endl;
        }
               break;
        case 12: {
            std::cout << "December" << std::endl;
            break;
        }
    }
}

void end(int e) {
    if (e < 0 || e > 12) {
        std::cout << "There is no such month!" << std::endl;
    }
    else {
        switch (e) {
        case 1: {
            std::cout << "1-st" << std::endl;
        }
              break;
        case 2: {
            std::cout << "2-nd" << std::endl;
        }
              break;
        case 3: {
            std::cout << "3-rd" << std::endl;
        }
              break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        {
            std::cout << "-th" << std::endl;
        }
        break;
        }
    }
}

int main(){
    //завдання 1
    int g, b, t, tt, ttt, no{} , n, e;
    double m, c, cc;
    std::cout << "Enter your age: " << std::endl;
    std::cin >> g;
    age(g);

    //завдання 2
    std::cout << std::endl << std::endl << "Enter your age: "<< std::endl;
    std::cin >> b;
    std::cout << "Enter your money: ";
    std::cin >> m;
    buy(b,m);

    //завдання 3
    std::cout << std::endl << std::endl << "Enter your cash money: " << std::endl;
    std::cin >> c;
    std::cout << "Enter your money on card: ";
    std::cin >> cc;
    carta(c,cc);

    //завдання 4
    std::cout << std::endl << std::endl << "Enter A: ";
    std::cin >> t;
    std::cout << "Enter B: ";
    std::cin >> tt;
    std::cout << "Enter C: ";
    std::cin >> ttt;
    triangle(t,tt,ttt);

    //завдання 5
    std::cout << std::endl << std::endl << "Enter a number: " << std::endl;
    std::cin >> no;
    number(no);

    //завдання 6
    std::cout << std::endl << "Enter a number month from 1 to 12: " << std::endl;
    std::cin >> n;
    month(n);

    //завдання 7
    std::cout << std::endl << "Number: " << std::endl;
    std::cin >> e;
    end(e);

    return 0;
}

