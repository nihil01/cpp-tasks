// Задания в одной функции (ввод - вывод)
#include <cstdio>
#include <iostream>
#include <ostream>

using namespace std;

//ВВОД - ВЫВОД (scanf, printf)

// int main(){

// //1
// float a = 4.45678, b = 3.2391, c = 9.88312;


// printf("Число а => %.5f, b => %.5f, c => %.5f", a,b,c);

// //2
// printf("STDIO");

// //3
// printf("Число а => %d, b => %d, c => %d", 10,20,30);

// //44
// printf("\033[30;44mБуря мглою небо кроет,\nВихри снежные крутя.\nТо как зверь она завоет,\nТо заплачет, как дитя.\n\nА. С. Пушкин\033[0m");

// //46
// // float radius;
// // cout << "vvedite radius";

// // scanf("%f", &radius);

// // cout << radius<<endl;

// //47
// int u, r;

// printf("vvedite u , r");
// scanf("%d, %d", &u, &r);
// cout << u << r;
// }



//Программы с линейной структурой
class LinearStructurePrograms{
    
     public:static double parallelogramArea(double base, double height){

        return base * height;

    };

    class Parallelepiped{

        public:
            static double getVolume(double a, double b, double c){

                return a * b * c;

            }

            static double getArea(double a, double b, double c){

                return 2*(a*b + b*c + a*c);

            }

    };

    class Runner{
        const int static transformer = 3600;

        public:
            static double getVelocity(double s, double t){

                return (s/1000) / (t/transformer);

            }
    };

};


int main(){
    //параллелограм - вычисление площади
    // double base, height;
    // cout << "Введите исходные данные: "<<endl;
    // cout << "Длина (sm): ";
    // cin >> height;
    // printf("\033[1;30m%.2f\033[0m\n", height);
    // cout << "Ширина (sm): ";
    // cin >> base;
    // printf("\033[1;30m%.2f\033[0m\n", base);

    // printf("Объём: %.2f куб.см.", LinearStructurePrograms::parallelogramArea(base, height));

    //параллелепипед (S п.п. && Area)
    // double a,b,c;
    // cout << "Введите исходные данные: "<<endl;

    // cout << "Длина (sm): ";
    // cin >> a;
    // printf("\033[1;30m%.2f\033[0m\n", a);

    // cout << "Ширина (sm): ";
    // cin >> b;
    // printf("\033[1;30m%.2f\033[0m\n", b);

    // cout << "Высота (sm): ";
    // cin >> c;
    // printf("\033[1;30m%.2f\033[0m\n", c);

    // printf("S п.п. равна: %.2f куб.см.\n", LinearStructurePrograms::Parallelepiped::getArea(a, b, c));
    // printf("Объём равен: %.2f куб.см.", LinearStructurePrograms::Parallelepiped::getVolume(a, b, c));

    //бегун
//     float distance;
//     float time;
//     cout << "Вычисление скорости бега" << endl;

//     cout << "Введите длину дистанции: " << endl;
//     scanf("%f", &distance);

//     cout << "Введите значение времени (мин.сек.): " << endl;
//     scanf("%f", &time);

//     int minutes = (int) time;
//     int seconds = (time - minutes) * 100;

//     printf("Skorost: %2.2f",LinearStructurePrograms::Runner::getVelocity(distance, (60 * minutes) + seconds));

    //mins to hours
    // int minutes;
    // cout << "Mins: " <<endl;
    // cin >> minutes;

    // printf("%d ч. %d мин.", minutes / 60, minutes % 60);


    //rubles
    // float amount;
    // cout << "Rubles" << endl;

    // cin >> amount;

    // printf("%d rub. %2f kop.", (int)amount, amount * 100 - (int)amount * 100);

    //area of triangle by cords
    // int x1,x2,x3,y1,y2,y3;
    // cout << "Сначала введите x1, x2, x3 potom y1,y2,y3" << endl;

    // cin >> x1;
    // cin >> x2;
    // cin >> x3;
    // cin >> y1;
    // cin >> y2;
    // cin >> y3;

    // cout << (x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1-y2)) / 2;
}