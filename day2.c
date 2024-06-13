//areas
// #include<stdio.h>
// int areaofrec(int length,int breadth)
// {
//     int area1;
//     area1=length*breadth;
//     return area1;
// }
// int areaoftri(int base,int height){
//     int area2;
//     area2=0.5*base*height;
//     return area2;
// }
// int areaofcir(int radius){
//     int area3;
//     area3=3.1428*radius*radius;
//     return area3;
// }
// int square(int side){
//     int area4;
//     area4=side*side;
//     return area4;
// }
// int main(){
//     int l=20,b=30;
//     int ba=30,h=10;
//     int radius=300;
//     int side=100;
//     int area1=areaofrec(l,b);
//     int area2=areaoftri(ba,h);
//     int area3=areaofcir(radius);
//     int area4=square(side);
//     printf("area of rectangle=%d\n",area1);
//     printf("area of triangle=%d\n",area2);
//     printf("area of circle=%d\n",area3);
//     printf("area of square=%d\n",area4);
// }

// #include <stdio.h>
// typedef struct {
//     char name[50];
//     int price;
// } Movie;

// void displayMovies(Movie movies[], int numMovies) {
//     printf("Movie List:\n");
//     for (int i = 0; i < numMovies; i++) {
//         printf("%d. %s \n", i + 1, movies[i].name);
//     }
// }

// void bookTicket(Movie movies[], int numMovies) {
//     int choice;
//     printf("Enter the movie number to book a ticket: ");
//     scanf("%d", &choice);

//     if (choice >= 1 && choice <= numMovies) {
//         printf("You have booked a ticket for %s. The price is Rs. %d.\n", movies[choice - 1].name, movies[choice - 1].price);
//     } else {
//         printf("Invalid choice. Please try again.\n");
//     }
// }

// int main() {
//     Movie movies[] = {
//         {"Avengers", 200},
//         {"The Shawshank Redemption", 150},
//         {"The Godfather", 250},
//         {"Inception", 180},
//         {"Interstellar", 220}
//     };
//     int numMovies = sizeof(movies) / sizeof(Movie);
//     displayMovies(movies, numMovies);
//     bookTicket(movies, numMovies);

//     return 0;
// }


//Fa
#include <stdio.h>

int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
int main() {
  int num;
  printf("Enter a non-negative integer: ");
  scanf("%d", &num);
  if (num < 0) {
    printf("Error! Factorial is not defined for negative numbers.\n");
    return 1;
  }
  int result = factorial(num);
  printf("The factorial of %d is %d\n", num, result);
  return 0;
}

//Warehouse
#include<stdio.h>
int main()
{
    printf("Wrehouse Management System");
    printf("");
}