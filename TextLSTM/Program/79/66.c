int main () {
    int n [300], N, m, temp1, temp2, i, k;
    for (;;) {
        for (i = 0; i < 300; i++)
            n[i] = i + 1;
        cin >> N >> m;
        if (N != 0 && m != 0) {
            for (;;) {
                if (N != 1) {
                    temp1 = m % N -1;
                    if (temp1 != -1) {
                        for (i = temp1; i < N; i++)
                            n[i] = n[i + 1];
                        N--;
                        for (i = 0; i < N -temp1; i++) {
                            temp2 = n[N -1];
                            for (k = N -1; k > 0; k--)
                                n[k] = n[k - 1];
                            n[0] = temp2;
                        }
                    }
                    else
                        N--;
                }
                else
                    break;
                cout << endl;
            }
            cout << n[0] << endl;
            ;
        }
        else
            break;
    }
    return 0;
}

