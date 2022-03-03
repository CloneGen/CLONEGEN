int main (int argc, const  char *argv []) {
    int n;
    cin >> n;
    int i;
    for (i = 0; i < n; i++) {
        int a = 1;
        int b = 1;
        int num;
        cin >> num;
        int j;
        int t;
        for (j = 1; j < num; j++) {
            t = b;
            b = a + b;
            a = t;
        }
        cout << a << endl;
    }
}

