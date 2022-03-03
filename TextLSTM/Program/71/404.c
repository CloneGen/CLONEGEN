int main () {
    int N, M, X, Y, A [31];
    cin >> N;
    for (int I = 1;
    I <= N; I++) {
        cin >> M >> X >> Y;
        if (M % 100)
            if (M % 4 == 0)
                A[2] = 29;
            else
                A[2] = 28;
        else if (M % 400 == 0)
            A[2] = 29;
        else
            A[2] = 28;
        A[1] = A[3] = A[5] = A[7] = A[8] = A[10] = A[12] = 31;
        A[4] = A[6] = A[9] = A[11] = 30;
        int S = 0, T;
        if (X > Y) {
            T = X;
            X = Y;
            Y = T;
        }
        for (int I = X;
        I < Y; I++)
            S += A[I];
        if (S % 7)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}

