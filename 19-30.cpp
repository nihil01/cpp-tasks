//Решения задач с 19 по 30
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

/*
    19) Запишите в виде инструкции присваивания формулу вычисления площади треугольника: 
    s = 1/2ah, где а — длина основа
    ния; h — высота треугольника.
*/

class Triangle{

    public:double static calculateArea(double a, double h){
        return (double)1/2 *(a * h);   
    }

};

// int main(){
//     double area = Triangle::calculateArea(23.230, 99.123);
//     cout << "Площадь треугольника равна: " << area << endl;
// }


/*
    20) Запишите в виде инструкции присваивания формулу вычисления
    (а+b)/2 * h
    ления площади трапеции: s = - •h, где а и b — длины оснований; Л — высота трапеции
*/

class Trapezoid{

    public:double static calculateArea(double a, double b, double h){
        return (a + b) / 2 * h;
    }


};

// int main(){
//     double area = Trapezoid::calculateArea(2.230, 99.123, 29);
//     cout << "Площадь трапеции равна: " << area << endl;
// }


/*
    21) Запишите в виде инструкции присваивания формулу вычис­
    ления площади круга:
    s= p*r^2
*/
class Circle{

    public:double calculateArea(double radius){
        //использование константы и функции из библиотеки cmath.
        return M_PI * pow(radius, 2);
    }

};

// int main(){
//     Circle circle;
//     double area = circle.calculateArea(24);

//     cout << "Площадь круга равна: " << area << endl;
// }


/*
   22) Запишите в виде инструкции присваивания формулы вы­числения площади поверхности и объема цилиндра.
    S = 2*p*r*(h + r); V = p*r^*h
*/

class Cylinder{


    public:double calculateArea(double radius, double height){

         return 2 * M_PI * radius * (height + radius);

    }

    public:double calculateVolume(double radius, double height){
        return M_PI * pow(radius, 2) * height;
    }

    //для 26 задачи
    public:double static calculateVolume(double radius1, double radius2, double height){
        return M_PI * height * (pow(radius1, 2) - pow(radius2, 2));
    }

};



// int main(){
//     Cylinder cylinder;

//     double height, radius;

//     cout << "Введите значение для высоты:" << "\n";
//     cin >> height;
    
//     cout << "Введите значение для радиуса:" << "\n";
//     cin >> radius;

//     double area = cylinder.calculateArea(radius, height);
//     double vol = cylinder.calculateVolume(radius, height);

//     cout << "Площадь цилиндра равна: " << area << " ;Объём равен: " << vol << endl;
// }



/*
    23) Запишите в виде инструкции присваивания формулу вычис­ления объема параллелепипеда.
*/

class Parallelepiped{

    public:double static calculateVolume(double a, double b, double h){
        return a * b * h;
    }

};

// int main(){
//     double height, length1, length2;

//     cout << "Введите значение для длины:" << "\n";
//     cin >> length1;

//     cout << "Введите значение для ширины:" << "\n";
//     cin >> length2;
    
//     cout << "Введите значение для высоты:" << "\n";
//     cin >> height;

//     double area = Parallelepiped::calculateVolume(length1, length2, height);

//     cout << "Площадь параллелепипеда равна: " << area << endl;
// }



/*
    24. Объявите необходимые переменные и запишите в виде ин­
    струкции присваивания формулы вычисления объема и площади
    поверхности шара.

    V = 3/4 * p * r ^3;
    S = 4 * p * r ^ 2;

*/

class Sphere{

    private:double radius;

    public:Sphere(double radius){
        this->radius = radius;
    }

    public: double calculateVolume(){
        return (double)3/4 * M_PI * pow(this->radius, 3);
    }

    public:double calculateArea(){
        return 4 * M_PI * pow(this->radius, 2);
    }

};

// int main(){
//     double radius;
//     cout << "Введите значение для радиуса: " <<endl;
//     cin >> radius;

//     Sphere sphere(radius);

//     cout << "Площадь сферы: " << sphere.calculateArea() << " Объём сферы: " << sphere.calculateVolume() << endl;

// }



/*
    25 . Объём цилиндра (пропуск)
*/


/*
    26 . Объём полого цилиндра

    V = p * h * (r1^2 - r2^2)

*/

// int main(){

//     cout << "Объём полого цилиндра равен: " << Cylinder::calculateVolume(10, 20, 30);

// }


/*

    27. Запишите в виде инструкции присваивания формулу вычис­ления объема конуса.

    S = 1/3 * p * r^2 * h;

*/

class Cone{

    public:double static calculateArea(double radius, double height){
        return (double) 1/3 * M_PI * pow(radius, 2) * height;
    }

};

// int main(){
//     double radius, height;

//     cout << "Введите значения для радиуса и высоты конуса соответственно: " << endl;
//     cin >> radius;
//     cin >> height;

//     cout << "ОТВЕТ: " << Cone::calculateArea(radius, height);


// }


/*
    28. Запишите в виде инструкции присваивания формулу вычис­
    ления объема цилиндра (пропуск)
*/


/*

    29. Запишите в виде инструкции присваивания формулу вычис­ления тока,
     по известным значениям напряжения и сопротивле­ния электрической цепи.

     I = U / R;
*/

class Current{

    public:double calculate(double voltage, double resistance){
        return voltage / resistance;
    }


    //31 задача
    public:double static calculateCommonResistanceForNResistors(vector<int> resistors){
        double sum;

        for (double resistor: resistors) {
            sum += 1/resistor;
        };

        return sum;
    }

};

// int main(){

//     Current current;
//     double v, r;

//     cout << "Введите значение для напряжения в цепи: " << endl;
//     cin >> v;
//     cout << "Введите значение для сопротивления в цепи: " << endl;
//     cin >> r;

//     cout << "Текущая сила тока равна: " << current.calculate(v, r);

// }


/*
    30. Идентична здаче №29 (пропуск);
*/


/*
    31. Запишите в виде инструкции присваивания формулу вычис­
    ления сопротивления электрической цепи, состоящей из трех
    последовательно соединенных резисторов.
*/

// int main(){

//     double resistance = Current::calculateCommonResistanceForNResistors({10, 20, 30, 40});
//     printf("Значение общего сопротивления для списка резисторов равно: %.2f Ом\n", resistance);

// }

