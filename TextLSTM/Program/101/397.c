int main () {
    int a, b, c;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                if ((a + (b > a) + (a == c) == 3) && (b + (a > b) + (a > c) == 3) && (c + (c > b) + (b > a) == 3)) {
                    if (a > b) {
                        if (a < c)
                            cout << 'B' << 'A' << 'C';
                        else {
                            if (b > c)
                                cout << 'C' << 'B' << 'A';
                            else
                                cout << 'B' << 'C' << 'A';
                        }
                    }
                    else {
                        if (b < c)
                            cout << 'A' << 'B' << 'C';
                        else {
                            if (a < c)
                                cout << 'A' << 'C' << 'B';
                            else
                                cout << 'C' << 'A' << 'B';
                        }
                    }
                }
            }
        }
    }
    return 0;
}

