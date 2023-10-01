void insertionSort(List<num> arr) {
  for (int i = 1; i < arr.length; i++) {
    num temp = arr[i];
    int j = i - 1;
    while (j >= 0 && temp < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }
}

void main() {
  List<num> arr = [5, 2, 4, 6, 1, 3];

  insertionSort(arr);

  print(arr); // [1, 2, 3, 4, 5, 6]
}
