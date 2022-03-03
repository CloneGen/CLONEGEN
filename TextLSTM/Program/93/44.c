int main () {
    int n, sum;
    cin >> n;
    sum = (n % 3 == 0) + (n % 5 == 0) + (n % 7 == 0);
    switch (sum) {
    case 0 :
        cout << "n";
        break;
    case 1 :
        cout << (n % 3 == 0 ? "3" : (n % 5 == 0 ? "5" : "7"));
        break;
    case 2 :
        cout << (n % 3 != 0 ? "5 7" : (n % 5 != 0 ? "3 7" : "3 5"));
        break;
    case 3 :
        cout << "3 5 7";
        break;
    }
    cout << endl;
    return 0;
}

