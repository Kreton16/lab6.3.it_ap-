#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

int Minimum(int* a, const int size) {
    int min = a[0];
    for (int i = 0; i < size; i++) {
        if (min > a[i])
            min = a[i];
    }
    return min;
}

void Create(int* c, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
}

void Print(int* c, const int size)
{
    for (int i = 0; i < size; i++)
        cout << c[i] << " ";
    cout << endl;
}

template <typename Q>
Q Minimum_sh(Q* a, Q size, Q min) {
    for (int i = 0; i < size; i++) {
        if (min > a[i])
            min = a[i];
    }
    return min;
}
template <typename W>
W Create_sh(W* c, W size, W Low, W High)
{
    for (int i = 0; i < size; i++)
        c[i] = Low + rand() % (High - Low + 1);
    return 0;
}

template <typename E>
E Print_sh(E* c, E size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << c[i];
    cout << endl;
    return 0;
}


int main()
{
    srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
    const int n = 21;
    int a[n];
    int Low = 15;
    int High = 85;
    Create_sh(a, n, Low, High);
    int min = a[0];
    Print_sh(a, n);
    cout << endl;
    int mini = Minimum(a, n);
    cout << "Minimum: ";
    cout << min << endl;

    return 0;

}