// pract1_BatuhtinM.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

struct Person
{
    char name[50];
    int age;
};

class Circle {
private:
    double radius;
public:
    double calculateArea() {
        return 3,14* radius * radius;
    }
    void setRadius(double r) {
        if (r > 0)
        {
            radius = r;
        }
        else
        {
            cout << "Радиус не может быть меньше нуля" << endl;
        }
    }
    double getRadius()
    {
        return radius;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    //1
    int sum = 0;
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Массив: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << " " << endl;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Сумма всех элементов массива: " << sum << endl;
    cout << "" << endl;


    //2 
    const int rows = 3;
    const int cols = 4;
    int dvmass[rows][cols] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    cout << "Массив: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << dvmass[i][j];
        }
        cout << " " << endl;
    }
    for (int i = 0; i < rows; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowsum += dvmass[i][j];
        }
        cout << "Сумма строки " << i + 1 << ":" << rowsum << endl;
    }
    cout << "" << endl;


    //3
    Person person1 = { "Иван", 20 };
    cout << "Информация о человеке:" << endl;
    cout << "Имя: " << person1.name << endl;
    cout << "Возраст:" << person1.age << endl;
    cout << "" << endl;


    //4
    Circle circle;
    double a = 0;
    cout << "Введите радиус: " << endl;
    cin >> a;
    circle.setRadius(a);
    cout << "Радиус: " << circle.getRadius() << endl;
    cout << "Площадь: " << circle.calculateArea() << endl;
    return 0;
}


