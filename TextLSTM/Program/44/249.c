int flag = 0;
int function (int n);

int main () {
    int i = 0;
    for (i = 0; i < 6; i++) {
        int n = 0;
        cin >> n;
        if (n < 0) {
            cout << "-";
            n = (-1) * n;
        }
        flag = 0;
        function (n);
        cout << endl;
    }
    return 0;
}

int function (int n) {
    if (n > 0) {
        if ((n % 10) != 0) {
            cout << (n % 10);
            flag = 1;
        }
        else if ((n % 10 == 0) && (flag != 0))
            cout << "0";
        function (n / 10);
    }
    return 0;
}

