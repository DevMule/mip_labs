#include <iostream>
#include "StringNumConverter.h"

using namespace std;

int main() {
    //StringNumConverter a;//не должно работать
    StringNumConverter b("-12063959085888582858005028580285808509859590");
    StringNumConverter c(1e-1);
    StringNumConverter d(1.2);

    if (d != StringNumConverter((float) c + 1.1)) cout << "Something wrong\n";
    else cout << "As expected\n";

    cout << b + "9" << endl << c + "1" << endl;

    return 0;
}
