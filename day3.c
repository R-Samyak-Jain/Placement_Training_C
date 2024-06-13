//chocolate problem
// #include<stdio.h>
// int main()
// {
//     int n,i,a[10],max,min,diff;
//     printf("Enter the no of elements\n");
//     scanf("%d",&n);
//     printf("Enter the array elements\n");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d\n",a[i]);
//     }
//     printf("Enter the total second array elements\n");
//     scanf("%d",&n);
//     printf("Enter the array elements:\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     max = min = a[0];
//     for (i = 1; i < n; i++) {
//     if (a[i] > max) {
//       max = a[i];
//     }
//     if (a[i] < min) {
//       min = a[i];
//     }
//   }
//   printf("Maximum element is: %d\n", max);
//   printf("Minimum element is: %d\n", min);
//   diff=max-min;
//   printf("Output=%d",diff);
//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n=5,k=3;
//     int a[5]={1,2,3,4,5};
//     int c[3],d[2];
//     int i,temp,Rc[3],Rd[2];
//     for(i=0;i<3;i++)
//     {
//         c[i]=a[i];
//     }
//     for(i=0;i<2;i++)
//     {
//         d[i]=a[i+3];
//     }
    
//     for(i=2;i>=0;i--)
//     {
//         Rc[2-i]=c[i];
//     }
//     for(i=1;i>=0;i--)
//     {
//         Rd[1-i]=d[i];
//     }
//     printf("reverse of array1:");
//     for(i=0;i<3;i++){
//     printf("%d",Rc[i]);
//     }
//     printf("\nreverse of array2:");
//     for(i=0;i<2;i++){
//     printf("%d",Rd[i]);
//     }
//     for(i=0;i<3;i++){
//     printf("%d",Rc[i]);
//     }
//     for(i=0;i<5;i++){
//         Rc[i+3]=Rd[i];
//     }
//     printf("\noutput=");
//     for(i=0;i<5;i++){
//         printf("%d",Rc[i]);
//     }    
// }

#include <stdio.h>

int min_houses_needed(int r, int unit, int arr[], int n) {
  // Check for null array
  if (arr == NULL) {
    return -1;
  }

  // Calculate total food required by all rats
  int total_food_needed = r * unit;

  // Calculate total food available in all houses
  int total_food_available = 0;
  for (int i = 0; i < n; i++) {
    total_food_available += arr[i];
  }

  // Check if total food available is sufficient
  if (total_food_available < total_food_needed) {
    return 0; // Not enough food
  }

  // Find the minimum number of houses needed
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
