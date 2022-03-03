main () {
    double a, b, c, d, alfa1, s;
    scanf ("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &alfa1);
    double alfa2 = (alfa1 / 2) * (PI) / 180;
    s = (a + b + c + d) / 2;
    double delta = (s - a) * (s - b) * (s - c) * (s - d);
    if (delta < 0 || a < 0 || b < 0 || c < 0 || d < 0 || alfa1 <= 0 || alfa1 >= 360)
        printf ("Invalid input\n");
    else {
        double S = delta - a * b * c * d * cos (alfa2) * cos (alfa2);
        if (S <= 0)
            printf ("Invalid input\n");
        else
            printf ("%.4lf", sqrt (S));
    }
}

