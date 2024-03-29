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
  int count = 0;
for (int i = 0; i < len; i++) {
    int low = i, high = len - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[i] + arr[mid] == value) {
            count++;
            if (arr[mid] == arr[mid - 1]) {
                count++;
            }
            break;
        }
        else if (arr[i] + arr[mid] < value) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
}
return count;
  return 0;
}
