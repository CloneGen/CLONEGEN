int divide (int n, int min) {
    int i, method = 0;
    if (n >= min)
        method++;
    for (i = min; i < n; i++) {
        if (!(n % i))
            method += divide (n / i, i);
    }
    return method;
}

int main () {
    int number = 0, integer;
    int i;
    cin >> number;
    for (i = 0; i < number; i++) {
        cin >> integer;
        cout << divide (integer, 2) << endl;
    }
    return 0;
}

