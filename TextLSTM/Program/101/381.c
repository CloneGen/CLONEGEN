int main () {
    int a [3], b [3], d [3], e [3];
    char c [3];
    c[0] = 'A';
    c[1] = 'B';
    c[2] = 'C';
    for (a[0] = 0; a[0] < 3; a[0]++)
        for (a[1] = 0; a[1] < 3; a[1]++)
            for (a[2] = 0; a[2] < 3; a[2]++) {
                for (int p = 0;
                p < 3; p++)
                    b[p] = 0;
                if (a[1] > a[0])
                    b[0]++;
                if (a[0] == a[2])
                    b[0]++;
                if (a[0] > a[1])
                    b[1]++;
                if (a[0] > a[2])
                    b[1]++;
                if (a[2] > a[1])
                    b[2]++;
                if (a[1] > a[0])
                    b[2]++;
                for (int i = 0;
                i < 3; i++) {
                    d[i] = 0;
                    e[i] = 0;
                }
                for (int i = 0;
                i < 3; i++)
                    for (int j = 0;
                    j < 3; j++) {
                        if (a[i] > a[j])
                            d[i]++;
                        if (b[i] > b[j])
                            e[i]++;
                    }
                for (int j = 0;
                j < 3; j++) {
                    if (d[0] + e[0] == 2 && d[1] + e[1] == 2 && d[2] + e[2] == 2 && d[j] == 0)
                        cout << c[j];
                }
                for (int j = 0;
                j < 3; j++) {
                    if (d[0] + e[0] == 2 && d[1] + e[1] == 2 && d[2] + e[2] == 2 && d[j] == 1)
                        cout << c[j];
                }
                for (int j = 0;
                j < 3; j++) {
                    if (d[0] + e[0] == 2 && d[1] + e[1] == 2 && d[2] + e[2] == 2 && d[j] == 2)
                        cout << c[j];
                }
            }
    return 0;
}

