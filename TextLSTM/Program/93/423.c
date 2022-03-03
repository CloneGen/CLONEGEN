int main () {
    int a;
    cin >> a;
    int num = 0;
    for (int i = 3;
    i <= 7; i += 2) {
        if (a % i == 0) {
            num++;
            if (num != 1)
                cout << " " << i;
            else if (num == 1)
                cout << i;
        }
    }
    if (num == 0)
        cout << "n";
    return 0;
}

