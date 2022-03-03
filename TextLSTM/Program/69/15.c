int main () {
    char ca [251];
    char cb [251];
    char tempc;
    int ia [251] = {0};
    int ib [251] = {0};
    int result [251] = {0};
    int numa = 0;
    int numb = 0;
    int jinwei = 0;
    int weishu = 0;
    int resultweishu = 0;
    cin >> ca;
    cin >> cb;
    numa = strlen (ca);
    numb = strlen (cb);
    memset (ia, 0, sizeof (int));
    memset (ib, 0, sizeof (int));
    memset (result, 0, sizeof (int));
    if (numa > numb)
        weishu = numa;
    else
        weishu = numb;
    for (int i = 0;
    i < numa; i++) {
        tempc = ca[numa - i - 1];
        ia[i] = atoi (&tempc);
    }
    for (int i = 0;
    i < numb; i++) {
        tempc = cb[numb - i - 1];
        ib[i] = atoi (&tempc);
    }
    for (int i = 0;
    i <= weishu; i++) {
        result[i] = ia[i] + ib[i] + jinwei;
        if (result[i] > 9) {
            result[i] = result[i] - 10;
            jinwei = 1;
        }
        else
            jinwei = 0;
    }
    for (int i = 250;
    i >= 0; i--) {
        if (result[i] != 0) {
            resultweishu = i;
            break;
        }
    }
    for (int i = resultweishu;
    i >= 0; i--)
        cout << result[i];
    cout << endl;
}

