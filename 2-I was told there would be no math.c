#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculate_total_area(int length, int width, int height);

int main() {
    int length, width, height = -1;
    int total_area = 0;
    printf("Enter all present dimensions, in format #x#x# | Enter '-1' to get total area of required wraping paper\n");
    while (1) {
        scanf("%dx%dx%d", &length, &width, &height);
        if (length == -1) {
            break;
        }
        total_area += calculate_total_area(length, width, height);
    }
    printf("The total area of all the presents is: %d square feet", total_area);
    return 0;
}

// Function to calculate the required wrapping paper for the present
int calculate_total_area(int length, int width, int height) {
    int area = 0;
    int side1 = length * width;
    int side2 = width * height;
    int side3 = length * height;
    int smallest_side = side1;
    if (smallest_side > side2)
        smallest_side = side2;
    if (smallest_side > side3)
        smallest_side = side3;
    // printf("%d smallest side\n", smallest_side);
    area = 2*side1 + 2*side2 + 2*side3 + smallest_side;
    return area;
}