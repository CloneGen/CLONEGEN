int main () {
    int a, b, c, AA1, AA2, BB1, BB2, CC1, CC2, i;
    char str [3];
    for (a = 0; a <= 2; a++) {
        for (b = 0; b <= 2; b++) {
            for (c = 0; c <= 2; c++) {
                AA1 = (b > a);
                AA2 = (c == a);
                BB1 = (a > b);
                BB2 = (a > c);
                CC1 = (c > b);
                CC2 = (b > a);
                if ((a + AA1 +AA2 == 2) && (b + BB1 +BB2 == 2) && (c + CC1 +CC2 == 2) && (a != b) && (a != c) && (b != c)) {
                    str[a] = 'A';
                    str[b] = 'B';
                    str[c] = 'C';
                }
            }
        }
    }
    for (i = 0; i <= 2; i++)
        cout << str[i];
    cout << endl;
    return 0;
}

