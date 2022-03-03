int main () {
    int num;
    cin >> num;
    if (num % 3 == 0) {
        cout << 3;
        if (!(num % 5) || !(num % 7))
            cout << ' ';
    }
    if (num % 5 == 0) {
        cout << 5;
        if (!(num % 7))
            cout << ' ';
    }
    if (num % 7 == 0)
        cout << 7;
    if (num % 3 && num % 5 && num % 7)
        cout << 'n';
    return 0;
}

