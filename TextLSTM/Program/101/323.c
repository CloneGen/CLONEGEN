int main () {
    int a, b, c, A, B, C, CC1, CC2, CC3;
    for (a = 1; a <= 3; a++) {
        for (b = 1; b <= 3; b++) {
            for (c = 1; c <= 3; c++) {
                A = (b > a) + (a == c);
                B = (a > b) + (a > c);
                C = (c > b) + (b > a);
                CC1 = (A > B &&a < b) || (A < B &&a > b);
                CC2 = (A > C &&a < c) || (A < C &&a > c);
                CC3 = (B > C &&b < c) || (B < C &&b > c);
                if (CC1 &&CC2&&CC3) {
                    if (a > b && b > c)
                        cout << "C" << "B" << "A" << endl;
                    else if (a > b && a > c && c > b)
                        cout << "B" << "C" << "A" << endl;
                    else if (b > a && a > c)
                        cout << "C" << "A" << "B" << endl;
                    else if (b > a && c > a && b > c)
                        cout << "A" << "C" << "B" << endl;
                    else if (c > b && b > a)
                        cout << "A" << "B" << "C" << endl;
                    else if (c > b && a > b && c > a)
                        cout << "B" << "A" << "C" << endl;
                }
            }
        }
    }
    return 0;
}

