int main () {
    int a, b, c, sum1, sum2, sum3;
    int i, j, sum = 0;
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            for (c = 0; c < 3; c++) {
                sum1 = (b > a) + (c == a);
                sum2 = (a > b) + (a > c);
                sum3 = (c > b) + (b > a);
                int m [3] = {sum1, sum2, sum3}, q;
                if (sum1 + sum2 + sum3 != 3)
                    continue;
                else {
                    int n [3] = {a, b, c}, p;
                    char o [3] = {'A', 'B', 'C'}, e;
                    o[0] = 'A';
                    o[1] = 'B';
                    o[2] = 'C';
                    for (i = 0; i < 3; i++) {
                        for (j = 0; j < 2; j++) {
                            if (n[j] > n[j + 1]) {
                                p = n[j];
                                n[j] = n[j + 1];
                                n[j + 1] = p;
                                q = m[j];
                                m[j] = m[j + 1];
                                m[j + 1] = q;
                                e = o[j];
                                o[j] = o[j + 1];
                                o[j + 1] = e;
                            }
                        }
                    }
                    sum = 0;
                    for (i = 0; i < 3; i++) {
                        if (n[i] + m[i] == 2)
                            sum = sum + 1;
                    }
                    if (sum == 3) {
                        for (i = 0; i < 3; i++)
                            cout << o[i];
                    }
                    break;
                }
            }
        }
    }
    cin.get ();
    return 0;
}

