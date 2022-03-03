int main () {
    int n, i = 0;
    cin >> n;
    if (n % 3 == 0) {
        cout << "3";
        i = i + 1;
    }
    if (n % 5 == 0 && i == 1) {
        cout << " " << "5";
        i = i + 1;
    }
    else if (i != 1 && n % 5 == 0) {
        cout << "5";
        i = i + 1;
    }
    if (n % 7 == 0 && i != 0) {
        cout << " " << "7";
        i = i + 1;
    }
    else if (n % 7 == 0 && i == 0) {
        cout << "7";
        i = i + 1;
    }
    if (i == 0) {
        cout << "n";
    }
    cout << endl;
    return 0;
}

