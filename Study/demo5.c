//
//  demo5.c
//  Demo
//
//  Created by vvusu on 10/15/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义结构体
struct Student {
    int id;
    char name[50];
    int age;
    float gpa;
};

// 使用typedef定义结构体
typedef struct {
    char title[100];
    char author[50];
    int pages;
    float price;
} Book;

// 嵌套结构体
typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[50];
    Date birth_date;
    char department[50];
    float salary;
} Employee;

// 演示基本结构体
void demo_basic_structures(void) {
    printf("=== 基本结构体演示 ===\n");
    
    // 结构体变量声明和初始化
    struct Student student1 = {1001, "张三", 20, 3.8f};
    struct Student student2;
    
    // 分别赋值
    student2.id = 1002;
    strcpy(student2.name, "李四");
    student2.age = 21;
    student2.gpa = 3.6f;
    
    printf("学生1:\n");
    printf("  学号: %d\n", student1.id);
    printf("  姓名: %s\n", student1.name);
    printf("  年龄: %d\n", student1.age);
    printf("  GPA: %.2f\n", student1.gpa);
    
    printf("\n学生2:\n");
    printf("  学号: %d\n", student2.id);
    printf("  姓名: %s\n", student2.name);
    printf("  年龄: %d\n", student2.age);
    printf("  GPA: %.2f\n", student2.gpa);
    
    printf("\n");
}

// 演示typedef结构体
void demo_typedef_structures(void) {
    printf("=== typedef结构体演示 ===\n");
    
    Book book1 = {"C语言程序设计", "谭浩强", 400, 45.5f};
    Book book2;
    
    strcpy(book2.title, "数据结构");
    strcpy(book2.author, "严蔚敏");
    book2.pages = 350;
    book2.price = 38.0f;
    
    printf("图书1:\n");
    printf("  书名: %s\n", book1.title);
    printf("  作者: %s\n", book1.author);
    printf("  页数: %d\n", book1.pages);
    printf("  价格: %.2f元\n", book1.price);
    
    printf("\n图书2:\n");
    printf("  书名: %s\n", book2.title);
    printf("  作者: %s\n", book2.author);
    printf("  页数: %d\n", book2.pages);
    printf("  价格: %.2f元\n", book2.price);
    
    printf("\n");
}

// 演示嵌套结构体
void demo_nested_structures(void) {
    printf("=== 嵌套结构体演示 ===\n");
    
    Employee emp1 = {
        "王五",
        {15, 6, 1990},
        "技术部",
        8000.0f
    };
    
    Employee emp2;
    strcpy(emp2.name, "赵六");
    emp2.birth_date.day = 20;
    emp2.birth_date.month = 8;
    emp2.birth_date.year = 1988;
    strcpy(emp2.department, "销售部");
    emp2.salary = 7500.0f;
    
    printf("员工1:\n");
    printf("  姓名: %s\n", emp1.name);
    printf("  生日: %d年%d月%d日\n", emp1.birth_date.year, 
           emp1.birth_date.month, emp1.birth_date.day);
    printf("  部门: %s\n", emp1.department);
    printf("  薪资: %.2f元\n", emp1.salary);
    
    printf("\n员工2:\n");
    printf("  姓名: %s\n", emp2.name);
    printf("  生日: %d年%d月%d日\n", emp2.birth_date.year, 
           emp2.birth_date.month, emp2.birth_date.day);
    printf("  部门: %s\n", emp2.department);
    printf("  薪资: %.2f元\n", emp2.salary);
    
    printf("\n");
}

// 演示结构体数组
void demo_structure_arrays(void) {
    printf("=== 结构体数组演示 ===\n");
    
    struct Student students[3] = {
        {1001, "张三", 20, 3.8f},
        {1002, "李四", 21, 3.6f},
        {1003, "王五", 19, 3.9f}
    };
    
    printf("学生列表:\n");
    for (int i = 0; i < 3; i++) {
        printf("学生%d: %s (学号:%d, 年龄:%d, GPA:%.2f)\n", 
               i + 1, students[i].name, students[i].id, 
               students[i].age, students[i].gpa);
    }
    
    // 查找最高GPA的学生
    int max_index = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].gpa > students[max_index].gpa) {
            max_index = i;
        }
    }
    
    printf("\n最高GPA学生: %s (GPA: %.2f)\n", 
           students[max_index].name, students[max_index].gpa);
    
    printf("\n");
}

// 演示结构体指针
void demo_structure_pointers(void) {
    printf("=== 结构体指针演示 ===\n");
    
    struct Student student = {1001, "张三", 20, 3.8f};
    struct Student *ptr = &student;
    
    printf("通过指针访问结构体成员:\n");
    printf("  学号: %d\n", ptr->id);
    printf("  姓名: %s\n", ptr->name);
    printf("  年龄: %d\n", ptr->age);
    printf("  GPA: %.2f\n", ptr->gpa);
    
    // 通过指针修改结构体成员
    ptr->age = 21;
    ptr->gpa = 3.9f;
    
    printf("\n修改后:\n");
    printf("  年龄: %d\n", ptr->age);
    printf("  GPA: %.2f\n", ptr->gpa);
    
    printf("\n");
}

