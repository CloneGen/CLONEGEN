int main () {
    int a, b, c;
    for (a = 0; a < 3; a++) {
        for (b = 0; b < 3; b++) {
            for (c = 0; c < 3; c++) {
                if ((a + (b > a) + (c == a)) == 2 && (b + (a > b) + (a > c)) == 2 && (c + (c > b) + (b > a)) == 2) {
                    if ((a == 0) && (b == 1) && (c == 2))
                        cout << "ABC";
                    if (a == 0 && b == 2 && c == 1)
                        cout << "ACB";
                    if (a == 1 && b == 0 && c == 2)
                        cout << "BAC";
                    if (a == 1 && b == 2 && c == 0)
                        cout << "CAB";
                    if (a == 2 && b == 0 && c == 1)
                        cout << "BCA";
                    if (a == 2 && b == 1 && c == 0)
                        cout << "CBA";
                }
            }
        }
    }
    return 0;
}

