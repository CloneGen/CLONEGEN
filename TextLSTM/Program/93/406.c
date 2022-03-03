int main () {
    int n, flag = 0;
    cin >> n;
    if (n % 3 == 0) {
        printf ("3");
        flag = 1;
    }
    if (n % 5 == 0) {
        printf ("%s", flag == 1 ? " 5" : "5");
        flag = 1;
    }
    if (n % 7 == 0) {
        printf ("%s", flag == 1 ? " 7" : "7");
        flag = 1;
    }
    if (flag == 0)
        cout << "n";
    return 0;
}

