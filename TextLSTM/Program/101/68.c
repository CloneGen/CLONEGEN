int main () {
    int a [6] [3] = {{0, 1, 2}, {0, 2, 1}, {1, 2, 0}, {1, 0, 2}, {2, 0, 1}, {2, 1, 0}}, i, A, B, C;
    for (i = 0; i <= 5; i++) {
        A = (a[i][1] > a[i][0]) + (a[i][2] == a[i][0]);
        B = (a[i][0] > a[i][1]) + (a[i][0] > a[i][2]);
        C = (a[i][2] > a[i][1]) + (a[i][1] > a[i][0]);
        if (A +a[i][0] == 2 && B +a[i][1] == 2 && C +a[i][2] == 2)
            break;
    }
    if (A > B &&B > C)
        cout << "ABC";
    if (A > C &&C > B)
        cout << "ACB";
    if (B > A &&A > C)
        cout << "BAC";
    if (B > C &&C > A)
        cout << "BCA";
    if (C > A &&A > B)
        cout << "CAB";
    if (C > B &&B > A)
        cout << "CBA";
    return 0;
}

