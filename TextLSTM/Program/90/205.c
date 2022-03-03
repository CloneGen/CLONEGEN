int putapple (int apple, int basket);

int main (void) {
    int n;
    cin >> n;
    for (int i = 1;
    i <= n; i++) {
        int apple, basket;
        cin >> apple >> basket;
        cout << putapple (apple, basket) << endl;
    }
    return 0;
}

int putapple (int apple, int basket) {
    if (apple < 0)
        return 0;
    if (basket == 1)
        return 1;
    int situation1 = putapple (apple, basket - 1);
    int situation2 = putapple (apple - basket, basket);
    return situation1 + situation2;
}

