//Find area of circle using pointers 

#include <stdio.h>
void calculateArea(float* radius, float* area) {
    *area = 3.14 * (*radius) * (*radius);
}
int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    calculateArea(&radius, &area);
    printf("Area of the circle: %.2f\n", area);
    return 0;
}

//Output
/*
Enter the radius of the circle: 3 
Area of the circle: 28.26
*/
