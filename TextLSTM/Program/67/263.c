int main () {
    int n, all, cure;
    double x, y;
    cin >> n;
    cin >> all >> cure;
    x = (double) cure / all * 100;
    for (int i = 0;
    i < n - 1; i++) {
        cin >> all >> cure;
        y = (double) cure / all * 100;
        if (y - x > 5)
            cout << "better" << endl;
        else if (x - y > 5)
            cout << "worse" << endl;
        else
            cout << "same" << endl;
    }
    return 0;
}

