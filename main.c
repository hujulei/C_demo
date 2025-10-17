#include <stdio.h>
#include "main.h"

int main() {
    int choice, num1, num2;

    while (1) { // 无限循环，直到用户选择退出
        print_menu();
        printf("请输入您的选择 (1-4): ");
        choice = get_user_input();

        if (choice == 4) {
            printf("程序已退出。\n");
            break; // 退出循环
        }

        printf("请输入第一个数字: ");
        num1 = get_user_input();
        printf("请输入第二个数字: ");
        num2 = get_user_input();

        switch (choice) {
            case 1: // 加法
                printf("结果: %d + %d = %d\n", num1, num2, add(num1, num2));
                break;
            case 2: // 减法
                printf("结果: %d - %d = %d\n", num1, num2, subtract(num1, num2));
                break;
            case 3: // 判断奇偶
                printf("第一个数字是 %s\n", is_even(num1) ? "偶数" : "奇数");
                printf("第二个数字是 %s\n", is_even(num2) ? "偶数" : "奇数");
                break;
            default:
                printf("无效输入，请重试！\n");
        }
    }

    return 0;
}

// 函数定义
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }

bool is_even(int num) { return num % 2 == 0; }

void print_menu() {
    printf("\n------ 菜单 ------\n");
    printf("1. 加法\n");
    printf("2. 减法\n");
    printf("3. 判断奇偶\n");
    printf("4. 退出\n");
}

int get_user_input() {
    int input;
    scanf("%d", &input);
    return input;
}