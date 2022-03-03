int main () {
    int F (int, int);
    int N;
    cin >> N;
    for (int I = 1;
    I <= N; ++I) {
        int A;
        cin >> A;
        cout << F (A, 2) << endl;
    }
    return 0;
}

int F (int A, int CHU) {
    int RET = 1;
    for (int I = CHU;
    I <= sqrt (A); I++) {
        if (A % I == 0)
            RET += F (A / I, I);
    }
    return RET;
}

