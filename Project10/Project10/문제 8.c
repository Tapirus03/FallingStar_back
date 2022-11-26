#include <stdio.h>

int main() {
    print_menu();

    return 0;
}

int print_menu() {
    int n;

    printf("============================\n");
    printf(" 1. 햄버거 \n");
    printf(" 2. 치즈버거 \n");
    printf(" 3. 샌드위치 \n");
    printf(" 4. 종료 \n");
    printf("============================\n");

    printf("원하는 메뉴를 선택하시오: ");
    scanf_s("%d", &n);

    check_menu_number(n);
}
int check_menu_number(int n) {
    if (n < 1 || n > 4)
        print_menu();
    else
        call_menu(n);
}
int call_menu(int n) {
    if (n == 1)
        printf("햄버거 메뉴 호출 \n");
    else if (n == 2)
        printf("치즈버거 메뉴 호출 \n");
    else if (n == 3)
        printf("샌드위치 메뉴 호출 \n");
    else
        printf("종료 \n");
}