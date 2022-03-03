char a [10010];
int l, n, i, j;

void biubiu (int ks, int ll) {
    int k;
    if (ll - ks < 80) {
        for (i = ks; i < ll; i++)
            cout << a[i];
        cout << endl;
    }
    else {
        if (a[ks + 79] == ' ') {
            for (i = ks; i < ks + 79; i++)
                cout << a[i];
            cout << endl;
            biubiu (ks + 80, ll);
        }
        else {
            if (a[ks + 80] == ' ') {
                for (i = ks; i <= ks + 79; i++)
                    cout << a[i];
                cout << endl;
                biubiu (ks + 81, ll);
            }
            else {
                for (k = ks + 78; k > ks; k--)
                    if (a[k] == ' ')
                        break;
                for (i = ks; i < k; i++)
                    cout << a[i];
                cout << endl;
                biubiu (k + 1, ll);
            }
        }
    }
}

int main () {
    scanf ("%d\n", &n);
    gets (a);
    l = strlen (a);
    int ll = l;
    i = l;
    while (a[i] == ' ') {
        i--;
        ll--;
    }
    for (i = 0; i < l; i++) {
        if (i == 0 && a[i] == ' ') {
            for (j = 0; j < l - 1; j++)
                a[j] = a[j + 1];
            i--;
            ll--;
        }
    }
    biubiu (0, ll);
    return 0;
}

