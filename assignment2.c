
#include <stdio.h>
#include <math.h>

int main() {
    double greenwavelenght = 530, redwavelenght = 700;
    int mg = 3, mr = 2;

    double tg = 65.0 * M_PI / 180.0;
    double d = (mg * greenwavelenght) / sin(tg);

    double x = (mr * redwavelenght) / d;
    if (x > 1) {
        printf("no angle\n");
        return 0;
    }

    double tr = asin(x) * 180.0 / M_PI;
    printf("%.4f\n", tr);

    return 0;
}
