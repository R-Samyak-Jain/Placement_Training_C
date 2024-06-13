#include <stdio.h>

int min_houses_needed(int r, int unit, int arr[], int n) {
  
  if (arr == NULL) {
    return -1;
  }

  
  int total_food_needed = r * unit;

  int total_food_available = 0;
  for (int i = 0; i < n; i++) {
    total_food_available += arr[i];
  }

  if (total_food_available < total_food_needed) {
    return 0; 
  }

  int houses_needed = 0;
  int current_food = 0;
  for (int i = 0; i < n; i++) {
    current_food += arr[i];
    houses_needed++;
    if (current_food >= total_food_needed) {
      break;
    }
  }

  return houses_needed;
}

int main() {
  int r = 7, unit = 2, n = 8;
  int arr[] = {2, 8, 3, 5, 7, 4, 1, 2};

  int min_houses = min_houses_needed(r, unit, arr, n);

  if (min_houses == -1) {
    printf("Error: Invalid array\n");
  } else if (min_houses == 0) {
    printf("Not enough food available\n");
  } else {
    printf("Minimum number of houses needed: %d\n", min_houses);
  }

  return 0;
}
