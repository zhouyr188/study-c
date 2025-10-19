//
//  demo4.c
//  Demo
//
//  Created by vvusu on 10/15/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 演示一维数组
void demo_one_dimensional_arrays() {
    printf("=== 一维数组演示 ===\n");
    
    // 数组声明和初始化
    int numbers[5] = {1, 2, 3, 4, 5};
    int scores[] = {85, 92, 78, 96, 88};  // 自动确定大小
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    printf("整数数组:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    printf("\n成绩数组:\n");
    for (int i = 0; i < 5; i++) {
        printf("scores[%d] = %d\n", i, scores[i]);
    }
    
    printf("\n元音字母数组:\n");
    for (int i = 0; i < 5; i++) {
        printf("vowels[%d] = %c\n", i, vowels[i]);
    }
    
    // 数组大小计算
    printf("\n数组大小:\n");
    printf("numbers数组大小: %zu 字节\n", sizeof(numbers));
    printf("numbers数组元素个数: %zu\n", sizeof(numbers) / sizeof(numbers[0]));
    
    printf("\n");
}

// 演示二维数组
void demo_two_dimensional_arrays() {
    printf("=== 二维数组演示 ===\n");
    
    // 二维数组声明和初始化
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    printf("3x4矩阵:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // 字符二维数组
    char names[3][20] = {
        "张三",
        "李四",
        "王五"
    };
    
    printf("\n姓名数组:\n");
    for (int i = 0; i < 3; i++) {
        printf("names[%d] = %s\n", i, names[i]);
    }
    
    printf("\n");
}

// 演示字符串数组
void demo_string_arrays() {
    printf("=== 字符串数组演示 ===\n");
    
    char *fruits[] = {"苹果", "香蕉", "橙子", "葡萄", "草莓"};
    int fruit_count = sizeof(fruits) / sizeof(fruits[0]);
    
    printf("水果列表:\n");
    for (int i = 0; i < fruit_count; i++) {
        printf("%d. %s\n", i + 1, fruits[i]);
    }
    
    // 字符串长度
    printf("\n字符串长度:\n");
    for (int i = 0; i < fruit_count; i++) {
        printf("%s 长度: %zu\n", fruits[i], strlen(fruits[i]));
    }
    
    printf("\n");
}

// 演示基本指针
void demo_basic_pointers() {
    printf("=== 基本指针演示 ===\n");
    
    int num = 42;
    int *ptr = &num;  // ptr指向num的地址
    
    printf("变量值:\n");
    printf("num = %d\n", num);
    printf("&num = %p\n", &num);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);
    
    // 通过指针修改值
    *ptr = 100;
    printf("\n通过指针修改后:\n");
    printf("num = %d\n", num);
    printf("*ptr = %d\n", *ptr);
    
    // 指针运算
    printf("\n指针运算:\n");
    printf("ptr + 1 = %p\n", ptr + 1);
    printf("ptr - 1 = %p\n", ptr - 1);
    
    printf("\n");
}

// 演示指针和数组
void demo_pointers_and_arrays() {
    printf("=== 指针和数组演示 ===\n");
    
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // 数组名就是指向第一个元素的指针
    
    printf("数组元素:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    printf("\n通过指针访问:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    
    printf("\n指针递增:\n");
    ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("*ptr = %d\n", *ptr);
        ptr++;
    }
    
    printf("\n");
}

// 演示指针数组
void demo_pointer_arrays() {
    printf("=== 指针数组演示 ===\n");
    
    int a = 10, b = 20, c = 30;
    int *ptr_array[] = {&a, &b, &c};
    
    printf("指针数组:\n");
    for (int i = 0; i < 3; i++) {
        printf("ptr_array[%d] = %p, *ptr_array[%d] = %d\n", 
               i, ptr_array[i], i, *ptr_array[i]);
    }
    
    printf("\n");
}

// 演示数组指针
void demo_array_pointers() {
    printf("=== 数组指针演示 ===\n");
    
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    int (*ptr)[4] = matrix;  // 指向包含4个int的数组的指针
    
    printf("通过数组指针访问二维数组:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%3d ", ptr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
}

// 演示动态内存分配
void demo_dynamic_memory() {
    printf("=== 动态内存分配演示 ===\n");
    
    // 分配内存
    int *dynamic_array = (int*)malloc(5 * sizeof(int));
    if (dynamic_array == NULL) {
        printf("内存分配失败!\n");
        return;
    }
    
    // 初始化数组
    for (int i = 0; i < 5; i++) {
        dynamic_array[i] = (i + 1) * 10;
    }
    
    printf("动态分配的数组:\n");
    for (int i = 0; i < 5; i++) {
        printf("dynamic_array[%d] = %d\n", i, dynamic_array[i]);
    }
    
    // 重新分配内存
    dynamic_array = (int*)realloc(dynamic_array, 8 * sizeof(int));
    if (dynamic_array == NULL) {
        printf("内存重新分配失败!\n");
        return;
    }
    
    // 初始化新增的元素
    for (int i = 5; i < 8; i++) {
        dynamic_array[i] = (i + 1) * 10;
    }
    
    printf("\n重新分配后的数组:\n");
    for (int i = 0; i < 8; i++) {
        printf("dynamic_array[%d] = %d\n", i, dynamic_array[i]);
    }
    
    // 释放内存
    free(dynamic_array);
    printf("内存已释放\n");
    
    printf("\n");
}

// 演示字符串指针
void demo_string_pointers() {
    printf("=== 字符串指针演示 ===\n");
    
    char str[] = "Hello, World!";
    char *ptr = str;
    
    printf("字符串: %s\n", str);
    printf("字符串长度: %zu\n", strlen(str));
    
    printf("\n通过指针遍历字符串:\n");
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n");
    
    // 字符串比较
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";
    
    printf("\n字符串比较:\n");
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str2, strcmp(str1, str2));
    printf("strcmp(\"%s\", \"%s\") = %d\n", str1, str3, strcmp(str1, str3));
    
    printf("\n");
}

// 简单的函数定义（在函数外部）
int add_func(int a, int b) {
    return a + b;
}

int subtract_func(int a, int b) {
    return a - b;
}

int multiply_func(int a, int b) {
    return a * b;
}

// 演示函数指针
void demo_function_pointers_advanced(void) {
    printf("=== 函数指针演示 ===\n");
    
    // 函数指针声明
    int (*operation)(int, int);
    
    int a = 10, b = 5;
    
    // 使用函数指针
    operation = add_func;
    printf("add(%d, %d) = %d\n", a, b, operation(a, b));
    
    operation = subtract_func;
    printf("subtract(%d, %d) = %d\n", a, b, operation(a, b));
    
    operation = multiply_func;
    printf("multiply(%d, %d) = %d\n", a, b, operation(a, b));
    
    printf("\n");
}

// 演示void指针
void demo_void_pointers(void) {
    printf("=== void指针演示 ===\n");
    
    int int_val = 42;
    float float_val = 3.14f;
    char char_val = 'A';
    
    void *void_ptr;
    
    // void指针可以指向任何类型
    void_ptr = &int_val;
    printf("void指针指向int: %d\n", *(int*)void_ptr);
    
    void_ptr = &float_val;
    printf("void指针指向float: %.2f\n", *(float*)void_ptr);
    
    void_ptr = &char_val;
    printf("void指针指向char: %c\n", *(char*)void_ptr);
    
    printf("\n");
}

// 主函数
void run_demo4(void) {
    printf("========== Demo4: C语言数组和指针 ==========\n\n");
    
    demo_one_dimensional_arrays();
    demo_two_dimensional_arrays();
    demo_string_arrays();
    demo_basic_pointers();
    demo_pointers_and_arrays();
    demo_pointer_arrays();
    demo_array_pointers();
    demo_dynamic_memory();
    demo_string_pointers();
    demo_function_pointers_advanced();
    demo_void_pointers();
    
    printf("========== Demo4 结束 ==========\n\n");
}
