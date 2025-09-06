#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    double productFloat, averageFloat;

    // Input four integers
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    // Calculate product and average using integer arithmetic
    int productInt = num1 * num2 * num3 * num4;
    int averageInt = (num1 + num2 + num3 + num4) / 4;

    // Calculate product and average using floating-point arithmetic
    double num1Float = (double)num1;
    double num2Float = (double)num2;
    double num3Float = (double)num3;
    double num4Float = (double)num4;

    productFloat = num1Float * num2Float * num3Float * num4Float;
    averageFloat = (num1Float + num2Float + num3Float + num4Float) / 4.0;

    // Output the product and average using integer arithmetic
    printf("%d %d\n", productInt, averageInt);

    // Output the product and average using floating-point arithmetic with three decimal places
    printf("%0.3lf %0.3lf\n", productFloat, averageFloat);

    return 0;
}
