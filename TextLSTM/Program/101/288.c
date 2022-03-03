int main () {
    int a [3], b;
    char d, c [3] = {'A', 'B', 'C'};
    for (int i = 1;
    i < 4; i++) {
        for (int j = 1;
        j < 4; j++) {
            if (i != j) {
                for (int k = 1;
                k < 4; k++) {
                    if (i != k && j != k) {
                        int e, f, g;
                        e = (j > i) + (k == i) + i;
                        f = (i > j) + (i > k) + j;
                        g = (k > j) + (j > i) + k;
                        if (e == 3 && f == 3 && g == 3) {
                            a[0] = i;
                            a[1] = j;
                            a[2] = k;
                            break;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0;
    i < 2; i++) {
        for (int j = 0;
        j < 2 - i; j++) {
            if (a[j] > a[j + 1]) {
                b = a[j];
                d = c[j];
                a[j] = a[j + 1];
                c[j] = c[j + 1];
                a[j + 1] = b;
                c[j + 1] = d;
            }
        }
    }
    for (int i = 0;
    i < 3; i++) {
        cout << c[i];
    }
    return 0;
}

