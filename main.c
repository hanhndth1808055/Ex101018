#include <stdio.h>
#include <stdlib.h>
float nuaChuVi(int *a, int *b, int *c) {
    printf("Ket qua la %.2f", (float)(*a + *b + *c)/2);
}

int main() {

    int canh1;
    int canh2;
    int canh3;
    printf("Vui long nhap 3 canh cua tam giac.\n");
    printf("Canh thu nhat:\n");
    scanf("%d", &canh1);
    printf("Canh thu hai:\n");
    scanf("%d", &canh2);
    printf("Canh thu ba:\n");
    scanf("%d", &canh3);
    if (canh1 <= 0 || canh2 <= 0 || canh3 <= 0) {
        printf("Do dai mot canh tam giac khong the nho hon hoac bang 0.\n");
        return 0;
    }
    if (canh1 + canh2 <= canh3 || canh1 + canh3 <= canh2 || canh2 + canh3 <= canh1) {
        printf("Tong hai canh cua mot tam giac luon phai lon hon canh con lai.\n");
        return 0;
    }
    nuaChuVi(&canh1, &canh2, &canh3);

    return 0;
}