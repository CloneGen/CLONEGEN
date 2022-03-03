int la = 0, lb = 0, l = 0, a [100], b [100], combine [200];
void input ();
void seq ();
void sequence (int x [100]);
void com (int a [100], int b [100]);
void output (int combine [200]);

int main () {
    input ();
    seq ();
    com (a, b);
    output (combine);
    return 0;
}

void input () {
    cin >> la >> lb;
    for (int i = 0;
    i < la; i++)
        cin >> a[i];
    for (int i = 0;
    i < lb; i++)
        cin >> b[i];
}

void seq () {
    l = la;
    sequence (a);
    l = lb;
    sequence (b);
}

void sequence (int x [100]) {
    int temp = 0;
    for (int i = 1;
    i < l; i++)
        for (int j = 1;
        j <= l - i; j++)
            if (x[j - 1] > x[j]) {
                temp = x[j];
                x[j] = x[j - 1];
                x[j - 1] = temp;
            }
}

void com (int a [100], int b [100]) {
    memcpy (combine, a, la * 4);
    memcpy (combine + la, b, lb * 4);
}

void output (int combine [200]) {
    cout << combine[0];
    for (int i = 1;
    i < la + lb; i++)
        cout << " " << combine[i];
}

