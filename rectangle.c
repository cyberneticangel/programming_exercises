#include <stdio.h>



int calc_perimeter(int rec_height, int rec_width) {
    return 2*(rec_height + rec_width);
}

int calc_area(int rec_height, int rec_width) {
    return rec_height * rec_width;
}

int main() {
// Task: Compute perimeter and area of a rectangle given the two values for height and width 
    printf("Perimeter: %d\n", calc_perimeter(5, 7));
    printf("Area: %d\n", calc_area(5, 7));
    return 0;
}