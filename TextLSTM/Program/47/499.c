int main () {
    int n = 0, temp = 0, A [100] = {0};
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> *(A +i);
    for (int *p = A, *q = A +n - 1;
    p < q; p++, q--) {
        temp = *p;
        *p = *q;
        *q = temp;
    }
    cout << *A;
    for (int i = 1;
    i < n; i++)
        cout << " " << *(A +i);
    return 0;
}

