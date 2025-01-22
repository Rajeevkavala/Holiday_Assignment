#include <stdio.h>

// Define the Complex structure
struct Complex {
    float real;
    float imaginary;
};

// Function to add two complex numbers
struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiply(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

// Function to display a complex number
void display(struct Complex c) {
    if (c.imaginary >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imaginary);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imaginary);
}

int main() {
    struct Complex c1, c2, sum, product;

    // Take input for the first complex number
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &c1.real, &c1.imaginary);

    // Take input for the second complex number
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &c2.real, &c2.imaginary);

    // Add the complex numbers
    sum = add(c1, c2);
    printf("Sum of the complex numbers: ");
    display(sum);

    // Multiply the complex numbers
    product = multiply(c1, c2);
    printf("Product of the complex numbers: ");
    display(product);

    return 0;
}
