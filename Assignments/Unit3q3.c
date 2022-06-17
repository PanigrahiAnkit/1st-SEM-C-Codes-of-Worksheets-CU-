#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
} s;

int main() {
    printf("Enter the information:\n");
    printf("Enter the name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter the roll number: ");
    scanf("%d", &s.roll);
    printf("Enter the marks: ");
    scanf("%f", &s.marks);

    printf("Now Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}
