#include<bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n) {
    for(int i = n; i > 0; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n) {
    for(int i = n; i > 0; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n) {
    int spaces = n - 1;
    for(int row = 1; row <= n; row++) {
        //spaces
        for(int i = 1; i <= spaces; i++) {
            cout << " ";
        }
        //stars
        for(int stars = 1; stars <= 2 * row - 1; stars++) {
            cout << "*";
        }
        //spaces
        for(int j = 1; j<=spaces; j++) {
            cout << " ";
        }
        cout << endl;
        spaces--;
    }
}

//This one and the one before this was hard
void pattern8(int n) {
    int condition = 2 * n;
    for(int row = 1; row <=n; row++) {
        if(row == 1) {
            condition -= row;
        }
        else {
            condition -= 2;
        }
        for(int spaces = 1; spaces < row; spaces++) {
            cout << " ";
        }
        for(int stars = 1; stars <= condition; stars++) {
            cout << "*";
        }
        for(int spaces = 1; spaces < row; spaces++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n) {
    int row = n * 2 - 1;
    for(int i = 1; i <= row; i++) {
        if(row == n + 1){
            row -= 1;
            for(int j = 1; j <= row; j++) {
                cout << "* ";
            }
        }
        else {
            for(int j = 1; j <= i; j++) {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void patterns10(int n) {
    int row = 2 * n - 1;
    int count = 0;
    int logic = 0;
    for(int i = 1; i <= row; i++) {
        if(i <= n) {
            for(int j = 1; j <= i; j++) {
                cout << "* ";
            }
        }
        else if(count == n) {
            count--;
            logic += 1;
        }
        if(logic == 1) {
            for(int j = 1; j <= count; j++) {
            cout << "* ";
            }
        }
        cout << endl;
        if(i <= n) {
            count++;
        }
        else {
            count--;
        }
    }
}


int main(void) {
    int t;
    cin >> t;
    for(int i = 1; i <= t ; i++) {
        int n;
        cin >> n;
     /* pattern1(n);
        pattern2(n);
        pattern3(n);
        pattern4(n);
        pattern5(n);
        pattern6(n);
        pattern7(n);
        pattern8(n); */
        patterns10(n);
    }
}
