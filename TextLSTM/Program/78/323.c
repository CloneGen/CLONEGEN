void shuchu (int, int, int, int);

int main (void) {
    int z, q, s, l;
    for (z = 10; z <= 50; z += 10)
        for (q = 10; q <= 50; q += 10)
            for (s = 10; s <= 50; s += 10)
                for (l = 10; l <= 50; l += 10) {
                    if (z == q || z == s || z == l || q == s || q == l || s == l)
                        continue;
                    if (z + q != s + l)
                        continue;
                    if (z + l <= s + q)
                        continue;
                    if (z + s >= q)
                        continue;
                    shuchu (z, q, s, l);
                }
    return 0;
}

void shuchu (int z, int q, int s, int l) {
    for (int i = 50;
    i >= 10; i -= 10) {
        if (i == z)
            cout << "z " << z << endl;
        else if (i == q)
            cout << "q " << q << endl;
        else if (i == s)
            cout << "s " << s << endl;
        else if (i == l)
            cout << "l " << l << endl;
    }
}

