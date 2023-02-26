#include <stdio.h>
#include <math.h>

#define f(x) x*x-x-2

int main(void) {
    // Initialize variables
    double x0 = 1, x1 = 3, x2, f0, f1, f2, tol = 1e-6, max_iters = 1000;
    int n = 1;

    // Evaluate the function at the initial points
    f0 = f(x0);
    f1 = f(x1);

    // Use linear interpolation to find next approximation to root
    x2 = x1 - f1 * (x1 - x0) / (f1 - f0);
    f2 = f(x2);

    // Loop until convergence or maximum number of iterations reached
    while (fabs(x2 - x1) > tol && n < max_iters) {
        // Check if root is bracketed
        if (f1 * f2 < 0) {
            x0 = x1;
            f0 = f1;
        } else {
            x0 = x0;
            f0 = f0;
        }

        x1 = x2;
        f1 = f2;

        // Use linear interpolation to find next approximation to root
        x2 = x1 - f1 * (x1 - x0) / (f1 - f0);
        f2 = f(x2);

        // Increment iteration counter
        n = n + 1;
    }

    // Print result
    printf("x = %.10f, n = %d\n", x2, n);

    return 0;
}
