# Proyecto Laboratorio POO 2

1. 104626011541

2. Por qué no se puede crear un objeto de Vehiculo directamente?
    R/ No se puede crear directamente debido a que Vehiculo es una clase abstracta ya que posee un metodo virtual puro (CalcularTarifa()).

3. Por qué el destructor de Vehiculo es virtual.
    R/ Es virtual ya que asi permitimos al compilador saber que al momento de ejecutar el destructor desdde vehiculo tambien debe ejecutar el destructor de la clase hija como moto, carro camion o bus.

4. Qué hace tu programa si se llama al registro de un paso con un puntero nulo, y por qué
decidiste eso.
    R/ Si instancio un registro de paso como un puntero y lo llamo por ejemplo para imprimirlo con la sobrecarga del operador <<, el programa me imprimiria no se rompe y en cambio devuelve un 0. Decidí esto ya que nos permite evitar que el programa se rompa al llamar a un registro nulo.
