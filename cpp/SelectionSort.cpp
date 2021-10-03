#include <vector>

void selectionSort(std::vector<int> &arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }

        if (minIndex != i) {
            std::swap<int>(arr[i], arr[minIndex]);
        }
    }
}
