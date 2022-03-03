int main () {
    struct  count {
        int knowshim;
        int heknows;
    }
    person [10000];
    int num;
    cin >> num;
    int i;
    for (i = 0; i < num; i++) {
        person[i].knowshim = 0;
        person[i].heknows = 0;
    }
    int who, whom;
    int flag = 0;
    while (1) {
        cin >> who >> whom;
        if (who + whom == 0)
            break;
        person[who].heknows++;
        person[whom].knowshim++;
    }
    for (i = 0; i < num; i++) {
        if (person[i].heknows == 0 && person[i].knowshim == num - 1) {
            flag = 1;
            cout << i << endl;
        }
    }
    if (!flag)
        cout << "NOT FOUND" << endl;
    return 0;
}

