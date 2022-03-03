int leap (int);

int main () {
    int sy, sm, sd, ey, em, ed, sum = 0, a [13], b [13], i;
    for (i = 1; i < 13; i++) {
        if (i == 2) {
            a[i] = 28;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11) {
            a[i] = 30;
        }
        else {
            a[i] = 31;
        }
    }
    for (i = 1; i < 13; i++) {
        if (i == 2) {
            b[i] = 29;
        }
        else if (i == 4 || i == 6 || i == 9 || i == 11) {
            b[i] = 30;
        }
        else {
            b[i] = 31;
        }
    }
    cin >> sy >> sm >> sd >> ey >> em >> ed;
    if (sy == ey) {
        if (sm == em) {
            sum += ed - sd;
        }
        else {
            for (i = sm + 1; i <= em - 1; i++) {
                if (i == 2) {
                    if (leap (sy)) {
                        sum += b[i];
                    }
                    else {
                        sum += a[i];
                    }
                }
                else {
                    sum += a[i];
                }
            }
            sum = sum + ed - 1;
            if (sm == 2) {
                if (leap (sy)) {
                    sum += b[2] - sd + 1;
                }
                else {
                    sum += a[2] - sd + 1;
                }
            }
            else {
                sum = sum + a[sm] - sd + 1;
            }
        }
        cout << sum << endl;
    }
    else {
        for (i = sy + 1; i <= ey - 1; i++) {
            if (leap (i)) {
                sum += 366;
            }
            else {
                sum += 365;
            }
        }
        for (i = 1; i <= em - 1; i++) {
            if (i == 2) {
                if (leap (ey)) {
                    sum += b[i];
                }
                else {
                    sum += a[i];
                }
            }
            else {
                sum += a[i];
            }
        }
        sum += ed - 1;
        for (i = sm + 1; i <= 12; i++) {
            if (i == 2) {
                if (leap (sy)) {
                    sum += b[i];
                }
                else {
                    sum += a[i];
                }
            }
            else {
                sum += a[i];
            }
        }
        if (sm == 2) {
            if (leap (sy)) {
                sum += b[2] - sd + 1;
            }
            else {
                sum += a[2] - sd + 1;
            }
        }
        else {
            sum += a[sm] - sd + 1;
        }
        cout << sum << endl;
    }
    return 0;
}

int leap (int n) {
    if (n % 100 == 0) {
        if (n % 400 == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        if (n % 4 == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }
    return 0;
}

