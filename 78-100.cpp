#include <cstdio>
#include <exception>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <cmath>
#include <type_traits>



bool isLeapYear(int year){
    return year % 4 == 0 && year % 100 != 0;
}

enum Current{
    SERIES,
    PARALLEL
};

float calculateCurrent(Current current, float res1, float res2){
 
    switch (current) {
    
        case SERIES:
            return res1 + res2;

        case PARALLEL:
            return 1/(1/res1 + 1/res2);
    }

}


int main(){

    //#77
    // Ввод данных

    float firstVar, secondVar;
    std::cout << "Enter variables, pls ... " << std::endl;

    scanf("%f %f", &firstVar, &secondVar);

    printf("Provided values are %f and %f", firstVar, secondVar);

    try{

        if (secondVar == 0) {
            throw std::runtime_error("Деление на ноль не разрешено!");
        }

        std::cout << "Answer is: " << firstVar / secondVar;

    }catch(const std::exception& exc){
        std::cout << exc.what();
    }

    //#78
    //Вычисление площади кольца:
        // std::cout << "Enter variables for calculating the area of a ring... " << std::endl;
        // float innerRadius, outerRadius;

        // scanf("%f %f", &innerRadius, &outerRadius);

        // printf("Provided values are %f and %f\n", innerRadius, outerRadius);

        // try{

        //     if (innerRadius > outerRadius) {
        //         throw std::runtime_error("Inner radius cannot be more than outer. Are u crazy ?1?!1");
        //     }

        //     std::cout << "Answer is: " << round(M_PI * (outerRadius - innerRadius));

        // }catch(const std::exception& exc){
        //     std::cout << exc.what();
        // }

    //#79
    //Обнаружение ошибок в вводе пользователя
    // std::cout << "Enter variables (min - to sec)... " << std::endl;
    //     float time;

    //     scanf("%f", &time);

    //     printf("Provided values is %f\n", time);

    //     try{

    //        int minutes = time;
    //        int seconds = (time * 100) - (minutes * 100);

    //        if (seconds > 60) {
    //             throw std::runtime_error("Bad value for seconds !!");
    //        }

    //        printf("You provided %d minutes and %d secs", minutes, seconds);

    //     }catch(const std::exception& exc){
    //         std::cout << exc.what();
    //     }

    // return 0;

    //#80
    // Определение високосного года

    int year;
    std::cout << "Введите год, определим, високосный ли он или нет ...\n";
    
    if (!(std::cin >> year)) {
        std::cout << "Invalid input!";
    }else{
        std::cout << (isLeapYear(year) ? "This is a leap year" : "Not a leap year :(") << std::endl;
    }

    //#81
    //Вычисление сопротивления электрической цепи
    float res1, res2;
    int type;
    std::cout << "Вычисление сопротивления эл. цепи: " <<std::endl;
    std::cout << "Введите исходные данные" << std::endl;

    std::cout << "Вычисление первого сопротивления: ";
    std::cin >> res1;

    std::cout << "Вычисление второго сопротивления: ";
    std::cin >> res2;

    std::cout << "Тип соединения (0 - последовательное, 1 - параллельное): ";
    std::cin >> type;

    if (type == 0) {
        std::cout << "Общее сопротивление: " << calculateCurrent(SERIES, res1, res2);

    }
    else if (type == 1) {
        std::cout << "Общее сопротивление: " << calculateCurrent(PARALLEL, res1, res2);
        

    }else{
        std::cout << "Я не знаю ...";

    }

    //#82 
    //Решение квадратного уравнения

    
}



