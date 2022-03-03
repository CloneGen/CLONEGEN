int main () {
    int cc1, cc2, cc3;
    int a, b, c, A, B, C;
    char ans [4];
    for (A = 1; A <= 3; A++)
        for (B = 1; B <= 3; B++)
            for (C = 1; C <= 3; C++) {
                if ((A == B) || (A == C) || (B == C))
                    continue;
                a = (B > A) + (A == C);
                b = (A > B) + (A > C);
                c = (C > B) + (B > A);
                if ((A +a == 3) && (B +b == 3) && (C +c == 3)) {
                    if ((A > B) && (B > C))
                        cout << "CBA" << endl;
                    if ((A > C) && (C > B))
                        cout << "BCA" << endl;
                    if ((B > A) && (A > C))
                        cout << "CAB" << endl;
                    if ((B > C) && (C > A))
                        cout << "ACB" << endl;
                    if ((C > A) && (A > B))
                        cout << "BAC" << endl;
                    if ((C > B) && (B > A))
                        cout << "ABC" << endl;
                }
            }
    return 0;
}

