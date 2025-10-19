//
//  demo3.c
//  Demo
//
//  Created by vvusu on 10/15/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 函数声明
int add(int a, int b);
int multiply(int a, int b);
void print_array(int arr[], int size);
int factorial(int n);
int fibonacci(int n);
void swap(int *a, int *b);
int find_max(int arr[], int size);
void bubble_sort(int arr[], int size);
void print_menu();

// 演示基本函数
void demo_basic_functions() {
    printf("=== 基本函数演示 ===\n");
    
    int a = 10, b = 20;
    
    printf("add(%d, %d) = %d\n", a, b, add(a, b));
    printf("multiply(%d, %d) = %d\n", a, b, multiply(a, b));
    
    printf("\n");
}

// 演示递归函数
void demo_recursive_functions() {
    printf("=== 递归函数演示 ===\n");
    
    int n = 5;
    printf("计算 %d!:\n", n);
    printf("%d! = %d\n", n, factorial(n));
    
    printf("\n斐波那契数列 (前10项):\n");
    for (int i = 0; i < 10; i++) {
        printf("fibonacci(%d) = %d\n", i, fibonacci(i));
    }
    
    printf("\n");
}

// 演示数组操作函数
void demo_array_functions() {
    printf("=== 数组操作函数演示 ===\n");
    
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    printf("原始数组:\n");
    print_array(numbers, size);
    
    printf("最大值: %d\n", find_max(numbers, size));
    
    printf("\n冒泡排序:\n");
    bubble_sort(numbers, size);
    print_array(numbers, size);
    
    printf("\n");
}

// 演示指针参数
void demo_pointer_parameters() {
    printf("=== 指针参数演示 ===\n");
    
    int x = 10, y = 20;
    printf("交换前: x = %d, y = %d\n", x, y);
    
    swap(&x, &y);
    printf("交换后: x = %d, y = %d\n", x, y);
    
    printf("\n");
}

// 演示函数指针
void demo_function_pointers() {
    printf("=== 函数指针演示 ===\n");
    
    // 声明函数指针
    int (*operation)(int, int);
    
    // 指向add函数
    operation = add;
    printf("使用函数指针调用add(5, 3): %d\n", operation(5, 3));
    
    // 指向multiply函数
    operation = multiply;
    printf("使用函数指针调用multiply(5, 3): %d\n", operation(5, 3));
    
    // 函数指针数组
    int (*ops[])(int, int) = {add, multiply};
    printf("\n函数指针数组:\n");
    printf("ops[0](4, 5) = %d\n", ops[0](4, 5));
    printf("ops[1](4, 5) = %d\n", ops[1](4, 5));
    
    printf("\n");
}

// 演示可变参数函数
#include <stdarg.h>

int sum_variable_args(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    
    va_end(args);
    return sum;
}

void demo_variable_arguments() {
    printf("=== 可变参数函数演示 ===\n");
    
    printf("sum_variable_args(3, 1, 2, 3) = %d\n", sum_variable_args(3, 1, 2, 3));
    printf("sum_variable_args(5, 10, 20, 30, 40, 50) = %d\n", sum_variable_args(5, 10, 20, 30, 40, 50));
    
    printf("\n");
}

// 演示静态变量
void demo_static_variables() {
    printf("=== 静态变量演示 ===\n");
    
    static int call_count = 0;
    call_count++;
    
    printf("函数被调用第 %d 次\n", call_count);
    
    printf("\n");
}

// 演示内联函数
static inline int square(int x) {
    return x * x;
}

void demo_inline_functions() {
    printf("=== 内联函数演示 ===\n");
    
    int num = 5;
    printf("square(%d) = %d\n", num, square(num));
    
    printf("\n");
}

// 演示宏函数
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

void demo_macro_functions() {
    printf("=== 宏函数演示 ===\n");
    
    int a = 10, b = 20;
    printf("MAX(%d, %d) = %d\n", a, b, MAX(a, b));
    printf("MIN(%d, %d) = %d\n", a, b, MIN(a, b));
    printf("SQUARE(%d) = %d\n", a, SQUARE(a));
    
    printf("\n");
}

// 函数实现
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void bubble_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void print_menu() {
    printf("=== 菜单函数演示 ===\n");
    printf("1. 选项1\n");
    printf("2. 选项2\n");
    printf("3. 选项3\n");
    printf("0. 退出\n");
}

// 主函数
void run_demo3() {
    printf("========== Demo3: C语言函数 ==========\n\n");
    
    demo_basic_functions();
    demo_recursive_functions();
    demo_array_functions();
    demo_pointer_parameters();
    demo_function_pointers();
    demo_variable_arguments();
    demo_static_variables();
    demo_static_variables();  // 再次调用以演示静态变量
    demo_inline_functions();
    demo_macro_functions();
    print_menu();
    
    printf("========== Demo3 结束 ==========\n\n");
}
