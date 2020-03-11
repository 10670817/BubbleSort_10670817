// Created by Afriyie Gerson

#include <iostream>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;

}

int main() {
   int n;
   std::cin >> n;
   // This is the Total number to be sorted
   int a[n];
   for (int i = 0; i < n; i++) {
       std::cin >> a[i];
       //Enter The numbers and after it reaches the n the program terminates
   }
   for (int i = 0; i < n; i++) {
       for (int j = i; j < n; j++) {
           if (a[i] > a[j]) {
               swap(&a[i], &a[j]);
           }
       }
   }

   for (int i = 0; i < n; i++) {
       std::cout << a[i] << ' ';
   }
    return 0;
}
