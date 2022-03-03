int main () {
    int a, b, c;
    for (a = 1; a <= 3; a++)
        for (b = 1; b <= 3; b++)
            for (c = 1; c <= 3; c++)
                if (a + (b > a) + (c == a) == 3 && b + (a > b) + (a > c) == 3 && c + (c > b) + (b > a) == 3) {
                    int k, min = 10, n [3], i, j;
                    char m [3];
                    m[0] = 'A';
                    m[1] = 'B';
                    m[2] = 'C';
                    n[0] = a;
                    n[1] = b;
                    n[2] = c;
                    for (k = 0; k < 3; k++) {
                        for (i = 0; i < 3; i++) {
                            if (min > n[i]) {
                                min = n[i];
                                j = i;
                            }
                        }
                        cout << (char) (m[j]);
                        n[j] = 10;
                        min = 10;
                    }
                }
    return 0;
}

