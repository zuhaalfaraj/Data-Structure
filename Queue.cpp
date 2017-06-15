#include <iostream>

using namespace std;
int Front = 0 ;
int Rear = 0 ;
const int Size = 5 ;
int Queue[Size] ;
int n ;

void Cycle () ;

bool isEmpty () {
 return (Rear == Front ) ;
}

bool isFull () {
return (Front == (Rear+1)%Size) ;
}

void enqueue (int newItem )
{
    Queue [Rear] = newItem ;
   Rear = (Rear +1)%Size ;

}

int Dequeue ()
{
     Front= (Front+1)%Size ;
    Queue [Front] ;


}
int PrintQueue () {
    if ( isFull() ) {
        cout << "overFlow" ;
    }
    else if (isEmpty()) {
        cout << "Under Flow" ;
    }
 else {
    cout  << "the Queue : "<<endl ;
for (int i=Front ; i <Rear ; i++ ) {
    cout << Queue [i] << endl;
}
}
}
void Cycle ()
{
    if ( Rear == Size)
{
     Rear = 0 ;

}
 if (Front== Size)
{
    Front = 0 ;
}

}
int main()
{
enqueue (7) ;
enqueue (6) ;
enqueue (4) ;
Dequeue() ;
enqueue (3) ;
enqueue (2) ;
enqueue (4) ;

PrintQueue() ;

cout << "front :" << Front << endl ;
cout << "Rear" << Rear;

    return 0;
}
