int main () {
    int A, B, C, D, E, y, x1, x2, x3, x4, x;
    scanf ("%d\n", &x1);
    scanf ("%d\n", &x2);
    scanf ("%d\n", &x3);
    scanf ("%d\n", &x4);
    x = x1;
    if (x < 10)
        y = x;
    else {
        if (x < 100) {
            A = x / 10;
            B = x % 10;
            y = B *10 + A;
        }
        else {
            if (x < 1000) {
                A = x / 100;
                B = x % 100 / 10;
                C = x % 10;
                y = C *100 + B *10 + A;
            }
            else {
                if (x < 10000) {
                    A = x / 1000;
                    B = x % 1000 / 100;
                    C = x % 100 / 10;
                    D = x % 10;
                    y = D *1000 + C *100 + B *10 + A;
                }
                else
                    A = x / 10000;
                B = x % 10000 / 1000;
                C = x % 1000 / 100;
                D = x % 100 / 10;
                E = x % 10;
                y = E *10000 + D *1000 + C *100 + B *10 + A;
            }
        }
    }
    printf ("%d\n", y);
    x = x2;
    if (x < 10)
        y = x;
    else {
        if (x < 100) {
            A = x / 10;
            B = x % 10;
            y = B *10 + A;
        }
        else {
            if (x < 1000) {
                A = x / 100;
                B = x % 100 / 10;
                C = x % 10;
                y = C *100 + B *10 + A;
            }
            else {
                if (x < 10000) {
                    A = x / 1000;
                    B = x % 1000 / 100;
                    C = x % 100 / 10;
                    D = x % 10;
                    y = D *1000 + C *100 + B *10 + A;
                }
                else
                    A = x / 10000;
                B = x % 10000 / 1000;
                C = x % 1000 / 100;
                D = x % 100 / 10;
                E = x % 10;
                y = E *10000 + D *1000 + C *100 + B *10 + A;
            }
        }
    }
    printf ("%d\n", y);
    x = x3;
    if (x < 10)
        y = x;
    else {
        if (x < 100) {
            A = x / 10;
            B = x % 10;
            y = B *10 + A;
        }
        else {
            if (x < 1000) {
                A = x / 100;
                B = x % 100 / 10;
                C = x % 10;
                y = C *100 + B *10 + A;
            }
            else {
                if (x < 10000) {
                    A = x / 1000;
                    B = x % 1000 / 100;
                    C = x % 100 / 10;
                    D = x % 10;
                    y = D *1000 + C *100 + B *10 + A;
                }
                else
                    A = x / 10000;
                B = x % 10000 / 1000;
                C = x % 1000 / 100;
                D = x % 100 / 10;
                E = x % 10;
                y = E *10000 + D *1000 + C *100 + B *10 + A;
            }
        }
    }
    printf ("%d\n", y);
    x = x4;
    if (x < 10)
        y = x;
    else {
        if (x < 100) {
            A = x / 10;
            B = x % 10;
            y = B *10 + A;
        }
        else {
            if (x < 1000) {
                A = x / 100;
                B = x % 100 / 10;
                C = x % 10;
                y = C *100 + B *10 + A;
            }
            else {
                if (x < 10000) {
                    A = x / 1000;
                    B = x % 1000 / 100;
                    C = x % 100 / 10;
                    D = x % 10;
                    y = D *1000 + C *100 + B *10 + A;
                }
                else
                    A = x / 10000;
                B = x % 10000 / 1000;
                C = x % 1000 / 100;
                D = x % 100 / 10;
                E = x % 10;
                y = E *10000 + D *1000 + C *100 + B *10 + A;
            }
        }
    }
    printf ("%d", y);
    return 0;
}

