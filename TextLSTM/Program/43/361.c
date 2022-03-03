int main () {
    int m, i, j, k;
    cin >> m;
    for (i = 3; i <= m / 2; i += 2) {
        int root1 = sqrt (i);
        for (j = 3; j <= root1; j += 2) {
            if (i % j == 0)
                break;
        }
        if (j <= root1)
            continue;
        int root2 = sqrt (m - i);
        for (k = 3; k <= root2; k += 2) {
            if ((m - i) % k == 0)
                break;
        }
        if (k > root2)
            cout << i << " " << m - i << endl;
    }
    return 0;
}

