int i = 0;
int n;

int f () {
    int a;
    cin >> a;
    i++;
    if (i == n) {
        cout << a;
        return 0;
    }
    if (i != n) {
        f ();
    }
    cout << " " << a;
}

int main () {
    cin >> n;
    f ();
    return 0;
}

