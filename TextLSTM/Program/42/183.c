int main () {
    int list [100000];
    int i, num, target;
    int space_check = 0;
    cin >> num;
    for (i = 0; i < num; i++)
        cin >> list[i];
    cin >> target;
    for (i = 0; i < num; i++) {
        if (target != list[i]) {
            if (space_check)
                cout << " ";
            else
                space_check = 1;
            cout << list[i];
        }
    }
    return 0;
}

