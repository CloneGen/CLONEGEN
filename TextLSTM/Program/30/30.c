int main () {
    int n;
    int sum = 0;
    cin >> n;
    for (int af = 1;
    af <= n; af++) {
        if (((af % 7 == 0) || (af % 10 == 7) || (af / 10 == 7)) == 0)
            sum += af * af;
    }
    cout << sum << endl;
    return 0;
    cin.get ();
    cin.get ();
}

