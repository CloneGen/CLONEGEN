int main () {
    int a, num = 0;
    cin >> a;
    if (a % 3 == 0) {
        cout << "3";
        num++;
    }
    if (a % 5 == 0) {
        if (num != 0) {
            cout << " ";
        }
        cout << "5";
        num++;
    }
    if (a % 7 == 0) {
        if (num != 0) {
            cout << " ";
        }
        cout << "7";
        num++;
    }
    if (num == 0) {
        cout << "n";
    }
    return 0;
}

