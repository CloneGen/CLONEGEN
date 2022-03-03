int main () {
    int a, b, c;
    for (a = 0; a < 3; a++)
        for (b = 0; b < 3; b++)
            for (c = 0; c < 3; c++) {
                if ((a + (b > a) + (c == a) == 2) && (b + (a > b) + (a > c) == 2) && (c + (c > b) + (b > a) == 2))
                    if (a > b) {
                        if (b > c)
                            cout << "CBA";
                        else {
                            if (a > c)
                                cout << "BCA";
                            else
                                cout << "BAC";
                        }
                    }
                    else {
                        if (a > c)
                            cout << "CAB";
                        else {
                            if (b > c)
                                cout << "ACB";
                            else
                                cout << "ABC";
                        }
                    }
            }
    return 0;
}

