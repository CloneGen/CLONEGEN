int main () {
    int a [3], t [3], i, j, k, temp;
    char c1 [3], c2 [3], c;
    for (a[0] = 1; a[0] <= 3; a[0]++)
        for (a[1] = 1; a[1] <= 3; a[1]++)
            for (a[2] = 1; a[2] <= 3; a[2]++) {
                t[0] = (a[1] > a[0]) + (a[2] == a[0]);
                t[1] = (a[0] > a[1]) + (a[0] > a[2]);
                t[2] = (a[2] > a[1]) + (a[1] > a[0]);
                c1[0] = c2[0] = 'A';
                c1[1] = c2[1] = 'B';
                c1[2] = c2[2] = 'C';
                for (i = 0; i < 3; i++) {
                    for (j = 1; j < 3; j++)
                        if (a[j] > a[j - 1]) {
                            k = j - 1;
                            temp = a[i];
                            a[i] = a[k];
                            a[k] = temp;
                            c = c1[i];
                            c1[i] = c1[k];
                            c1[k] = c;
                        }
                }
                for (i = 0; i < 3; i++) {
                    for (j = 1; j < 3; j++)
                        if (t[j] > t[j - 1]) {
                            k = j - 1;
                            temp = t[i];
                            t[i] = t[k];
                            t[k] = temp;
                            c = c2[i];
                            c2[i] = c2[k];
                            c2[k] = c;
                        }
                }
                if ((c1[0] == c2[2]) && (c1[1] == c2[1]) && (c1[2] == c2[0])) {
                    cout << c1[0] << c1[1] << c1[2] << endl;
                    return 0;
                }
            }
    return 0;
}

