char dui_lie [100], zuo, you;
int zuobian, youbian, changdu;

void qian_shou (int zuobian) {
    for (youbian = zuobian + 1; youbian < changdu; youbian++) {
        if (dui_lie[youbian] == zuo || dui_lie[youbian] == you)
            break;
    }
    if (dui_lie[youbian] == you) {
        dui_lie[zuobian] = '*';
        dui_lie[youbian] = '*';
        cout << zuobian << " " << youbian << endl;
    }
    else {
        zuobian = youbian;
        qian_shou (zuobian);
    }
}

int main () {
    int i;
    cin >> dui_lie;
    changdu = strlen (dui_lie);
    zuo = dui_lie[0];
    you = dui_lie[changdu - 1];
    for (i = 1; i <= changdu / 2; i++) {
        zuobian = 0;
        qian_shou (zuobian);
    }
    return 0;
}

