int main () {
    int n;
    cin >> n;
    int x;
    x = n;
    for (; x != 1;) {
        if (x % 2 == 1) {
            cout << x << "*3+1=";
            x = x * 3 + 1;
            cout << x << '\n';
        }
        else {
            cout << x << "/2=";
            x = x / 2;
            cout << x << '\n';
        }
    }
    cout << "End";
    return 0;
}

