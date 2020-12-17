#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::numeric_limits;


// ПРАВИЛА ВЫВЕДЕНИЯ ОБЩЕГО ТИПА (КАК ЭТО ДЕЛАЕТ КОМПИЛЯТОР)

// в разных системах тип int имеет разное кол-во байт, имеет смысл писать сразу int32_t, чтобы избежать неявного поведения
// выбирать тип в зависиомсти от задачи

// 1) перед сравнением и арифметическими операциями числа приводятся к общему типу
// 2) все типы меньше int приводятся к int
// 3) из двух типов выбирается бОльший по размеру
// 4) если размер одинаковый, то выбирается беззнаковый

/* Важно
 * 1) следеить за переполнением типов
 * 2) неявные преобразования типов опасны
 * 3) 1 - int, 1u - uint
 *
 * 4) если переменная не принимает отрицательных значений, то нужно ее объявить беззнаковой
 * */


/*
примеры (
int (4 byte) / size_t (4 byte)  - общий тип size_t (тк беззнаковый тип)
int (4 byte) / size_t (8 byte)  - общий тип size_t (тк больший тип)
int32_t + int8_t - общий тип int32_t (int) (тк больший размер)
int8_t * uint8_t - общий тип int (тк оба типа 1 байт, приводятся к типу int и потом операция)
int32_t < uint32_t - общий тип uint32_t (тк беззнаковый)


 добавив к значению - u = unsigned ( -1 (int) < 1u (uint))
*/

int main(){

    vector<int> t = {-8, -7, -3};
    int sum = 0;
    for(auto i : t){
        sum += i;
    }
    int average = sum / static_cast<int>(t.size()); // приведение к знаковому типу, тк ответ может быть отрицательным.

    // sum - знаковое, t.size() - беззнаковое значение
    // sum / t.size()           - беззнаковое значение главнее

    // (1) с size_t не вызовет проблем
    for(size_t i = 0; i < t.size(); ++i){
        cout << i << " " << t[i] << endl;
    }

    // (2) static_cast<int>() - явное приведение типа к int
    for(int i = 0; i < static_cast<int>(t.size()); ++i){
        cout << i << " " << t[i] << endl;
    }





    /*
    cout << static_cast<int>(numeric_limits<char>::min()) << endl;      // -128
    cout << static_cast<int>(numeric_limits<char>::max()) << endl;      // 127
    cout << static_cast<int>(numeric_limits<uint8_t>::max()) << endl;   // 0 .. 255

    cout << numeric_limits<int>::min() << endl;                         // -2147483647
    cout << numeric_limits<int>::max() << endl;                         // 2147483647
    cout << numeric_limits<uint32_t>::max() << endl;                    // 0 .. 4294967295

    cout << numeric_limits<long long>::min()<< endl;                    // -9223372036854775808
    cout << numeric_limits<long long>::max()<< endl;                    // 9223372036854775808
    cout << numeric_limits<uint64_t>::max()<< endl;                     // 0 .. 18446744073709551615

    cout << numeric_limits<float>::min() << endl;                       // 1.17549e-38
    cout << numeric_limits<float>::max() << endl;                       // 3.40282e-38
    cout << numeric_limits<double>::min() << endl;                      // 2.22507e-308
    cout << numeric_limits<double>::max() << endl;                      // 1.79769e+308
     */

    return 0;
}