int main () {
    int wz, wq, ws, wl;
    int i, j;
    char a [5];
    int b [5];
    int p, t;
    for (wz = 10; wz <= 50; wz = wz + 10)
        for (wq = 10; wq <= 50; wq = wq + 10)
            for (ws = 10; ws <= 50; ws = ws + 10)
                for (wl = 10; wl <= 50; wl = wl + 10) {
                    if (wz + wq == ws + wl && wz + wl > ws + wq && wz + ws < wq) {
                        a[1] = 'z';
                        a[2] = 'q';
                        a[3] = 's';
                        a[4] = 'l';
                        b[1] = wz;
                        b[2] = wq;
                        b[3] = ws;
                        b[4] = wl;
                    }
                }
    for (j = 1; j <= 3; j++)
        for (i = 1; i <= 4 - j; i++)
            if (b[i] < b[i + 1]) {
                p = a[i];
                a[i] = a[i + 1];
                a[i + 1] = p;
                t = b[i];
                b[i] = b[i + 1];
                b[i + 1] = t;
            }
    for (i = 1; i <= 4; i++) {
        cout << a[i] << " " << b[i] << endl;
    }
    return 0;
}

