int main () {
    int A, B, C, a, b, c;
    for (A = 1; A <= 3; A++) {
        for (B = 1; B <= 3; B++) {
            if (B == A)
                continue;
            for (C = 1; C <= 3; C++) {
                if (A == C || B == C)
                    continue;
                a = (B > A) + (C == A);
                b = (A > B) + (A > C);
                c = (C > B) + (B > A);
                if (A > B &&B > C &&a < b && b < c)
                    cout << "CBA" << endl;
                else if (A > C &&C > B &&a < c && c < b)
                    cout << "BCA" << endl;
                else if (B > A &&A > C &&b < a && a < c)
                    cout << "CAB" << endl;
                else if (B > C &&C > A &&b < c && c < a)
                    cout << "ACB" << endl;
                else if (C > A &&A > B &&c < a && a < b)
                    cout << "BAC" << endl;
                else if (C > B &&B > A &&c < b && b < a)
                    cout << "ABC" << endl;
            }
        }
    }
    return 0;
}

