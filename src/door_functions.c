#include <stdio.h>
#include <math.h>

int main() {
    const int num_measurements = 42;
    const double pi = 3.14159265359;

    for (int i = 0; i <= num_measurements; i++) {
        double x = -pi + i * (2 * pi) / num_measurements;
        double v_bezier = 1 - 2 * pow(x, 2) + pow(x, 4);
        double v_lemniscate = sqrt(1 + pow(x, 2));
        double v_hyperbola = 1 / (1 - pow(x, 2));

        printf("%.7f | %.7f | %.7f | %.7f\n", x, v_bezier, v_lemniscate, v_hyperbola);
    }

    return 0;
}
