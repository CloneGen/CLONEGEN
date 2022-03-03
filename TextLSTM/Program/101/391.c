int main () {
    int x [3] = {0, 0, 0};
    for (int a = 0;
    a < 3; a++)
        for (int b = 0;
        b < 3; b++)
            for (int c = 0;
            c < 3; c++) {
                int o = (b > a);
                int p = (c == a);
                int q = (a > b);
                int r = (a > c);
                int s = (c > b);
                int t = (b > a);
                if (o + p + q + r + s + t == 3 && a + o + p == 2 && b + q + r == 2 && c + s + t == 2) {
                    x[0] = a;
                    x[1] = b;
                    x[2] = c;
                }
            }
    for (int i = 0;
    i < 3; i++)
        for (int j = 0;
        j < 3; j++) {
            if (x[j] == i) {
                char a = 65 + j;
                cout << a;
            }
        }
    return 0;
}

