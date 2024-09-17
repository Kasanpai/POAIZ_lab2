//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SIZE 10
//
//int main(void)
//{
//	setvbuf(stdin, NULL, _IONBF, 0);
//	setvbuf(stdout, NULL, _IONBF, 0);
//
//	clock_t start, end; // объявляем переменные для определения времени выполнения
//
//	int i = 0, j = 0, r;
//	int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE], elem_c;
//
//	srand(time(NULL)); // инициализируем параметры генератора случайных чисел
//	while (i < SIZE)
//	{
//		j = 0;
//		while (j < SIZE)
//		{
//			a[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
//			j++;
//		}
//		i++;
//	}
//
//	srand(time(NULL)); // инициализируем параметры генератора случайных чисел
//	i = 0; j = 0;
//	while (i < SIZE)
//	{
//		j = 0;
//		while (j < SIZE)
//		{
//			b[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
//			j++;
//		}
//		i++;
//	}
//
//	for (i = 0; i < SIZE; i++)
//	{
//		for (j = 0; j < SIZE; j++)
//		{
//			elem_c = 0;
//			for (r = 0; r < SIZE; r++)
//			{
//				elem_c = elem_c + a[i][r] * b[r][j];
//			}
//			c[i][j] = elem_c;
//		}
//	}
//	//// Вывод матрицы a
//	//printf("Matrix a:\n");
//	//for (i = 0; i < SIZE; i++)
//	//{
//	//	for (j = 0; j < SIZE; j++)
//	//	{
//	//		printf("%4d ", a[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//// Вывод матрицы b
//	//printf("\nMatrix b:\n");
//	//for (i = 0; i < SIZE; i++)
//	//{
//	//	for (j = 0; j < SIZE; j++)
//	//	{
//	//		printf("%4d ", b[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	//// Вывод матрицы c (результат умножения матриц a и b)
//	//printf("\nMatrix c (result of multiplication a * b):\n");
//	//for (i = 0; i < SIZE; i++)
//	//{
//	//	for (j = 0; j < SIZE; j++)
//	//	{
//	//		printf("%10d ", c[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return(0);
//}
// 

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	setvbuf(stdin, NULL, _IONBF, 0);
//	setvbuf(stdout, NULL, _IONBF, 0);
//
//	clock_t start, end; // объявляем переменные для определения времени выполнения
//
//	int i = 0, j = 0, r;
//	int a[200][200], b[200][200], c[200][200], elem_c;
//
//	srand(time(NULL)); // инициализируем параметры генератора случайных чисел
//	while (i < 200)
//	{
//		while (j < 200)
//		{
//			a[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
//			j++;
//		}
//		i++;
//	}
//	srand(time(NULL)); // инициализируем параметры генератора случайных чисел
//	i = 0; j = 0;
//	while (i < 200)
//	{
//		while (j < 200)
//		{
//			b[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
//			j++;
//		}
//		i++;
//	}
//
//	for (i = 0; i < 200; i++)
//	{
//		for (j = 0; j < 200; j++)
//		{
//			elem_c = 0;
//			for (r = 0; r < 200; r++)
//			{
//				elem_c = elem_c + a[i][r] * b[r][j];
//				c[i][j] = elem_c;
//			}
//		}
//	}
//
//
//	return(0);
//}

//#include <Windows.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define SIZE 1000
//
//int main(void)
//{
//
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	setvbuf(stdin, NULL, _IONBF, 0);
//	setvbuf(stdout, NULL, _IONBF, 0);
//
//	clock_t start, end; // объявляем переменные для определения времени выполнения
//	double cpu_time_used;
//
//	start = clock(); // начинаем отсчет времени
//
//	int i = 0, j = 0, r;
//	int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE], elem_c;
//
//	srand(time(NULL)); // инициализируем параметры генератора случайных чисел
//	while (i < SIZE)
//	{
//		j = 0;
//		while (j < SIZE)
//		{
//			a[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
//			j++;
//		}
//		i++;
//	}
//
//	srand(time(NULL)); // инициализируем параметры генератора случайных чисел
//	i = 0; j = 0;
//	while (i < SIZE)
//	{
//		j = 0;
//		while (j < SIZE)
//		{
//			b[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
//			j++;
//		}
//		i++;
//	}
//
//	for (i = 0; i < SIZE; i++)
//	{
//		for (j = 0; j < SIZE; j++)
//		{
//			elem_c = 0;
//			for (r = 0; r < SIZE; r++)
//			{
//				elem_c = elem_c + a[i][r] * b[r][j];
//			}
//			c[i][j] = elem_c;
//		}
//	}
//
//	end = clock(); // заканчиваем отсчет времени
//	cpu_time_used = ((double)(end - start)) * 1000.0 / CLOCKS_PER_SEC; // переводим время в миллисекунды
//
//	// Вывод времени выполнения
//	printf("Время выполнения программы: %f мс\n", cpu_time_used);
//
//	return 0;
//}

