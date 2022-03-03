int mycompare (const  void *elem1, const  void *elem2) {
    int *p1, *p2;
    p1 = (int *) elem1;
    p2 = (int *) elem2;
    return *p2 - *p1;
}

int main () {
    int n, i, money, khead, thead, ktail, ttail;
    int horse [2] [1005];
    while (cin >> n) {
        if (n == 0)
            break;
        money = 0;
        for (i = 0; i < n; i++)
            cin >> horse[0][i];
        for (i = 0; i < n; i++)
            cin >> horse[1][i];
        qsort (horse[0], n, sizeof (int), mycompare);
        qsort (horse[1], n, sizeof (int), mycompare);
        khead = thead = 0;
        ktail = ttail = n - 1;
        while (khead <= ktail && thead <= ttail) {
            if (horse[0][thead] > horse[1][khead]) {
                thead++;
                khead++;
                money += 200;
            }
            else if (horse[0][thead] < horse[1][khead]) {
                khead++;
                ttail--;
                money -= 200;
            }
            else {
                while (thead <= ttail && khead <= ktail) {
                    if (horse[0][ttail] > horse[1][ktail]) {
                        ttail--;
                        ktail--;
                        money += 200;
                    }
                    else {
                        if (horse[0][ttail] < horse[1][khead])
                            money -= 200;
                        ttail--;
                        khead++;
                        break;
                    }
                }
            }
        }
        cout << money << endl;
    }
    return 0;
}

