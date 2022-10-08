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

/*Даны три точки A, B, C на оси OXY.
Найти периметр треугольника, построенного по этим точкам.
Результат вывести с точностью до трех знаков после запятой.*/

double dlinna_otrezka(double p1x, double p1y, double p1z, double p2x,
                      double p2y, double p2z )
{
    return sqrt(pow(p1x - p2x, 2)+ pow(p1y - p2y, 2)+ pow(p1z - p2z, 2));
}

int zadacha_5()
{
    double ax, ay, az = 0, bx, by, bz = 0, cx, cy, cz = 0;
    double perimetor;
  
    cout << "Enter Ax: ";
    cin >> ax;
    cout << "Enter Ay: ";
    cin >> ay;
    
    cout << "Enter Bx: ";
    cin >> bx;
    cout << "Enter By: ";
    cin >> by;
    
    cout << "Enter Cx: ";
    cin >> cx;
    cout << "Enter Cy: ";
    cin >> cy;
    
    perimetor = dlinna_otrezka(ax, ay, az, bx, by, bz)
                 + dlinna_otrezka(bx, by, bz, cx, cy, cz)
                 + dlinna_otrezka(cx, cy, cz, ax, ay, az);
    cout << round(perimetor*1000)/1000 << std::endl;
    return 0;
}

/*Даны три целых числа: A, B, C.
Проверить истинность высказывания A < B < C.
Если верное - вывести 1, иначе - 0.*/

int zadacha_6()
{
    int a, b, c;
    
    cout << "Enter A: ";
    cin >> a;
    
    cout << "Enter B: ";
    cin >> b;
    
    cout << "Enter C: ";
    cin >> c;
    
    if ( a < b && b < c) cout << 1 << endl;
    else cout << 0 << endl;
    
    return 0;
}

/*Даны целые числа a, b, c.
Проверить, существует ли треугольник со сторонами a, b, c.
Если существует - вывести 1, иначе - 0.*/

int zadacha_7()
{
    int a, b, c;
    
    cout << "Enter a, b и c: ";
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0) {
        if ((a < b + c) and (b < a + c) and (c < a + b)) {
            cout << 1;
        }
        else {
            cout << 0;
        }
    }
    else {
        cout << 0;
    }
    return 0;
}

/*Даны целые числа a, b, c.
Проверить, существует ли треугольник со сторонами a, b, c.
Если существует - вывести 1, иначе - 0.*/

int zadacha_8()
{
    int a, b, sum = 0;
    
    cout << "Enter a, b" << endl;
    cin >> a >> b;
    for (int i = a; i < b + 1; i++)
        {
            sum += i;
        }
    cout << "Sum of all integers from A to B inclusive = " << sum <<endl;
    return 0;
}

/*Дано целое число N (>0). Найти сумму
 N*2 + (N + 1)*2 + (N + 2)*2 + . . . + (2*N)*2 (целое число).*/

int zadacha_9()
{
    int n, i;
    float sum = 0;
    
    cout << "Enter n: ";
    cin >> n;
    for (i = 0; i <= n; i++) {
            sum += (n+i)*2;
    }
    cout << "Sum N*2 +(N+1)*2 +(N+2)*2 +...+(2*N)*2 = " << sum <<endl;
    return 0;
}

/*Дано целое число N(>0).
Проверить, является ли оно простым.
Если да - вывести 1, иначе – 0*/

int zadacha_10()
{
    int n, i;
    bool isPrime = true;
    cout<<"Enter a N(>0):";
    cin>>n;
    for (i=2; i<=(sqrt(abs(n))); i++){
        if (n%i==0){
        isPrime = false;
        break;
        }
    }
    if(isPrime)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}

/*Дано целое число N(>0).
Найти сумму его простых делителей*/

int zadacha_11()
{
    int prime_number, sum = 1;
    if (scanf("%d", &prime_number) == 0)
    {
        printf("Incorrect input value");
    }
    else
    {
        for (int i = 2;i <= prime_number; i++)
        {
            int count = 0;
            if (prime_number % i == 0)
            {
                for (int j = 2; j <= i - 1; j++)
                {
                    if (i % j == 0)
                    {
                        count += 1;
                        break;
                    }
                }
                if (count == 0)
                {
                    sum += i;
                }
            }
        }
    }
    printf("%i", sum);
    return 0;
}

/*Даны два целых числа A и B (A < B).
Найти сумму всех  чисел кратных 3 и 5 от A до B включительно.*/

int zadacha_12()
{
    int a, b, sum = 0;
    cout << "Enter numbers A and B: ";
    cin >> a >> b;
    while (a <= b)
    {
         if (a % 3 == 0 && a % 5 == 0)
         {
             sum+=a;
         }
         a++;
    }
    cout << sum << endl;
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
    if (number_tasks == 5) {
        zadacha_5();
    }
    if (number_tasks == 6) {
        zadacha_6();
    }
    if (number_tasks == 7) {
        zadacha_7();
    }
    if (number_tasks == 8) {
        zadacha_8();
    }
    if (number_tasks == 9) {
        zadacha_9();
    }
    if (number_tasks == 10) {
        zadacha_10();
    }
    if (number_tasks == 11) {
        zadacha_11();
    }
    if (number_tasks == 12) {
        zadacha_12();
    }
    
}
