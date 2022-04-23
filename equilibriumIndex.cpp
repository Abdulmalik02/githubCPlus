#include <vector>
#include <iostream>
using namespace std;

void printVector( vector<int> &A )
{
    vector<int>::iterator it;
    for( it = A.begin(); it != A.end(); it++ )
    {
        cout << *it <<" ";
    }
    cout << endl;
}

int solution(vector<int> &A) {

    long int leftSum = 0;
    long int rightSum = 0;
    long int sum = 0;
    
    // special case: no elements
    if( (int)A.size() == 0 )
    {
        return -1;
    }
    
    for( int i = 0; i < (int)A.size(); i++ )
    {
        sum += A[i];
    }
    
    // special case : P = 0
    if( sum == A[0] )
    {
        return 0;
    }

    for( int P = 1; P < (int)A.size(); P++ )
    {
        leftSum += A[P-1];
        rightSum = sum - leftSum - A[P];
        
        if( leftSum == rightSum )
        {
            return P;
        }
    }
    
    return -1;
}

int main()
{
    int arrayA[8] = { -1, 3, -4, 5, 1, -6, 2, 1 };
    int arrayB[2] = { -1, 0 };
    
    vector<int> A ( arrayA, arrayA + 8 );
    vector<int> B ( arrayB, arrayB + 2 );
    
    printVector(A);
    printVector(B);
    
    cout << solution( A ) << endl; // 1 or 3 or 7
    cout << solution( B ) << endl; // 0
}
