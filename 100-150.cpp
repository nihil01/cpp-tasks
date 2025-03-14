
#include <cstdio>
#include <string>
#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>

using namespace std;


class City{

    private: 
        string name;
        int code;
        double price;


    public: City(string name, int code, double price){
        this->code = code;
        this->name = name;
        this->price = price;
    }

    public: int getCode(){
        return this->code;
    }

    public: double getPrice(){
        return this->price;
    }


};


class Codes{

    /*
    
        Написать профамму, которая вычисляет стоимость междуго­
        родного телефонного разговора (цена одной минуты определяется
        расстоянием до города, в котором находится абонент). Исходны­
        ми данными для профаммы являются код города и длительность
        разговора. Ниже приведены коды некоторых городов и рекомен­
        дуемый вид экрана во время работы профаммы (данные, введен­
        ные пользователем, вьщелены полужирным шрифтом).

    */
    public:static void calculateCostPerMinute(){

        //init
            vector<City> cities;

            City vladivostok("Vladivostok", 423, 2.2);
            City moskva("Moskva", 95, 1.0);
            City murmansk("Murmansk", 815, 1.2);
            City samara("Samara", 846, 1.4);
            
            cities.push_back(vladivostok);
            cities.push_back(moskva);
            cities.push_back(murmansk);
            cities.push_back(samara);

            
            //user input
            int cityCode, duration;

            cout << "Vvedite kod goroda";
            cin >> cityCode;

            for (City city : cities) {
            
                if (city.getCode() == cityCode) {
                    int minutes;
                    cout << "Kol-vo minut razgovora??";
                    cin >> minutes;

                    cout << "Toplam: " << minutes * city.getPrice() << " rub";
                    exit(0);
                }


            }

            cout << "gorod v kotorom menya net....";
        };


        /*
        
            Напишите программу, которая по дате определяет день не­
            дели, на который эта дата приходится. Для вычисления дня не­
            дели воспользуйтесь формулой:

        */

        public:static void calculationDayOfWeek(){
            int day, month, year;
            struct tm timeStruct;
            time_t timestamp;
            

            cout << "Введите дату в формате (дд.мм.год), я определю для неё день недели, на который она приходится :) " << endl;
            scanf("%d.%d.%d", &day, &month, &year);

            timeStruct.tm_mday = day;
            timeStruct.tm_mon = month;
            timeStruct.tm_year = year;

            timestamp = mktime(&timeStruct);
            cout << "Vibrannaya data=> " << ctime(&timestamp);

            //formula
            int res = ((day + (int)(1/5 * (13*month - 1)) + year + (int)(year / 4) + ((int) year / 100)/4) - 2*(int) year / 100 + 777) % 7;
            cout << "Den => " << res << endl;

        };


        /*
        
            Написать программу, которая выводит таблицу квадратов
            первых десяти целых положительных чисел. Ниже приведен ре­
            комендуемый вид экрана во время работы программы.

        */

        public:static void squaretable(int size){

            cout<< "Число   Квадрат\n"<< "-----------------\n";

            for (int i = 1; i < size; ++i) {
                cout <<i << "   " << pow(i, 2) << endl;
            }

            cout << "-----------------\n";
        }

        //сумма четных чисел
        public:static void evenSum(int size){

            int sum = 0;

            for(int i = 0; i < size; ++i){

                if (i % 2 == 0) {
                
                    sum += i;

                }

            }

            cout << "сумма введенных четных чисел равна: " << sum << endl;

        }

        //факториал
        public:static int factorial(int num){

            if (num != 1) {
                 return num *  factorial(num - 1);
            }

            return 1;
        }


        /*
            Написать программу, которая выводит таблицу значений
            функции у = -2,4X2+5JC-3 В диапазоне от ~2 до 2, с шагом 0,5.
            Ниже приведен рекомендуемый вид экрана во время работы
            программы.
        */

        public: static void showTableValues(){
            #define LB = -2.0;
            #define DX = 0.5;
            #define HB = 2.0;

            // float х,у;
            // int a;
            // int i;

            // a = (HB - LB)/DX +1;
            // x = LB;

            // printf ("
            // \n");
            // printf ("
            // \n") ;
            // for (i = 1; i<=n; i++)
            // {
            // у = -2.4*x*x+5*x-3;
            // printf("%6.2f j %6.2f\n" ,K ,y);
            // X += DX;
            // }
            // printf ("
            // \n") ;

            
        }

    };

    


int main(){
    // int sum = 0, size = 0;

    // for (int i = 0; i < 5; ++i) {
        
    //     int number;
    //     cin >> number;

    //     sum += number;
    //     size ++;

    //     printf("Введено чисел %d ;сумма %d ;среднее арифметическое %d", size, sum, sum/size);

    // }



    


    return 0;
}