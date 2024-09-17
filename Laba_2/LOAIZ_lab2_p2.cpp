#define _CRT_SECURE_NO_WARNINGS 
 
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <Windows.h> 
 
const int size = 100000; 
int randomArray[size], randomArray2[size], randomArray3[size]; 
int increasingArray[size], increasingArray2[size], increasingArray3[size]; 
int decreasingArray[size], decreasingArray2[size], decreasingArray3[size]; 
int halfIncHalfDecArray[size], halfIncHalfDecArray2[size], halfIncHalfDecArray3[size]; 
 
void copyArray(int* source, int* destination, int* destination2, int size) { 
 for (int i = 0; i < size; i++) { 
 destination[i] = source[i]; 
 destination2[i] = source[i]; 
 } 
} 
 
void shell(int* items, int count) { 
 int i, j, gap, k; 
 int x, a[5]; 
 
 a[0] = 9; a[1] = 5; a[2] = 3; a[3] = 2; a[4] = 1; 
 
 for (k = 0; k < 5; k++) { 
 gap = a[k]; 
 for (i = gap; i < count; ++i) { 
 x = items[i]; 
 for (j = i - gap; (x < items[j]) && (j >= 0); j = j - gap) 
 items[j + gap] = items[j]; 
 items[j + gap] = x; 
 } 
 } 
} 
 
int compare(const void* a, const void* b) { 
 return (*(int*)a - *(int*)b); 
} 
 
void qs(int* items, int left, int right) { 
 int i, j; 
 int x, y; 
 
 i = left; j = right; 
 x = items[(left + right) / 2]; 
 
 do { 
 while ((items[i] < x) && (i < right)) i++; 
 while ((x < items[j]) && (j > left)) j--; 
 
 if (i <= j) { 
 y = items[i]; 
 items[i] = items[j]; 
 items[j] = y; 
 i++; j--; 
 } 
 } while (i <= j); 
 
 if (left < j) qs(items, left, j); 
 if (i < right) qs(items, i, right); 
} 
 
void printArray(int* array, int size) { 
 for (int i = 0; i < size; i++) { 
 printf("%d ", array[i]); 
 } 
 printf("\n"); 
} 
 
int main() { 
 
 SetConsoleCP(1251); 
 SetConsoleOutputCP(1251); 
 srand(time(NULL)); 
 // размер массивов 
 
 double timeR1, timeR2, timeR3, timeI1, timeI2, timeI3, timeD1, timeD2, timeD3, timeH1, timeH2, timeH3; 
 
 
 
 // Заполнение массивов 
 for (int i = 0; i < size; i++) { 
 randomArray[i] = rand() % 1000; // случайные числа от 0 до 999 
 increasingArray[i] = i; // возрастающий 
 decreasingArray[i] = size - i; // убывающий 
 halfIncHalfDecArray[i] = (i < size / 2) ? i : size - i; // половина возрастающий, половина убывающий 
 } 
 
 
 
 copyArray(randomArray, randomArray2, randomArray3, size); 
 copyArray(&increasingArray[size], &increasingArray2[size], &increasingArray3[size], size); 
 copyArray(&decreasingArray[size], &decreasingArray2[size], &decreasingArray3[size], size); 
 copyArray(&halfIncHalfDecArray[size], &halfIncHalfDecArray2[size], &halfIncHalfDecArray3[size], size); 
 
 
 // Сортировка и замер времени для случайного массива 
 clock_t start = clock(); 
 shell(randomArray, size); 
 clock_t end = clock(); 
 timeR1 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 start = clock(); 
 qs(randomArray2, 0, size - 1); 
 end = clock(); 
 timeR2 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 start = clock(); 
 qsort(randomArray3, size, sizeof(int), compare); 
 end = clock(); 
 timeR3 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 
 
 
 
 
 start = clock(); 
 shell(&decreasingArray[size], size); 
 end = clock(); 
 timeI1 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 start = clock(); 
 qs(&decreasingArray2[size], 0, size - 1); 
 end = clock(); 
 timeI2 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 start = clock(); 
 qsort(&decreasingArray3[size], size, sizeof(int), compare); 
 end = clock(); 
 timeI3 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 
 
 start = clock(); 
 shell(&increasingArray[size], size); 
 end = clock(); 
 timeD1 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 start = clock(); 
 qs(&increasingArray2[size], 0, size - 1); 
 end = clock(); 
 timeD2 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 start = clock(); 
 qsort(&increasingArray3[size], size, sizeof(int), compare); 
 end = clock(); 
 timeD3 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 
 
 start = clock(); 
 shell(&halfIncHalfDecArray[size], size); 
 end = clock(); 
 timeH1 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 start = clock(); 
 qs(&halfIncHalfDecArray2[size], 0, size - 1); 
 end = clock(); 
 timeH2 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 start= clock(); 
 qsort(&halfIncHalfDecArray3[size], size, sizeof(int), compare); 
 end = clock(); 
 timeH3 = ((double)(end - start) / CLOCKS_PER_SEC); 
 
 
 printf("| | Случ| Возр| Убыв|Полов|\n"); 
 printf("|-----|-----|-----|-----|-----|\n"); 
 printf("|Shell|%3.3lf|%3.3lf|%3.3lf|%3.3lf|\n", timeR1, timeI1, timeD1, timeH1); 
 printf("| QS |%3.3lf|%3.3lf|%3.3lf|%3.3lf|\n", timeR2,timeI2,timeD2 , timeH2 ); 
 printf("|QSort|%3.3lf|%3.3lf|%3.3lf|%3.3lf|\n",timeR3,timeI3,timeD3, timeH3 ); 
 
 return 0; 
}