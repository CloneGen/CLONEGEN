double a, b, c, d;
double limit = 0.05;
int n;

int main () {
    scanf ("%d", &n);
    scanf ("%lf%lf", &a, &b);
    double t = b / a;
    for (int i = 1;
    i < n; i++) {
        scanf ("%lf%lf", &c, &d);
        double t1 = d / c;
        if (t1 - t > limit)
            printf ("better\n");
        else if (t - t1 > limit)
            printf ("worse\n");
        else
            printf ("same\n");
    }
    return 0;
}

