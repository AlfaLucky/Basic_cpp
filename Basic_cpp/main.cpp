#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int zadacha_1()
{
    //Дана сторона квадрата a. Найти его периметр и площадь
    int side_length;
    int number_sides = 4;
    int perimeter;
    int square;
    
    std::cout << "Enter side lenght = ";
    std::cin >> side_length;
    if (side_length <= 0) {
        cout << "There is no such square!" << endl;
        return 0;
    }
    perimeter = side_length * number_sides;
    std::cout << "The perimeter is = " << perimeter << endl;
    square = pow(side_length,2);
    std::cout << "The square is = " << square << endl;
    return 0;
}


//Найти длину окружности L и площадь круга S заданного радиуса. Результат вывести с точностью до двух знаков после запятой
 
// Значение ПИ
const double pi = 3.14;
 
// Возвращает длину окружности радиусом radius
double CircleLenght(double radius)
{
  return 2.0 * pi * radius;
}

// Возвращает площадь окружности радиусом radius
double CircleArea(double radius)
{
  return pi * radius * radius ;
}

int zadacha_2(){
    
    double radius;
   
    std::cout << "Enter radius of circle: ";
    std::cin >> radius;
    if (radius <= 0) {
        cout << "There is no such radius!" << endl;
        return 0;
    }
   
    std::cout << "Lenght of circle = " << round(CircleLenght(radius)*100)/100 << std::endl;
    std::cout << "Area of circle = "   << round(CircleArea(radius)*100)/100 << std::endl;
   
    return 0;
}

//Даны два числа a и b. Найти их среднее арифметическое

// Возвращает среднее арифметическое a и b
double ArithmeticMean(double a, double b)
{
  return (a+b)/2 ;
}

int zadacha_3(){
    
    double a;
    double b;

    std::cout << "Enter a: ";
    std::cin >> a;
    
    std::cout << "Enter b: ";
    std::cin >> b;
    
    std::cout << "Arithmetic Mean = "   << ArithmeticMean(a, b) << std::endl;
    
    return 0;
}

//Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B

int lineinoe(double a, double b, double &x) //задаём функцию
{
    x = -b/a; //линейная функция
    return 1;
}
int zadacha_4()
{
    double a;
    double b;
    double x = 0;
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    double temp = lineinoe(a, b, x); //Применяем функцию
    if (temp <= 1)
        cout << "x = " << x << std::endl;

    return 0;
}

int main()
{
    int number_tasks;
    
    std::cout << "Enter tasks = ";
    std::cin >> number_tasks;
    if (number_tasks == 1) {
        zadacha_1();
    }
    if (number_tasks == 2) {
        zadacha_2();
    }
    if (number_tasks == 3) {
        zadacha_3();
    }
    if (number_tasks == 4) {
        zadacha_4();
    }
    
}
