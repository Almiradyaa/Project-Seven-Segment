/* DITA AYODYA AL MIRA-D121241008 */
 // NOMOR 9.43
 
#include <stdio.h>
#include <math.h>

// Function to calculate y = 2e^(-0.1t) sin(0.9t)
double calculate_y(double t) {
    return 2 * exp(-0.1 * t) * sin(0.9 * t);
}

int main() {
    double t_increment, t;
    int i;

    // Get the size of the t-increment from the user
    printf("Enter the size of the t-increment: ");
    scanf("%lf", &t_increment);

    // Print the header of the table
    printf("t\t\ty = 2e^(-0.1t) sin(0.9t)\n");

    // Generate the table of values
    for (i = 0, t = 0; t <= 60; i++, t += t_increment) {
        double y = calculate_y(t);
        printf("%f\t%f\n", t, y);
    }

    return 0;
}
