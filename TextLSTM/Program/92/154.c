int comp (const  void *a, const  void *b) {
    return *(int*) b - *(int*) a;
}

int main () {
    int n, i, t [1001], q [1001];
    while (cin >> n) {
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
            cin >> t[i];
        for (i = 0; i < n; i++)
            cin >> q[i];
        qsort (t, n, sizeof (int), comp);
        qsort (q, n, sizeof (int), comp);
        int tl = 0, ql = 0;
        int tr = n - 1, qr = n - 1;
        int result = 0;
        while (tl <= tr) {
            if (t[tl] > q[ql]) {
                result += 200;
                tl++;
                ql++;
            }
            else if (t[tr] > q[qr]) {
                result += 200;
                tr--;
                qr--;
            }
            else {
                if (t[tr] > q[ql])
                    result += 200;
                else if (t[tr] < q[ql])
                    result -= 200;
                tr--;
                ql++;
            }
        }
        cout << result << endl;
    }
}

