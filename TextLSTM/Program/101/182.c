int main () {
    int a, b, c, ai, bi, ci;
    char k [3];
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            for (c = 0; c < 3; c++) {
                ai = 0;
                bi = 0;
                ci = 0;
                if (b > a)
                    ai++;
                if (c == a)
                    ai++;
                if (b < a)
                    bi++;
                if (c < a)
                    bi++;
                if (c > b)
                    ci++;
                if (b > a)
                    ci++;
                if ((a + ai == 2) && (b + bi == 2) && (c + ci == 2)) {
                    k[a] = 'A';
                    k[b] = 'B';
                    k[c] = 'C';
                    cout << k[0] << k[1] << k[2] << endl;
                }
            }
        }
    }
    return 0;
}

