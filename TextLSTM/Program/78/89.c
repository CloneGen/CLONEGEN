int main () {
    int z, q, s, l, i, a [4];
    for (z = 10; z <= 50; z = z + 10) {
        for (q = 10; q <= 50; q = q + 10) {
            for (s = 10; s <= 50; s = s + 10) {
                for (l = 10; l <= 50; l = l + 10) {
                    if (z + q == s + l && z + l > s + q && z + s < q) {
                        a[0] = z;
                        a[1] = q;
                        a[2] = s;
                        a[3] = l;
                    }
                }
            }
        }
    }
    for (i = 50; i >= 10; i = i - 10) {
        if (a[0] == i)
            cout << "z" << " " << a[0] << endl;
        if (a[1] == i)
            cout << "q" << " " << a[1] << endl;
        if (a[2] == i)
            cout << "s" << " " << a[2] << endl;
        if (a[3] == i)
            cout << "l" << " " << a[3] << endl;
    }
    cin >> i;
    return 0;
}

