//програма знаходить в масиві значення, які повторюються 2 та більше разів та виводить їх на екран
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>


using namespace std;
// отримання дескриптора консолі для зміни його властивостей
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
    SetConsoleTextAttribute(console, 13);                //для зміни тексту який виводиться в консолі.
    cout << "Program finds the elements in the array, repeated two or more times, and displays them on the screen\n\n";

    int n = 0;
    //ініціалізація змінної "n", якій присвоєно нуль
    {
        cout << "Enter the number of array elements -> ";
        cin >> n;                // вводимо розміp змінної "n"
    }while (n < 1 || n>100);                // інтервал, яке можливо ввести для змінної "n"
    int* Ar = new int[n];
    SetConsoleTextAttribute(console, 3);             //для зміни тексту який виводиться в консолі.
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number #" << i + 1 << " -> ";
        cin >> Ar[i];
    }
    SetConsoleTextAttribute(console, 10);       //для зміни тексту який виводиться в консолі.
    cout << "\n" << "Array is ready!\n";
    SetConsoleTextAttribute(console, 14);       //для зміни тексту який виводиться в консолі.
    cout << "\nRepeated numbers:\n  ";

    // i та j різні індекси одного масива, для порівняння різних елементів масиву між собою

    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            //перевірка на повторення елементів.
            if (Ar[i] == Ar[j]) 
            {
                //робимо перевірку елементів для того, щоб вони не виводилися в консоль більше одного разу.
                int wasBefore = 0;
                for (int k = 0; k < i; k++) {
                    if (Ar[k] == Ar[i]) {
                        wasBefore = 1;
                        break;
                    }
                }
                if (wasBefore == 0) {
                    cout << setw(2)<< "[" << Ar[i] << "]";
                }
                break;
                
            }
        }
    }
    _getch();
    return 0;
}
       



