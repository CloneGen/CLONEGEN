int cmp (const  void *a, const  void *b) {
    return *(int*) a - *(int*) b;
}

int a [300], b [300], c [300], la, lb;

int main () {
    char xa [300], xb [300];
    cin >> xa >> xb;
    la = strlen (xa);
    lb = strlen (xb);
    for (int i = 0;
    i < la; i++)
        a[i] = xa[la - 1 - i] - '0';
    for (int i = 0;
    i < lb; i++)
        b[i] = xb[lb - 1 - i] - '0';
    int m = la > lb ? la : lb;
    int x = 0;
    for (int i = 0;
    i < m; i++) {
        int w = a[i] + b[i] + x;
        c[i] = w % 10;
        x = w / 10;
    }
    c[m] = x;
    int h;
    for (h = 299; h >= 0; h--)
        if (c[h] != 0)
            break;
    if (h == -1) {
        cout << "0" << endl;
    }
    else {
        for (; h >= 0; h--)
            cout << c[h];
        cout << endl;
    }
}

