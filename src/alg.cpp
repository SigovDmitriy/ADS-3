// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (value == arr[i])
      count += 1;
  }
    return count;
  return 0;
}
