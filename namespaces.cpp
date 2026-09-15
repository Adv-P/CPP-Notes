#include <iostream>

namespace first{
    int x = 0;
}

int main() {
    //Namespace provides a solution to avoid naming conflictcs
    //each entity needs a unique name
    //namespces allow for identically named entities as long as the namespaces are different
    
    using namespace first; //Assumes that we are using the first namespace
    std::cout << x << '\n';

    //std::cout << first::x << '\n'; Another way

    using namespace std; //Assumes that we are using the std namespace, but not recommened becuase it can cause naming conflicts
    cout << x << '\n';

    return 0;
}