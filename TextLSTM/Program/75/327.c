int main () {
    char in [10000], out [10000], *p = in, *q = out;
    int x [1000], y [1000], temp1 [5], temp2 [5], *r = temp1, *s = temp2, i = 0, j, count = 0, max = 0, period;
    for (i = 0; i < 1000; i++) {
        x[i] = y[i] = 0;
    }
    i = 0;
    cin >> in >> out;
    while (*p != 0) {
        if (*p == ',') {
            p++;
        }
        else {
            while (*p != ',' && *p != 0) {
                *r = *p - '0';
                p++;
                r++;
            }
            j = 0;
            while (r > temp1) {
                r--;
                x[i] = x[i] + (*r) * pow ((double) 10, j);
                j++;
                *r = 0;
            }
            i++;
        }
    }
    i = 0;
    while (*q != 0) {
        if (*q == ',') {
            q++;
        }
        else {
            while (*q != ',' && *q != 0) {
                *s = *q - '0';
                q++;
                s++;
            }
            j = 0;
            while (s > temp2) {
                s--;
                y[i] = y[i] + (*s) * pow ((double) 10, j);
                j++;
                *s = 0;
            }
            i++;
        }
    }
    cout << i << " ";
    for (period = 0; period < 1000; period++) {
        for (i = 0; i < 1000; i++) {
            if (x[i] <= period && y[i] > period) {
                count++;
            }
        }
        if (count > max) {
            max = count;
        }
        count = 0;
    }
    cout << max << endl;
    return 0;
}

