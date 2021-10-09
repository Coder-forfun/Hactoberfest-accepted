void main() {
  List<int> arr = [0, 1, 3, 4, 5, 8, 9, 22];
  int searchValue = 3;
  int min = 0;
  int max = arr.length - 1;
  binarySearch(arr, searchValue, min, max);
}

binarySearch(List<int> arr, int searchValue, int min, int max) {
  if (max >= min) {
    print('min $min');
    print('max $max');
    int mid = ((max + min) / 2).floor();
    if (searchValue == arr[mid]) {
      print('your item is at index: ${mid}');
    } else if (searchValue > arr[mid]) {
      binarySearch(arr, searchValue, mid + 1, max);
    } else {
      binarySearch(arr, searchValue, min, mid - 1);
    }
  }
  return null;
}