int main () {
    int n;
    cin >> n;
    int A, B, C, D, E, F, a, b, c, d;
    A = n / 100;
    a = n % 100;
    B = a / 50;
    b = a % 50;
    C = b / 20;
    c = b % 20;
    D = c / 10;
    d = c % 10;
    E = d / 5;
    F = d % 5;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    cout << D << endl;
    cout << E << endl;
    cout << F << endl;
    return 0;
}

