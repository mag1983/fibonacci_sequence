//The Fibonacci sequence
#include <iostream>

using namespace std;
int n,first=0,second=1,next;

int main()
{
    cout << "Enter the number of terms: ";
    cin >> n;
    cout <<"\n  The Fibonacci sequence is:";
    for (int i=0; i<n ;i++) {           	//loop works fine till the condition is TRUE
        cout<<" "<<first;
        next=first+second;
        first=second;
        second=next;
    }
    cout<<"\n\n  "<<n<<" term value is: "<<first<<endl; 	//first value when the loop condition is FALSE
    return 0;
}
