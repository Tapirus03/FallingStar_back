#include <stdio.h>

int main() {
    print_menu();

    return 0;
}

int print_menu() {
    int n;

    printf("============================\n");
    printf(" 1. �ܹ��� \n");
    printf(" 2. ġ����� \n");
    printf(" 3. ������ġ \n");
    printf(" 4. ���� \n");
    printf("============================\n");

    printf("���ϴ� �޴��� �����Ͻÿ�: ");
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
        printf("�ܹ��� �޴� ȣ�� \n");
    else if (n == 2)
        printf("ġ����� �޴� ȣ�� \n");
    else if (n == 3)
        printf("������ġ �޴� ȣ�� \n");
    else
        printf("���� \n");
}