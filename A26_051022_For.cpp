//FOR - laços determinado diferente do WHILE
#include <iostream>

using namespace std;

int main()
{
    for(int i=0, j=10; i!=j; i++, j--){
        
        cout << "\ni: " << i;
        cout << "\nj: " << j;
    }

    return 0;
}
