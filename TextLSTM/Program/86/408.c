int main () {
    int i, n, k;
    cin >> n;
    for (i = 1; i <= n; i++) {
        int j, wrong, w [20];
        cin >> wrong;
        for (j = 0; j < wrong; j++)
            cin >> w[j];
        if (wrong == 0)
            cout << 60 << endl;
        else {
            if (w[wrong - 1] + 3 * wrong <= 60)
                cout << 60 - 3 * wrong << endl;
            else {
                for (k = wrong - 2; k >= 0; k--) {
                    if ((w[k] + 3 * (k + 1) <= 60) && (w[k + 1] - w[k] >= 60 - w[k] - 3 * (k + 1))) {
                        cout << 60 - 3 * (k + 1) << endl;
                        break;
                    }
                    else if ((w[k] + 3 * (k + 1) <= 60) && (w[k + 1] - w[k] < 60 - w[k] - 3 * (k + 1))) {
                        cout << w[k + 1] << endl;
                        break;
                    }
                    else
                        continue;
                }
            }
        }
    }
    return 0;
}