// 演示动态结构体
void demo_dynamic_structures(void) {
    printf("=== 动态结构体演示 ===\n");
    
    // 动态分配结构体
    struct Student *student = (struct Student*)malloc(sizeof(struct Student));
    if (student == NULL) {
        printf("内存分配失败!\n");
        return;
    }
    
    // 初始化结构体
    student->id = 1001;
    strcpy(student->name, "张三");
    student->age = 20;
    student->gpa = 3.8f;
    
    printf("动态分配的学生:\n");
    printf("  学号: %d\n", student->id);
    printf("  姓名: %s\n", student->name);
    printf("  年龄: %d\n", student->age);
    printf("  GPA: %.2f\n", student->gpa);
    
    // 释放内存
    free(student);
    printf("内存已释放\n");
    
    printf("\n");
}

// 演示文件操作
void demo_file_operations(void) {
    printf("=== 文件操作演示 ===\n");
    
    const char *filename = "demo.txt";
    
    // 写入文件
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("无法创建文件!\n");
        return;
    }
    
    fprintf(file, "Hello, World!\n");
    fprintf(file, "这是C语言文件操作演示\n");
    fprintf(file, "数字: %d\n", 42);
    fprintf(file, "浮点数: %.2f\n", 3.14f);
    
    fclose(file);
    printf("文件写入完成\n");
    
    // 读取文件
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("无法打开文件!\n");
        return;
    }
    
    char line[100];
    printf("\n文件内容:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    fclose(file);
    printf("\n文件读取完成\n");
    
    // 删除文件
    if (remove(filename) == 0) {
        printf("文件已删除\n");
    } else {
        printf("删除文件失败\n");
    }
    
    printf("\n");
}

// 演示二进制文件操作
void demo_binary_file_operations(void) {
    printf("=== 二进制文件操作演示 ===\n");
    
    const char *filename = "students.dat";
    
    // 写入二进制文件
    struct Student students[] = {
        {1001, "张三", 20, 3.8f},
        {1002, "李四", 21, 3.6f},
        {1003, "王五", 19, 3.9f}
    };
    
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("无法创建二进制文件!\n");
        return;
    }
    
    fwrite(students, sizeof(struct Student), 3, file);
    fclose(file);
    printf("二进制文件写入完成\n");
    
    // 读取二进制文件
    file = fopen(filename, "rb");
    if (file == NULL) {
        printf("无法打开二进制文件!\n");
        return;
    }
    
    struct Student read_students[3];
    fread(read_students, sizeof(struct Student), 3, file);
    fclose(file);
    
    printf("\n从二进制文件读取的学生:\n");
    for (int i = 0; i < 3; i++) {
        printf("学生%d: %s (学号:%d, 年龄:%d, GPA:%.2f)\n", 
               i + 1, read_students[i].name, read_students[i].id, 
               read_students[i].age, read_students[i].gpa);
    }
    
    // 删除文件
    if (remove(filename) == 0) {
        printf("\n二进制文件已删除\n");
    } else {
        printf("\n删除二进制文件失败\n");
    }
    
    printf("\n");
}

// 演示联合体
void demo_unions() {
    printf("=== 联合体演示 ===\n");
    
    union Data {
        int int_val;
        float float_val;
        char char_val;
    };
    
    union Data data;
    
    data.int_val = 42;
    printf("int值: %d\n", data.int_val);
    
    data.float_val = 3.14f;
    printf("float值: %.2f\n", data.float_val);
    
    data.char_val = 'A';
    printf("char值: %c\n", data.char_val);
    
    printf("注意：联合体同时只能存储一个值\n");
    
    printf("\n");
}

// 演示枚举
void demo_enums() {
    printf("=== 枚举演示 ===\n");
    
    enum Color {
        RED,
        GREEN,
        BLUE,
        YELLOW,
        PURPLE
    };
    
    enum Color color = BLUE;
    
    printf("当前颜色: ");
    switch (color) {
        case RED:
            printf("红色\n");
            break;
        case GREEN:
            printf("绿色\n");
            break;
        case BLUE:
            printf("蓝色\n");
            break;
        case YELLOW:
            printf("黄色\n");
            break;
        case PURPLE:
            printf("紫色\n");
            break;
        default:
            printf("未知颜色\n");
            break;
    }
    
    // 枚举值
    printf("枚举值:\n");
    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);
    printf("YELLOW = %d\n", YELLOW);
    printf("PURPLE = %d\n", PURPLE);
    
    printf("\n");
}

// 主函数
void run_demo5(void) {
    printf("========== Demo5: C语言结构体和文件操作 ==========\n\n");
    
    demo_basic_structures();
    demo_typedef_structures();
    demo_nested_structures();
    demo_structure_arrays();
    demo_structure_pointers();
    demo_dynamic_structures();
    demo_file_operations();
    demo_binary_file_operations();
    demo_unions();
    demo_enums();
    
    printf("========== Demo5 结束 ==========\n\n");
}
