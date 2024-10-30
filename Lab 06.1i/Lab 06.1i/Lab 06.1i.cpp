#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// Функція створення масиву
void Create(int* a, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

// Функція виведення масиву
void Print(int* a, const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

// Функція підрахунку кількості та суми елементів, що відповідають критерію
void ProcessElements(int* a, const int size, int& count, int& sum) {
    count = 0;
    sum = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] > 0 || a[i] % 2 != 0) {
            count++;
            sum += a[i];
            a[i] = 0; // замінюємо елементи, що відповідають критерію, на нулі
        }
    }
}

int main() {
    srand((unsigned)time(0)); // ініціалізація генератора випадкових чисел

    const int n = 27;
    int a[n];
    int Low = -35, High = 25;

    // Створюємо масив
    Create(a, n, Low, High);

    // Виводимо початковий масив
    cout << "Original array:" << endl;
    Print(a, n);

    // Підраховуємо кількість та суму елементів, що відповідають критерію
    int count, sum;
    ProcessElements(a, n, count, sum);

    // Виводимо результати
    cout << "\nCount of elements matching the criteria: " << count << endl;
    cout << "Sum of elements matching the criteria: " << sum << endl;

    // Виводимо модифікований масив
    cout << "\nModified array:" << endl;
    Print(a, n);

    return 0;
}