//

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <Windows.h>
//
//#define SIZE 100
//int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE];
//
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    setvbuf(stdin, NULL, _IONBF, 0);
//    setvbuf(stdout, NULL, _IONBF, 0);
//
//    clock_t start, end; // объявляем переменные для определения времени выполнения
//    double cpu_time_used;
//
//    // Запускаем таймер
//    start = clock();
//
//    int i, j, r;
//    int elem_c;
//
//    srand(time(NULL)); // инициализируем параметры генератора случайных чисел
//    for (i = 0; i < SIZE; i++)
//    {
//        for (j = 0; j < SIZE; j++)
//        {
//            a[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
//        }
//    }
//
//    for (i = 0; i < SIZE; i++)
//    {
//        for (j = 0; j < SIZE; j++)
//        {
//            b[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
//        }
//    }
//    // Заканчиваем таймер
//    end = clock();
//    cpu_time_used = ((double)(end - start)) * 1000.0 / CLOCKS_PER_SEC; // переводим время в миллисекунды
//
//    for (i = 0; i < SIZE; i++)
//    {
//        for (j = 0; j < SIZE; j++)
//        {
//            elem_c = 0;
//            for (r = 0; r < SIZE; r++)
//            {
//                elem_c += a[i][r] * b[r][j]; // считаем элемент результата
//            }
//            c[i][j] = elem_c;
//        }
//    }
//
//    // Заканчиваем таймер
//   
//
//    // Вывод времени выполнения
//    printf("Время выполнения программы: %f мс\n", cpu_time_used);
//
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAX_SIZE 10000
//#define NUM_SIZES 7
//
//int main()
//{
//    setvbuf(stdin, NULL, _IONBF, 0);
//    setvbuf(stdout, NULL, _IONBF, 0);
//
//    int sizes[NUM_SIZES] = { 100, 200, 400, 1000, 2000, 4000, 10000 };
//    printf("Размер массива\tВремя выполнения (мс)\n");
//
//    for (int s = 0; s < NUM_SIZES; s++)
//    {
//        int SIZE = sizes[s];
//
//
//        int a[SIZE][SIZE], b[SIZE][SIZE], c[SIZE][SIZE], elem_c;
//
//        // Заполнение массивов случайными числами
//        srand(time(NULL));
//        for (int i = 0; i < SIZE; i++)
//        {
//            for (int j = 0; j < SIZE; j++)
//            {
//                a[i][j] = rand() % 100 + 1;
//                b[i][j] = rand() % 100 + 1;
//            }
//        }
//
//        clock_t start, end;
//        double cpu_time_used;
//
//        // Запускаем таймер
//        start = clock();
//
//        // Умножение матриц
//        for (int i = 0; i < SIZE; i++)
//        {
//            for (int j = 0; j < SIZE; j++)
//            {
//                elem_c = 0;
//                for (int r = 0; r < SIZE; r++)
//                {
//                    elem_c += a[i][r] * b[r][j];
//                }
//                c[i][j] = elem_c;
//            }
//        }
//
//        // Заканчиваем таймер
//        end = clock();
//        cpu_time_used = ((double)(end - start)) * 1000.0 / CLOCKS_PER_SEC; // переводим время в миллисекунды
//
//        // Вывод времени выполнения
//        printf("%d\t\t%f\n", SIZE, cpu_time_used);
//    }
//
//    return 0;
//}
//
// 
// 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define NUM_SIZES 7
const int SIZES[NUM_SIZES] = { 100, 200, 400, 1000, 2000, 4000, 10000 };

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);

    printf("Размер\tВремя выполнения (мс)\n");
    printf("---------------------------\n");

    for (int sizeIndex = 0; sizeIndex < NUM_SIZES; sizeIndex++)
    {
        int SIZE = SIZES[sizeIndex];
        clock_t start=0, end =0; // объявляем переменные для определения времени выполнения
        double cpu_time_used;

        int i, j, r;
        int** a = (int**)malloc(SIZE * sizeof(int*));
        int** b = (int**)malloc(SIZE * sizeof(int*));
        int** c = (int**)malloc(SIZE * sizeof(int*));

        for (i = 0; i < SIZE; i++)
        {
            a[i] = (int*)malloc(SIZE * sizeof(int));
            b[i] = (int*)malloc(SIZE * sizeof(int));
            c[i] = (int*)malloc(SIZE * sizeof(int));
        }

        // Запускаем таймер
      

        srand(time(NULL)); // инициализируем параметры генератора случайных чисел
        for (i = 0; i < SIZE; i++)
        {
            for (j = 0; j < SIZE; j++)
            {
                a[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
                b[i][j] = rand() % 100 + 1; // заполняем массив случайными числами
            }
        }


        
        start = clock();
        for (i = 0; i < SIZE; i++)
        {
            for (j = 0; j < SIZE; j++)
            {
                int elem_c = 0;
                for (r = 0; r < SIZE; r++)
                {
                    elem_c += a[i][r] * b[r][j]; // считаем элемент результата
                    
                }
                c[i][j] = elem_c;
            }
            
        }
         end = clock();
        // Заканчиваем таймер
        
        cpu_time_used = ((double)(end - start)) * 1000.0 / CLOCKS_PER_SEC; // переводим время в миллисекунды


        // Вывод времени выполнения
        printf("%d\t%f\n", SIZE, cpu_time_used);

        // Освобождаем память
        for (i = 0; i < SIZE; i++)
        {
            free(a[i]);
            free(b[i]);
            free(c[i]);
        }
        free(a);
        free(b);
        free(c);
    }

    return 0;
}




