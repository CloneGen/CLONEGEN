int main () {
    double a, b;
    int i, L1, L2;
    char n [32], m [32];
    int p [32], q [32];
    cin >> a >> n >> b;
    L1 = strlen (n);
    for (i = 0; i < L1; i++) {
        p[i] = n[i];
        if (p[i] >= 97)
            p[i] = p[i] - 87;
        else if (p[i] >= 65)
            p[i] = p[i] - 55;
        else
            p[i] = p[i] - 48;
    }
    int dec = 0;
    for (i = 0; i < L1; i++)
        dec = dec + p[i] * pow (a, L1 -1 - i);
    if (dec == 0)
        cout << "0";
    else {
        for (i = 0; i < 32; i++)
            if (pow (b, i) > dec) {
                L2 = i;
                break;
            }
        for (i = 0; i < L2; i++) {
            q[i] = dec / (int) (pow (b, L2 -1 - i));
            dec = dec - q[i] * pow (b, L2 -1 - i);
        }
        for (i = 0; i < L2; i++) {
            if (q[i] < 10)
                m[i] = q[i] + 48;
            else
                m[i] = q[i] + 55;
        }
        m[L2] = '\0';
        cout << m;
    }
    return 0;
}

