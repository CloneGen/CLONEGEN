int Reverse (int n);

int main () {
    int i = 0;
    double Num = 0;
    for (i = 0; i < 6; i++) {
        cin >> Num;
        cout << Reverse (Num) << endl;
    }
    return 0;
}

int Reverse (int n) {
    double Sum = 0;
    int i = 0;
    int k = 0;
    int a [100] = {10};
    for (i = 0; i < 100; i++) {
        if (n / pow (10.0, i) < 1 && n / pow (10.0, i) > -1) {
            break;
        }
    }
    for (k = 0; k < i; k++) {
        a[i - k] = n / pow (10.0, i - k - 1);
        n -= a[i - k] * (pow (10.0, i - k - 1));
    }
    for (k = 1; k <= i; k++) {
        Sum += a[k] * pow (10.0, i - k);
    }
    return Sum;
}

