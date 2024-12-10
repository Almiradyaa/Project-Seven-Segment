// Dita Ayodya Al Mira _ D121241008
// NOMOR 9.47 BAGIAN C

#include <stdio.h>
#include <math.h>

#define SIZE 6


double calculate_mean(double data[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}


double calculate_std_deviation(double data[], int size, double mean) {
    double sum_deviation = 0.0;
    for (int i = 0; i < size; i++) {
        sum_deviation += pow(data[i] - mean, 2);
    }
    return sqrt(sum_deviation / size);
}


double find_maximum(double data[], int size) {
    double max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}


double find_minimum(double data[], int size) {
    double min = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

int main() {
    
    double data[SIZE] = {27.5, 13.4, 53.8, 29.2, 74.5, 87.0};

    double mean = calculate_mean(data, SIZE);
    printf("Mean: %.2f\n", mean);

    double std_deviation = calculate_std_deviation(data, SIZE, mean);
    printf("Standard Deviation: %.2f\n", std_deviation);

    double max_value = find_maximum(data, SIZE);
    printf("Maximum Value: %.2f\n", max_value);

    double min_value = find_minimum(data, SIZE);
    printf("Minimum Value: %.2f\n", min_value);
	
}

