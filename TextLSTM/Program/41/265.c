int main () {
    int a [5], b [5], c [5], d [5], e [5];
    for (int i = 0;
    i < 5; i++) {
        a[i] = i + 1;
        b[i] = i + 1;
        c[i] = i + 1;
        d[i] = i + 1;
        e[i] = i + 1;
    }
    for (int k = 0;
    k < 5; k++)
        for (int j = 0;
        j < 5; j++)
            for (int l = 0;
            l < 5; l++)
                for (int h = 0;
                h < 5; h++)
                    for (int m = 0;
                    m < 5; m++) {
                        if (((a[k] == 1 || a[k] == 2) ? (e[m] == 1) : (e[m] != 1)) && ((b[j] == 1 || b[j] == 2) ? (b[j] == 2) : (b[j] != 2)) && ((c[l] == 1 || c[l] == 2) ? (a[k] == 5) : (a[k] != 5)) && ((d[h] == 1 || d[h] == 2) ? (c[l] != 1) : (c[l] == 1)) && ((e[m] == 1 || e[m] == 2) ? (d[h] == 1) : (d[h] != 1)) && (e[m] != 2) && (e[m] != 3) && (a[k] + b[j] + c[l] + d[h] + e[m] == 15) && (a[k] != b[j]) && (a[k] != c[l]) && (a[k] != d[h]) && (a[k] != e[m]) && (b[j] != c[l]) && (b[j] != d[h]) && (b[j] != e[m]) && (c[l] != d[h]) && (c[l] != e[m]) && (d[h] != e[m]))
                            cout << a[k] << " " << b[j] << " " << c[l] << " " << d[h] << " " << e[m] << endl;
                    }
    return 0;
}

