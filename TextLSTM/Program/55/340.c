int main () {
    unsigned int decn = 0;
    int a, b, i, k;
    char n [100], r [100];
    cin >> a >> n >> b;
    for (i = 0; i < 100; i++) {
        if (n[i] == 0) {
            k = i;
            break;
        }
    }
    for (i = 0; i < k; i++) {
        if (n[i] <= 57) {
            decn = decn + (n[i] - 48) * pow ((double) a, (int) k - i - 1);
        }
        else if (n[i] <= 90) {
            decn = decn + (n[i] - 55) * pow ((double) a, (int) k - i - 1);
        }
        else {
            decn = decn + (n[i] - 87) * pow ((double) a, (int) k - i - 1);
        }
    }
    i = 0;
    do {
        r[i] = decn % b;
        if (r[i] < 10) {
            r[i] = r[i] + 48;
        }
        else {
            r[i] = r[i] + 55;
        }
        decn = decn / b;
        i++;
    }
    while (decn != 0);
    i = i - 1;
    for (; i >= 0; i--) {
        cout << r[i];
    }
    return 0;
}

