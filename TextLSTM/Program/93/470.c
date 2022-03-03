int main () {
    int a;
    cin >> a;
    if ((a % 3 == 0 && a % 5 == 0 && a % 7 == 0) == 1)
        cout << "3 5 7" << endl;
    if ((a % 3 == 0 && a % 5 == 0 && a % 7 != 0) == 1)
        cout << "3 5" << endl;
    if ((a % 3 == 0 && a % 5 != 0 && a % 7 == 0) == 1)
        cout << "3 7" << endl;
    if ((a % 3 != 0 && a % 5 == 0 && a % 7 == 0) == 1)
        cout << "5 7" << endl;
    if ((a % 3 == 0 && a % 5 != 0 && a % 7 != 0) == 1)
        cout << "3" << endl;
    if ((a % 3 != 0 && a % 5 == 0 && a % 7 != 0) == 1)
        cout << "5" << endl;
    if ((a % 3 != 0 && a % 5 != 0 && a % 7 == 0) == 1)
        cout << "7" << endl;
    if ((a % 3 != 0 && a % 5 != 0 && a % 7 != 0) == 1)
        cout << "n" << endl;
    return 0;
}

