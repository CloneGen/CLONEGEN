int main () {
    int A = 3, B = 2, C = 1, sumA, sumB, sumC;
    sumA = (B > A) + (C == A);
    sumB = (A > B) + (A > C);
    sumC = (C > B) + (B > A);
    if (sumA < sumB && sumB < sumC)
        cout << "CAB" << endl;
    else {
        A = 3;
        B = 1;
        C = 2;
        sumA = (B > A) + (C == A);
        sumB = (A > B) + (A > C);
        sumC = (C > B) + (B > A);
        if (sumA < sumC && sumC < sumB)
            cout << "BCA" << endl;
        else {
            A = 1;
            B = 3;
            C = 2;
            sumA = (B > A) + (C == A);
            sumB = (A > B) + (A > C);
            sumC = (C > B) + (B > A);
            if (sumB < sumC && sumC < sumA)
                cout << "ACB" << endl;
            else {
                B = 3;
                A = 2;
                C = 1;
                sumA = (B > A) + (C == A);
                sumB = (A > B) + (A > C);
                sumC = (C > B) + (B > A);
                if (sumB < sumA && sumA < sumC)
                    cout << "CAB" << endl;
                else {
                    A = 2;
                    C = 3;
                    B = 1;
                    sumA = (B > A) + (C == A);
                    sumB = (A > B) + (A > C);
                    sumC = (C > B) + (B > A);
                    if (sumC < sumA && sumA < sumB)
                        cout << "BAC" << endl;
                    else {
                        C = 3;
                        B = 2;
                        A = 1;
                        sumA = (B > A) + (C == A);
                        sumB = (A > B) + (A > C);
                        sumC = (C > B) + (B > A);
                        if (sumC < sumB && sumB < sumA)
                            cout << "ABC" << endl;
                    }
                }
            }
        }
    }
    return 0;
}

