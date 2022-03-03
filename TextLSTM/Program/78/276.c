int main () {
    int z = 0, q = 0, s = 0, l = 0, w = 0;
    int i = 0, j = 0;
    char weight [6];
    for (i = 1; i <= 5; i++) {
        weight[i] = ' ';
    }
    for (z = 1; z <= 5; z++) {
        for (q = 1; q <= 5; q++) {
            if (z == q)
                continue;
            for (s = 1; s <= 5; s++) {
                if (z == s || q == s)
                    continue;
                for (l = 1; l <= 5; l++) {
                    if (z == l || s == l || q == l)
                        continue;
                    if ((z + q) == (s + l) && (z + l) > (s + q) && (z + s) < q) {
                        weight[z] = 'z';
                        weight[q] = 'q';
                        weight[s] = 's';
                        weight[l] = 'l';
                        for (j = 5; j >= 1; j--) {
                            if (weight[j] != ' ') {
                                w = j * 10;
                                cout << weight[j] << " " << w << endl;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

