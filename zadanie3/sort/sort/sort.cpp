#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main() {

    int sort_int_array[] = { 7,10,11,5,8,3,53 };
    vector<int> sort_int_vector(sort_int_array, sort_int_array + 7);
    int i;
    sort(sort_int_vector.begin(), sort_int_vector.end());
    for (i = 0; i < 7; i++)
        cout << sort_int_vector[i] << " ";
    cout << "\n";
}

// Для сортировки массива чисел(в моем случае по возрастанию), я использовал функцию std::sort, которая находится в библиотеке algorithm.
// Мой выбор пал на данную функцию т.к. она чаще всего опережает по скорости qshort. Но вообще существует множество функций сортировок(например алгоритм introsort который переключается на пирамидальную сортировку),
// но каждая из них будет эффективна в зависиммости от поставленной задачи.
