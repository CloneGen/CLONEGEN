int main () {
    int a, b, c, i, j, k, sum1, sum2, sum3;
    for (i = 1; i <= 3; i++) {
        a = i;
        for (j = 1; j <= 3; j++) {
            b = j;
            if (b != a)
                for (k = 1; k <= 3; k++) {
                    c = k;
                    if ((c != a) && (c != b)) {
                        sum1 = a + (b > a) + (c == a);
                        sum2 = b + (a > b) + (a > c);
                        sum3 = c + (c > b) + (b > a);
                        if ((sum1 == 3) && (sum2 == 3) && (sum3 == 3)) {
                            if ((a < b) && (b < c))
                                cout << "ABC";
                            if ((a < c) && (c < b))
                                cout << "ACB";
                            if ((b < a) && (a < c))
                                cout << "BAC";
                            if ((b < c) && (c < a))
                                cout << "BCA";
                            if ((c < a) && (a < b))
                                cout << "CAB";
                            if ((c < b) && (b < a))
                                cout << "CBA";
                        }
                    }
                }
        }
    }
    return 0;
}

