#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <tuple>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;
using std::set;
using std::vector;
using std::tuple;
using std::make_tuple;
using std::pair;
using std::make_pair;




/*
class Cities{
public:
    tuple<bool, string> FindCountry(const string& city) const{
        if(city_and_country.count(city) == 1)
        {

        }
        else if()
        {

        }
        else
        {

        }
    }

private:
    map<string, string> city_and_country;
    set<string> ambigious_cities;
};


*/





int main(){

    /*unsigned char x [10] = {0, 0, 0, 232, 3, 0, 0, 0, 0, 0};
    int* tmp = (int*) &x[3];
    std::cout << *tmp << " ";*/

    int a = 3524;

    int *ptr = &a;


    cout << "a:" << a << " " << &a << " " << sizeof(a) << endl;
    cout << "*ptr:" << *ptr << " " << ptr << endl;

    /*unsigned short s [4] = {35000,80,0,0};

    int* tmp = (int*) &s[0];
    cout << * tmp << " ";
*/


   /* tuple<int, string, bool> t (5, "tuple", true);     // кортеж с заполненным конструктором поумолчанию
    tuple t_new (5, "tuple", true);                    // с С++17 можно не указывать типы в <>, язык сам поймет

    auto tt = make_tuple(7, "tupppppple", false);      // создание кортежа через make_tuple
    // tuple<int, string, bool> tt == auto tt
    cout << get<1>(tt) << " ";                      // получить <первый> элемент кортежа tt - обращение

    pair<int, string> p (7, "pair");        // создание пары (частный случай tuple)
    pair pp (7, "string");                  // c C++17, не указываем тип в <>

    auto ppp = make_pair(7, "C++");         // создание пары через make_pair
    cout << p.first << " " << p.second << " ";         // вывод значений пары



    map<int, string> mm = {{5, "string"}};  // создаем словарь
    for(const auto& it : mm){
        cout << it.first << " " << it.second << " ";
    }
    *//*тоже самое, что выше, только в новой версии компилятора, можно сразу РАСПАКОВАТЬ ПАРУ в 2 переменых key и value*//*
    for(const auto& [key, value] : mm){
        cout << key << " " << value;
    }*/




    return 0;
}