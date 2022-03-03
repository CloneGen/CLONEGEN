int main () {
    int a, b, c;
    char man [3];
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            for (c = 0; c < 3; c++) {
                int a1 = (b > a) + (c == a);
                int b1 = (a > b) + (a > c);
                int c1 = (c > b) + (b > a);
                if (((a + a1) == 2) && ((b + b1) == 2) && ((c + c1) == 2)) {
                    man[a] = 'A';
                    man[b] = 'B';
                    man[c] = 'C';
                    for (int i = 0;
                    i <= 2; i++) {
                        cout << man[i];
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}

