
#include <iostream>

using namespace std;
const int StackSize = 20 ;
int Stack[StackSize] = {} ;
int top = -1 ;

bool Empty () {
 return (top == -1) ;
}

bool Full () {
return (top == StackSize) ;
}
void make_empty () {
  top = -1 ;
}

void Puch(int input ) {
if (Full() ) {
cout << "StackOverFlow" << endl ;
}
else {
    top ++ ;
    Stack [top] = input ;
}
}
int pop () {
if (Empty()) {
    cout << "Stack Underflow" << endl ;
    return -1 ;
}
else {
return Stack [top -- ] ;
}
}

void Print_Stack () {
if (!Empty()) {
    for (int i=top ; i>=0 ; i--) {
        cout << "\t" << Stack [i] ;
    }
}
}

int main()
{
 Puch (6) ;
 Puch (40) ;
 Puch (8) ;
 Puch (95) ;
 pop () ;
 Print_Stack() ;
    return 0;
}
