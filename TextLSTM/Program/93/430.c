int main () {
    int num = 0;
    int n;
    cin >> n;
    for (int i = 3;
    i <= 7; i = i + 2) {
        if (n % i == 0) {
            num++;
            if (num == 1)
                cout << i;
            else if (num != 2 || num != 3)
                cout << " " << i;
        }
    }
    if (num == 0)
        cout << "n";
    return 0;
}

