int combine (int m1_apple, int n1_plate) {
    int total1, total2, t;
    if (n1_plate == 1 || m1_apple == 0)
        return 1;
    else if (m1_apple < n1_plate)
        return combine (m1_apple, m1_apple);
    else {
        total1 = combine (m1_apple, n1_plate - 1);
        total2 = combine (m1_apple - n1_plate, n1_plate);
        t = total1 + total2;
        return t;
    }
}

int main () {
    int t, i, m_apple, n_plate, total;
    cin >> t;
    for (i = 1; i <= t; i++) {
        cin >> m_apple >> n_plate;
        total = combine (m_apple, n_plate);
        cout << total << endl;
    }
    return 0;
}

