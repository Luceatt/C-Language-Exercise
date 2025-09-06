#include <stdio.h>

int main() {
    // Declare and initialize a constant variable
    const int myConstant = 10;

    // Attempting to modify a constant variable will result in a compilation error
    // Uncommenting the line below will result in a compilation error:
	// myConstant = 20;

    // Display the value of the constant variable
    printf("The value of myConstant is: %d\n", myConstant);

    return 0;
}
