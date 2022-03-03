int main () {
    int n, p1, p2, t1 = 0, t2 = 0;
    cin >> n;
    for (int j = 1;
    j <= n; j++) {
        cin >> p1 >> p2;
        if (p1 >= 90 && p1 <= 140 && p2 >= 60 && p2 <= 90)
            t2++;
        else {
            t1 = max (t1, t2);
            t2 = 0;
        }
    }
    t1 = max (t1, t2);
    cout << t1;
    return 0;
}

