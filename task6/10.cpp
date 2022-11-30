#include <iostream>
#include <fstream>

int modificate(int num) {
    return num / 2;
}

void hello() {
    std::string text;
    text = "Hello C++";
    std::cout << text <<std::endl;
}

void user() {
    std::string name;
    std::cout << "What's your name? "; std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
}

int max(int a, int b) {
    return a > b ? a : b;
}

void to_file() {
    std::string str;
    int* arr = new int[5];
    std::cout <<std::endl << "Enter 5 numbers to array: "; 

    std::ofstream file_out;
    file_out.open("array.txt");
    for (int i = 0; i < 5; i++) {
        std::cin >> arr[i];
        std::cout << arr[i] << " ";
        file_out << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 5; --i >= 0;) {
        std::cout << arr[i] << ' ';
    }

    file_out.close();
    delete[]arr;
}

void bubble(int* arr, int size) {
    int temp = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }    
    }
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
} 

void Merge(int* A, int first, int last) {
    int middle, start, final, j;
    int* mas = new int[100];
    middle = (first + last) / 2;  //середнiй елемент
    start = first;                //початок left частини
    final = middle + 1;           //початок right частини
    for (j = first; j <= last; j++)
        if ((start <= middle) && ((final > last) || (A[start] < A[final]))) {
            mas[j] = A[start];
            start++;
        }
        else {
            mas[j] = A[final];
            final++;
        }

    for (j = first; j <= last; j++)
        A[j] = mas[j];
    delete[] mas;
};
//рекурсивна процедура cортування
void MergeSort(int* A, int first, int last) {
    if (first < last) {
        MergeSort(A, first, (first + last) / 2);  //сортування left частини
        MergeSort(A, (first + last) / 2 + 1, last);  //сортування right частини
        Merge(A, first, last);  //злиття двух частмн
    }
}



void swap(int B[], int pos1, int pos2) { //для quick sort
    int temp;
    temp = B[pos1];
    B[pos1] = B[pos2];
    B[pos2] = temp;
}

int partition(int B[], int low, int high, int pivot) { //для quick sort
    int i = low;
    int j = low;
    while (i <= high) {
        if (B[i] > pivot) {
            i++;
        }
        else {
            swap(B, i, j);
            i++;
            j++;
        }
    }
    return j - 1;
}

void quickSort(int B[], int low, int high) {
    if (low < high) {
        int pivot = B[high];
        int pos = partition(B, low, high, pivot);

        quickSort(B, low, pos - 1);
        quickSort(B, pos + 1, high);
    }
}

void min() {
    int limit, input;
    int sum = 0;
    std::cout << std::endl << "Please Enter the limit: "; std::cin >> limit;
    int min = 0;
    std::cout << "Enter values for find minimum: ";
    for (int i = 0; i < limit; i++){
        std::cin >> input;
        if (i == 0) {
            min = input;
        }
        else{
            if (input < min)
                min = input;
        }
    }
    std::cout << "Min: " << min << std::endl;
}

void twinks(int number) {
    if (number % 2 == 0) { std::cout << "true"; }
    else { std::cout << "false"; }
}
void twinks(std::string text) {
    if (text.length() % 2 == 0) {
        std::cout << "true";
    }
    else { std::cout << "false"; }
}


int main()
{
    int num;
    std::cout << "Enter number: "; std::cin >> num;
    modificate(num);  //завдання 1
    hello(); //задання 2
    user(); //задання 3

    int a, b;
    std::cout << "Enter numbers a and b: "; std::cin >> a >> b;
    max(a,b); //завданя 4
    to_file(); //завдання 5

    int size; //завдання 6 
    std::cout << std::endl << "Enter array size: "; std::cin >> size;
    int* arr = new int[size];
    std::cout << "Enter the random numbers to fill array(bubble sort): " << size << " numbers need!\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    bubble(arr, size);
    delete[]arr;
    //------------------------
    int n = { 30 };
    int* A = new int[n];
    std::cout<< std::endl << "Enter size array(merge): ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cout << i << " element array: ";
        std::cin >> A[i];
    }
    MergeSort(A, 1, n); 
    for (int i = 1; i <= n; i++)
        std::cout << A[i] << " ";
    delete[] A;
    //------------------------
    int* B = new int[n];
    std::cout << std::endl << "Enter size of array(quick): ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << i << " element array: ";
        std::cin >> B[i];
    }
    quickSort(B, 0, n - 1);
    for (int i = 0; i < n; i++) {
        std::cout << B[i] << " ";
    }
    delete[] B;

    min(); //завдання 7
    int number;//завдання 8
    std::string text;
    std::cout << std::endl << "Enter number: "; std::cin >> number;
    twinks(number);
    std::cout << std::endl << "Enter something text: ";
    std::cin >> text;
    twinks(text);
    return 0;
}