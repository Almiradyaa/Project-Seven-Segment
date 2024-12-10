// DITA AYODYA AL MIRA 
// D121241008
// NOMOR 9.47 BAGIAN D

#include <stdio.h>

// Function to perform Lagrange interpolation
double lagrange_interpolation(double x[], double y[], int n, double xp) {
    double yp = 0.0;

    // Lagrange interpolation formula
    for (int i = 0; i < n; i++) {
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (i != j) {
                term = term * (xp - x[j]) / (x[i] - x[j]);
            }
        }
        yp += term;
    }

    return yp;
}

int main() {
    int n = 10; // Number of data points
    double x[] = {0, 20, 30, 40, 50, 60, 80, 120, 140, 180};
    double y[] = {0.21073, 0.45482, 0.49011, 0.50563, 0.49245, 0.46922, 0.43433, 0.33824, 0.29390, 0.19390};

    // Values of x at which we want to interpolate y
    double xp_values[] = {13.7, 37.2, 112, 147};
    int num_xp = sizeof(xp_values) / sizeof(xp_values[0]);

    for (int i = 0; i < num_xp; i++) {
        double xp = xp_values[i];
        double yp = lagrange_interpolation(x, y, n, xp);
        printf("Interpolated value of y at x = %.2f is %.5f\n", xp, yp);
    }

}

