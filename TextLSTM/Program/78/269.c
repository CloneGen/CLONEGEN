int main () {
    int z, q, s, l, a [5] = {0}, p;
    char weight [5];
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            for (s = 1; s <= 5; s++) {
                for (l = 1; l <= 5; l++) {
                    if ((z + q == s + l) + (z + l > s + q) + (z + s < q) == 3) {
                        weight[z] = 'z';
                        weight[q] = 'q';
                        weight[s] = 's';
                        weight[l] = 'l';
                        a[1] = z;
                        a[2] = q;
                        a[3] = s;
                        a[4] = l;
                        for (int j = 1;
                        j < 4; j++) {
                            for (int i = 1;
                            i < 5 - j; i++) {
                                if (a[i] < a[i + 1]) {
                                    p = a[i];
                                    a[i] = a[i + 1];
                                    a[i + 1] = p;
                                }
                            }
                        }
                        for (int i = 1;
                        i < 5; i++) {
                            cout << weight[a[i]] << " " << a[i] * 10 << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

