char imim [101], isub [101], istore [101];
int carry = 0;
char *p = NULL, *q = NULL;

void subtraction () {
    if (q == isub) {
        *p = (*p - *q - carry + '0');
    }
    else {
        if (*p >= (*q + carry)) {
            *p = (*p - *q - carry + '0');
            carry = 0;
        }
        else {
            *p = (*p + 10 - *q - carry + '0');
            carry = 1;
        }
        p--;
        q--;
        subtraction ();
    }
}

int main () {
    int n = 0;
    cin >> n;
    for (int i = 0;
    i < n; i++) {
        memset (imim, '0', sizeof (imim));
        memset (isub, '0', sizeof (isub));
        memset (istore, '0', sizeof (istore));
        carry = 0;
        cin >> imim >> istore;
        int gap = 0;
        gap = strlen (imim) - strlen (istore);
        for (int i = 0;
        i <= strlen (istore); i++) {
            isub[i + gap] = istore[i];
        }
        p = imim + strlen (imim) - 1;
        q = isub + strlen (isub) - 1;
        subtraction ();
        cout << imim << endl;
    }
    return 0;
}

