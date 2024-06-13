//swap two numbers
#include <stdio.h>
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
int main() {
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
  swap(&num1, &num2);
  printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
  return 0;
}

//online shopping
#include <stdio.h>
#define MAX_PRODUCTS 5
int main() 
{
  char products[MAX_PRODUCTS][50] = {"T-Shirt", "Jeans", "Cap", "Watch", "Phone"};
  float prices[MAX_PRODUCTS] = {150, 350, 100, 1000, 65000};
  int cart[MAX_PRODUCTS] = {0};
  int choice, product_id, quantity;
  float total_cost = 0.0f;
  printf("Welcome to the Online Shop!\n");
  do 
  {
    printf("\nProducts:\n");
    for (int i = 0; i < MAX_PRODUCTS; i++) {
      printf("%d. %s - %.2f\n", i + 1, products[i], prices[i]);
    }
    printf("\n1. Add to Cart\n");
    printf("2. View Cart\n");
    printf("3. Buy Now\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        printf("Enter product ID (1-%d): ", MAX_PRODUCTS);
        scanf("%d", &product_id);
        if (product_id > 0 && product_id <= MAX_PRODUCTS) {
          printf("Enter quantity: ");
          scanf("%d", &quantity);
          cart[product_id - 1] += quantity; 
          printf("%d %s added to cart!\n", quantity, products[product_id - 1]);
        } else {
          printf("Invalid product ID!\n");
        }
        break;
      case 2:
        printf("\nYour Cart:\n");
        for (int i = 0; i < MAX_PRODUCTS; i++) {
          if (cart[i] > 0) {
            printf("%d %s - %.2f (Quantity: %d)\n", i + 1, products[i], prices[i], cart[i]);
            total_cost += prices[i] * cart[i];
          }
        }
        if (total_cost == 0.0f) {
          printf("Cart is empty!\n");
        } else {
          printf("Total Cost: %.2f\n", total_cost);
        }
        break;
      case 3:
        if (total_cost == 0.0f) {
          printf("Cart is empty! Nothing to buy.\n");
        } else {
          printf("Your total cost is: %.2f\n", total_cost);
          printf("Thank you for your purchase!\n");
          total_cost = 0.0f;
          for (int i = 0; i < MAX_PRODUCTS; i++) {
            cart[i] = 0;
          }
        }
        break;
      case 4:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice!\n");
    }
  } while (choice != 4);
  return 0;
}

