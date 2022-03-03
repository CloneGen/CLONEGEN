int main () {
    int num;
    cin >> num;
    int t = 0;
    for (int i = 3;
    i <= 8; i = i + 2) {
        if (num % i == 0) {
            if (t == 0)
                cout << i;
            else
                cout << " " << i;
            t++;
        }
    }
    if (t == 0)
        cout << "n";
    cin.get ();
    cin.get ();
    return 0;
}

