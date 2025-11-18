#include "GasNetwork.h"
#include <locale.h>

int main()
{
    GasNetwork gs;
    setlocale(LC_ALL, "rus");
    gs.NetMenu();
    return 0;
}