int main () {
    int z, q, s, l;
    for (z = 1; z <= 5; z++)
        for (q = 1; q <= 5; q++)
            for (s = 1; s <= 5; s++)
                for (l = 1; l <= 5; l++)
                    if ((z != q) && (z != s) && (z != l) && (q != s) && (q != l) && (s != l) && (z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                        int a [4], t;
                        a[0] = z;
                        a[1] = q;
                        a[2] = s;
                        a[3] = l;
                        char b [5] = {"zqsl"}, temp;
                        for (int i = 1;
                        i < 4; i++)
                            for (int j = 0;
                            j < i; j++) {
                                if (a[j] < a[i]) {
                                    t = a[i];
                                    a[i] = a[j];
                                    a[j] = t;
                                    temp = b[i];
                                    b[i] = b[j];
                                    b[j] = temp;
                                }
                            }
                        for (int i = 0;
                        i < 4; i++) {
                            cout << b[i] << " " << a[i] * 10 << endl;
                        }
                        return 0;
                    }
    return 0;
}

