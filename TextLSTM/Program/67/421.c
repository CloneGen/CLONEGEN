int main () {
    int n = 0;
    int sum = 0, num = 0;
    double x = 0, y = 0;
    cin >> n;
    cin >> sum;
    cin >> num;
    x = (double) num / sum;
    for (int i = 0;
    i < n - 1; i++) {
        cin >> sum;
        cin >> num;
        y = (double) num / sum;
        if ((y - x) > 0.05)
            cout << "better" << endl;
        else if ((x - y) > 0.05)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

