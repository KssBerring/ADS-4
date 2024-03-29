// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count++;
      }
    }
  }
  return count;
  return 0;
}
int countPairs2(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len - 1; i++) {
    int left = i + 1, right = len - 1;
    while (left <= right) {
      int sum = arr[i] + arr[right];
      if (sum == value) {
        count++;
        right--;
      }
      else if (sum > value) {
        right--;
      }
      else {
        left++;
      }
    }
  }
  return count;
  return 0;
}
int countPairs3(int *arr, int len, int value) {
  int count = 0;int left = 0, right = len - 1;
  while (left <= right) {
    if (arr[left] + arr[right] == value) {
      int leftCount = 1, rightCount = 1;
      while (left + 1 <= right && arr[left] == arr[left + 1]) {
        leftCount++;
        left++;
      }
      while (right - 1 >= left && arr[right] == arr[right - 1]) {
        rightCount++;
        right--;
      }
      count += leftCount * rightCount;
      left++;
      right--;
    }
    else if (arr[left] + arr[right] < value) {
      left++;
    }
    else {
      right--;
    }
  }
  return count;
  return 0;
}
