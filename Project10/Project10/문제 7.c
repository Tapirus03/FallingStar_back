#include <stdio.h>

int main() {
    int n;
    int even_n, sign_n;

    printf("������ �Է��Ͻÿ�: ");
    scanf_s("%d", &n);

    even_n = even(n);
    sign_n = sign(n);

    printf("even()�� ���: ");
    if (even_n == 1)   
        printf("¦�� \n");
    else           
        printf("Ȧ�� \n");

    printf("absolute()�� ���: %d \n", absolute(n));

    printf("sign()�� ���: ");
    if (sign_n == -1)        
        printf("���� \n");
    else if (sign_n == 1)    
        printf("��� \n");
    else                   
        printf("0 \n");

    return 0;
}

int even(int n) {
    if (n % 2 == 0)    
        return 1;
    else           
        return 0;
}
int absolute(int n) {
    if (n >= 0)       
        return n;
    else           
        return (-n);
}
int sign(int n) {
    if (n > 0)       
        return 1;
    else if (n < 0)   
        return (-1);
    else           
        return 0;
}