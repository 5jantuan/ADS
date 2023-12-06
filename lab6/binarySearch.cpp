#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int x) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            return mid; // Элемент найден, возвращаем индекс
        } else if (arr[mid] < x) {
            left = mid + 1; // Искать в правой половине
        } else {
            right = mid - 1; // Искать в левой половине
        }
    }

    return -1; // Элемент не найден
}

int main() {
    std::vector<int> sortedArray = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 5;

    int result = binarySearch(sortedArray, x);

    if (result != -1) {
        std::cout << "Элемент " << x << " найден на позиции " << result << std::endl;
    } else {
        std::cout << "Элемент " << x << " не найден в массиве." << std::endl;
    }

    return 0;
}
