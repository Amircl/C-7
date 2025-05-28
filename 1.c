#include <stdio.h>


int max(int a, int b) {      // Функция возвращает максимальное из двух целых чисел
    return (a > b) ? a : b;  
} 

int main() {
    int x = 10, y = 20;
    printf("Максимум из %d и %d: %d\n", x, y, max(x, y));  // Выведет 20
    return 0;
}
