int main () {
    int z, q, s, l, i;
    char a [6];
    memset (a, 0, sizeof (a));
    for (z = 10; z <= 50; z += 10)
        for (q = 10; q <= 50; q += 10)
            for (s = 10; s <= 50; s += 10)
                for (l = 10; l <= 50; l += 10)
                    if ((z + q == s + l) && (z + l > s + q) && (z + s < q) && (z != q) && (z != s) && (z != l) && (q != s) && (q != l && (s != l))) {
                        a[z / 10] = 'z';
                        a[q / 10] = 'q';
                        a[s / 10] = 's';
                        a[l / 10] = 'l';
                        for (i = 5; i >= 1; i--)
                            if (a[i] != '\0')
                                cout << a[i] << ' ' << i * 10 << endl;
                        break;
                    }
    return 0;
}

