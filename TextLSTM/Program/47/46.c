int A [100], n, i = 0;

void change () {
    cin >> A[i];
    i++;
    if (i < n)
        change ();
    i--;
    if (i != 0)
        cout << A[i] << " ";
    else
        cout << A[i];
}

int main () {
    cin >> n;
    change ();
    return 0;
}

