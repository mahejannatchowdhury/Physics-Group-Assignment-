#include <stdio.h>
#include <math.h>

int main() {
    double l;
    int m;
    double a[3], t[3];

    printf("wavelength: ");
    scanf("%lf", &l);

    if (l < 380 || l > 750) {
               printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }

    printf("m: ");
    scanf("%d", &m);

    printf("3 slit values: ");
    for (int i=0;i<3;i++) scanf("%lf",&a[i]);

    for (int i=0;i<3;i++) {
        double x = (m*l)/(a[i]*1000.0);
        if (x > 1) t[i] = -1;
        else t[i] = asin(x)*180.0/M_PI;
    }

    printf("\nangles:\n");
    for (int i=0;i<3;i++) {
        if (t[i] < 0) printf("slit %d: invalid\n", i+1);
        else printf("slit %d: %.4f\n", i+1, t[i]);
    }

    int k=0;
    double mx=-1;
    for (int i=0;i<3;i++) {
        if (t[i] > mx) { mx = t[i]; k=i; }
    }

    printf("\nmax bend: slit %d\n", k+1);
    return 0;
}