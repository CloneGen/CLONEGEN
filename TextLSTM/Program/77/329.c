void output (char a [], char m, char f) {
    int i = 0, k, outa, outb;
    while (a[i] != '\0') {
        if (a[i] != f)
            i++;
        else {
            outb = i;
            while (a[i] != m)
                i--;
            outa = i;
            cout << outa << " " << outb << endl;
            a[outa] = ' ';
            a[outb] = ' ';
            output (a, m, f);
        }
    }
}

int main () {
    char a [100], m, f;
    int t = 1;
    cin >> a;
    m = a[0];
    while (1) {
        if (a[t] == m)
            t++;
        else {
            f = a[t];
            break;
        }
    }
    output (a, m, f);
    return 0;
}

