#include "Inventario.h"
#include <time.h>
using namespace std;

int main()
{
    time_t tAct = time(NULL);
    cout << "Tiempo actual: " << asctime(localtime(&tAct));
    /*Inventario *inv = new Inventario();gggggg
    inv->ColeccionDeProductos->insert(make_pair(123, new Producto("hola",1,2)));*/

    return 0;
}