int counter;
void find (int, int);

int main () {
    int num;
    int i;
    cin >> num;
    for (i = 1; i <= num; i++) {
        counter = 0;
        int n, m;
        cin >> n >> m;
        find (n, m);
        cout << counter << endl;
    }
    return 0;
}

void find (int a, int b) {
    if (a == 1 || b == 1 || a == 0)
        counter++;
    else {
        find (a, b - 1);
        if (a >= b)
            find (a - b, b);
    }
}

