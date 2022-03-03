int dec (char nf [100], int ii, int sysf) {
    int sum = 0, exp = 1;
    int k, j;
    for (k = ii; k >= 0; k--) {
        if (ii != k)
            exp = exp * sysf;
        sum += ((int) nf[k]) * exp;
    }
    return sum;
}

void trans (char outf [100], int pos, int decf, int sysf) {
    int rem, t;
    while ((decf != 0) && (pos >= 0)) {
        rem = decf % sysf;
        decf = (int) (decf / sysf);
        if ((rem >= 0) && (rem <= 9))
            outf[pos] = rem + 48;
        else if ((rem >= 10) && (rem <= 35))
            outf[pos] = rem + 55;
        pos--;
    }
    for (t = pos + 1; t <= 99; t++)
        cout << outf[t];
    cout << endl;
}

int main () {
    int a, b, i = 0, k, temp;
    char n [100], c;
    char output [100];
    cin >> a;
    getchar ();
    while (c = getchar (), c != ' ') {
        n[i] = c;
        i++;
    }
    i--;
    cin >> b;
    for (k = 0; k <= i; k++) {
        if ((n[k] >= 'a') && (n[k] <= 'z'))
            n[k] -= 87;
        else if ((n[k] >= 'A') && (n[k] <= 'Z'))
            n[k] -= 55;
        else if ((n[k] >= '0') && (n[k] <= '9'))
            n[k] -= 48;
    }
    temp = dec (n, i, a);
    if (temp == 0)
        cout << "0" << endl;
    else
        trans (output, 99, temp, b);
    return 0;
}

