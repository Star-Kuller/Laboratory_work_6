#include <iostream>
#include <Windows.h>
#include "Double.h" // К заданию 1
#include "employee.h" // К заданиям 2 и 5
#include "date.h" // К заданию 3
#include "time.h" // К заданию 4

using namespace std;

void N_1();
void N_2();
void N_3();
void N_4();
void N_5();

template <typename T>
void pushBack(T*& arr, int& size, T newValue) { // увеличивает размер динамического массива на 1 ячейку и вносит в него новые данные, инкрементирует size
    T* newArr = new T[size + 1];
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    newArr[size] = newValue;
    size++;
    delete[] arr;

    arr = newArr;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int selected;
    while (true) { //селектор заданий
        cout << "\033[2J\033[1;1H";
        cout << ">--------------------[Главное меню]--------------------<\n";
        cout << "0 - Завершить работу\n1,2,3,4,5 - доступные задания\n";
        cout << "--------------------------------------------------------\n";
        cout << "Выберите задание или 0: "; cin >> selected;
        switch (selected)
        {
        case 0:
            return 0;
            break;
        case 1:
            N_1();
            break;
        case 2:
            N_2();
            break;
        case 3:
            N_3();
            break;
        case 4:
            N_4();
            break;
        case 5:
            N_5();
            break;
        default:
            break;
        }
    }
    return 0;
}

void N_1()
{
	cout << "\033[2J\033[1;1H";
    cout << ">----------------[Начало выполнения N_1]----------------<\n";
	Double a, b, c;
    char mode;
    cout << "Введите переменную A: ";
    a.set();
    cout << "Введите переменную B: ";
    b.set();
    do {
        cout << "Выберите действие (+|-|/|*): ";
        cin >> mode;
        if (!((mode == '+') | (mode == '-') | (mode == '/') | (mode == '*'))) {
            cout << "[Ошибка]: Действие не поддерживается!\n";
        }
    } while (!((mode == '+') | (mode == '-') | (mode == '/') | (mode == '*')));
    switch (mode) {
    case'+':
        c = a + b;
        break;
    case'-':
        c = a - b;
        break;
    case'/':
        c = a / b;
        break;
    case'*':
        c = a * b;
        break;
    default:
        break;
    }
    cout << "--------------------------------------------------------\n";
    cout << "Результат: A " << mode << " B = ";
	c.show();
    cout << "\n--------------------------------------------------------\n";
    cout << "Присваивание переменной ответа 0";
    c.reset();
    cout << "\n--------------------------------------------------------\n";
    cout << "Результат: ";
    c.show();
    cout << "\n>----------------[Конец выполнения N_1]----------------<\n";
    system("pause");
    return;
}

void N_2()
{
    cout << "\033[2J\033[1;1H";
    cout << ">----------------[Начало выполнения N_2]----------------<\n";
    int size = 0;
    char dummychar;
    employee* employeeArr = new employee[size];
    employee temp;
    do {
        cout << "Введите номер сотрудника и его оклад в формате \"[номер]:[оклад]\" или 0x0 чтобы вывести данные: ";
        dummychar = temp.set();
        if (!((dummychar == 'х') | (dummychar == 'Х') | (dummychar == 'x') | (dummychar == 'X'))) {
            pushBack(employeeArr, size, temp);
        }
    } while (!((dummychar == 'х') | (dummychar == 'Х') | (dummychar == 'x') | (dummychar == 'X')));
    cout << "--------------------------------------------------------\n";
    for (int i = 0; i < size; i++)
    {
        employeeArr[i].show();
    }
    cout << "\n>----------------[Конец выполнения N_2]----------------<\n";
    system("pause");
    delete[] employeeArr;
    return;
}

void N_3()
{
    cout << "\033[2J\033[1;1H";
    cout << ">----------------[Начало выполнения N_3]----------------<\n";
    date d;
    cout << "Введите дату в формате \"12/31/22\": ";
    d.getdate();
    cout << "--------------------------------------------------------\n";
    cout << "Вы ввели ";
    d.showdate();
    cout << "\n>----------------[Конец выполнения N_3]----------------<\n";
    system("pause");
    return;
}

void N_4()
{
    cout << "\033[2J\033[1;1H";
    cout << ">----------------[Начало выполнения N_4]----------------<\n";
    const Time t1 = Time(8,58,50);
    const Time t2 = Time(12, 23, 17);
    cout << "t1 инициализирован значинием: 8:58:50\n";
    cout << "t2 инициализирован значинием: 12:23:17\n";
    cout << "--------------------------------------------------------\n";
    Time t3;
    t3 = t3.sum(t1, t2);
    cout << "t1 + t2 = t3 = ";
    t3.display();
    cout << "\n>----------------[Конец выполнения N_4]----------------<\n";
    system("pause");
    return;
}

void N_5()
{
    cout << "\033[2J\033[1;1H";
    cout << ">----------------[Начало выполнения N_5]----------------<\n";
    int size = 0;
    char dummychar;
    employee* employeeArr = new employee[size];
    employee temp;
    do {
        dummychar = temp.getemploy();
        if (!((dummychar == 'х') | (dummychar == 'Х') | (dummychar == 'x') | (dummychar == 'X'))) {
            pushBack(employeeArr, size, temp);
        }
        cout << "\n";
    } while (!((dummychar == 'х') | (dummychar == 'Х') | (dummychar == 'x') | (dummychar == 'X')));
    cout << "--------------------------------------------------------\n";
    for (int i = 0; i < size; i++)
    {
        employeeArr[i].putemploy();
        cout << "\n\n";
    }
    cout << "\n>----------------[Конец выполнения N_5]----------------<\n";
    system("pause");
    return;
}