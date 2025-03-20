#include <iostream>
#include <vector>
#include <ctime>

//~160

void selectionSort(int* num, int size)
{
    int min, temp; // для поиска минимального элемента и для обмена
    for (int i = 0; i < size - 1; i++)
    {
        min = i; // запоминаем индекс текущего элемента
        // ищем минимальный элемент чтобы поместить на место i-ого
        for (int j = i + 1; j < size; j++)  // для остальных элементов после i-ого
        {
            if (num[j] < num[min]) // если элемент меньше минимального,
                min = j;       // запоминаем его индекс в min
        }
        if (min == i) continue;  // чтобы не менять элемент сам с собой
        temp = num[i];      // меняем местами i-ый и минимальный элементы
        num[i] = num[min];
        num[min] = temp;
    }
}

void bubbleSort(int* array, const int size) {
    for (int i = 0; i < size - 1; i++) {

        for (int j = 0; j < size - i - 1; j++) {

            if (array[j] > array[j + 1]) {
                const int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }

        }
    }
}

void insertionSort(int* array, const int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {

            array[j + 1] = array[j];
            j = j - 1;

        }
        array[j + 1] = key;

    }
}

int binarySearch(const int* array, const int target, const int size) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        const int mid = start + (end - start) / 2;
        if (array[mid] == target) {
            return mid;
        }
        if (array[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}


int main() {
    //150
    // std::vector<int> array;
    // int input;
    //
    // std::cout << "Введите числа (Ctrl + D для окончания ввода):" << std::endl;
    // while (std::cin >> input) {
    //     array.push_back(input);
    // }
    //
    // // Проверяем, отсортирован ли массив по возрастанию или убыванию
    // bool ascending = true, descending = true;
    //
    // for (size_t i = 1; i < array.size(); ++i) {
    //     if (array[i - 1] > array[i]) {
    //         ascending = false;
    //     }
    //     if (array[i - 1] < array[i]) {
    //         descending = false;
    //     }
    // }
    //
    // if (ascending || descending) {
    //     std::cout << "ITS OK (ARRAY SORTED)" << std::endl;
    // } else {
    //     std::cout << "NOT ASCENDING/DESCENDING ORDER!" << std::endl;
    // }


    int arr[] = {1,4,6,2,99,22,34,3,20,10};

    time_t const timestamp = time(nullptr);
    for (const int i : arr)
        printf("%d ", i);

    std::cout << "Saved: " << timestamp << std::endl;

    insertionSort(arr, std::size(arr));

    for (const int i : arr)
        printf("%d ", i);

    std::cout << "Execution time: " << time(nullptr) - timestamp << std::endl;

    std::cout << "Found value: " << binarySearch(arr, 20, std::size(arr));

    return 0;
}


