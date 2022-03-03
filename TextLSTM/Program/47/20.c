void change (int a);

int main () {
    int n;
    cin >> n;
    cin.get ();
    change (n);
    return 0;
}

void change (int a) {
    int num;
    cin >> num;
    a = a - 1;
    if (a >= 1)
        change (a);
    if (a == 0)
        cout << num;
    else
        cout << " " << num;
}

