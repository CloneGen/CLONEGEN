int main (void) {
    int F (int x, int y, int z);
    int A, B, C;
    int a, b, c;
    for (A = 1; A <= 3; A++)
        for (B = 1; B <= 3; B++)
            for (C = 1; C <= 3; C++) {
                a = (B > A) + (C == A);
                b = (A > B) + (A > C);
                c = (C > B) + (B > A);
                int sum;
                sum = ((A > B &&a < b) || (A == B &&a == b) || (A < B &&a > b)) + ((A > C &&a < c) || (A == C &&a == c) || (A < C &&a > c)) + ((B < C &&b > c) || (B > C &&b < c) || (B == C &&b == c));
                if (sum == 3)
                    F (A, B, C);
            }
    return 0;
}

int F (int A, int B, int C) {
    int temp;
    if (A < B) {
        temp = A;
        A = B;
        C = temp;
    }
    if (C > A)
        cout << "CAB";
    else if (C > B)
        cout << "BCA";
    else
        cout << "ABC";
}

