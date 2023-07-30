#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <cassert>
using namespace std;

/*HACKER RANK HOMEWORK*/
/*
 .Nombre: Juan Esteban Salas
 .Codigo: 8975783
 .Clase: Programación Orientada a Objetos (POO)
 .Fecha: 30/07/23
*/



/*INPUT AND OUTPUT*/

int main() {
    int a,b,c;
    cin >> a >> b >> c; 
    cout << a+b+c << endl;
    return 0;
}

/*================*/

/*CONDITIONAL STATEMENTS*/

int main()
{
    int n;
    cin >> n;

    if (n <= 9 && n >= 1) {
        if (n == 1) {
            cout << "one";
        } else if (n == 2) {
            cout << "two";
        } else if (n == 3) {
            cout << "three";
        } else if (n == 4) {
            cout << "four";
        } else if (n == 5) {
            cout << "five";
        } else if (n == 6) {
            cout << "six";
        } else if (n == 7) {
            cout << "seven";
        } else if (n == 8) {
            cout << "eight";
        } else if (n == 9) {
            cout << "nine";
        }
    } else if (n > 9) {
        cout << "Greater than 9";
    }

    return 0;
}

/*================*/

/*FOR LOOPS*/

int main() {
    int a,b;
    cin >> a;
    cin >> b;
    for(int n = a; n <= b; n++){
        if( n >= 1 && n <= 9){
            if(n == 1){
                cout << "one" << endl;
            }
            else if(n == 2){
                cout << "two" << endl;
            }
            else if(n == 3){
                cout << "three" << endl;
            }
            else if(n == 4){
                cout << "four" << endl;
            }
            else if(n == 5){
                cout << "five" << endl;
            }
            else if(n == 6){
                cout << "six" << endl;
            }
            else if(n == 7){
                cout << "seven" << endl;
            }
            else if(n == 8){
                cout << "eight" << endl;
            }
            else if(n == 9){
                cout << "nine" << endl;
            }
        }
        else if(n > 9){
            if( (n%2) == 0 ){
                cout << "even" << endl;
            }
            else{
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}


/*================*/

/*FUNCTIONS*/

int max_of_four(int a, int b, int c, int d){
    int max = 0;
    if(a > max){
        max = a;
    }
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    if(d > max){
        max = d;
    }
    return max;
}

int main() {
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << max_of_four(a,b,c,d) << endl;
    return 0;
}

/*================*/

/*ARRAYS INTRODUCTION*/

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    while (N--)
    {
       cout << arr[N] << " ";
    }
    
    return 0;
}

/*================*/

/*STRINGS*/

int main() {
	string a,b;
    cin >> a;
    cin >> b;
    int lenA = a.size(), lenB = b.size();
    cout << lenA << " " << lenB << endl;
    cout << a + b << endl;
    char tmp = a[0];
    a[0] = b[0];
    b[0] = tmp;
    cout << a << " " << b << endl;
    return 0;
}

/*================*/

/*CLASS*/

class Student
{
private:
    int age;
    int standard;
    string first_name;
    string last_name;

public:
    Student() {}
    void set_age(int age) {
        this->age = age;
    }
    void set_standard(int standard) {
        this->standard = standard;
    }
    void set_first_name(string first_name) {
        this->first_name = first_name;
    }
    void set_last_name(string last_name) {
        this->last_name = last_name;
    }
    int get_age() {
        return age;
    }
    int get_standard() {
        return standard;
    }
    string get_first_name() {
        return first_name;
    }
    string get_last_name() {
        return last_name;
    }
    string to_string() {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};



int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

/*================*/

/*CLASSES AND OBJECTS*/

class Student
{
private:
    int scores[5];

public:
    void input()
    {
        for (int i = 0; i < 5; ++i)
        {
            cin >> scores[i];
        }
    }
    int calculateTotalScore()
    {
        int totalScore = 0;
        for (int i = 0; i < 5; ++i)
        {
            totalScore += scores[i];
        }
        return totalScore;
    }
};

int main() {
    int n;
    cin >> n;
    Student *s = new Student[n];
    for(int i = 0; i < n; i++){
        s[i].input();
    }
    int kristen_score = s[0].calculateTotalScore();
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }
    cout << count;
    return 0;
}

/*================*/