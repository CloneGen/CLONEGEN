int main () {
    int flag = 0;
    int a;
    cin >> a;
    if (a % 3 == 0) {
        if (flag == 0) {
            cout << "3";
            flag = 1;
        }
        else
            cout << " 3";
    }
    if (a % 5 == 0) {
        if (flag == 0) {
            cout << "5";
            flag = 1;
        }
        else
            cout << " 5";
    }
    if (a % 7 == 0) {
        if (flag == 0) {
            cout << "7";
            flag = 1;
        }
        else
            cout << " 7";
    }
    if (a % 3 != 0 && a % 5 != 0 && a % 7 != 0)
        cout << "n" << endl;
    return 0;
}

