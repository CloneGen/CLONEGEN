int main () {
    int z, q, s, l;
    char c [51];
    for (z = 10; z <= 50; z += 10)
        for (q = 10; q <= 50; q += 10) {
            if (q == z)
                continue;
            for (s = 10; s <= 50; s += 10) {
                if (s == z || s == q)
                    continue;
                for (l = 10; l <= 50; l += 10) {
                    if (l == z || l == q || l == s)
                        continue;
                    else if ((z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                        c[z] = 'z';
                        c[q] = 'q';
                        c[s] = 's';
                        c[l] = 'l';
                        for (int i = 50;
                        i >= 10; i -= 10) {
                            if ((i == z) || (i == q) || (i == s) || (i == l))
                                cout << c[i] << ' ' << i << endl;
                        }
                    }
                }
            }
        }
    return 0;
}

