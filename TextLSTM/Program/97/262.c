int main (int argc, const  char *argv []) {
    int num;
    cin >> num;
    int money [6] = {100, 50, 20, 10, 5, 1};
    for (int i = 0;
    i < 6; i++) {
        cout << num / money[i] << endl;
        num -= (num / money[i]) * money[i];
    }
    return 0;
}

