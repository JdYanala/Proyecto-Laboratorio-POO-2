# Proyecto Laboratorio POO 2

1. 104626011541

2. Por qué no se puede crear un objeto de Vehiculo directamente?
    R/ No se puede crear directamente debido a que Vehiculo es una clase abstracta ya que posee un metodo virtual puro (CalcularTarifa()).

3. Por qué el destructor de Vehiculo es virtual.
    R/ Es virtual ya que asi permitimos al compilador saber que al momento de ejecutar el destructor desdde vehiculo tambien debe ejecutar el destructor de la clase hija como moto, carro camion o bus.

4. Qué hace tu programa si se llama al registro de un paso con un puntero nulo, y por qué
decidiste eso.
    R/ Si instancio un registro de paso como un puntero y lo llamo por ejemplo para imprimirlo con la sobrecarga del operador <<, el programa me imprimiria no se rompe y en cambio devuelve un 0. Decidí esto ya que nos permite evitar que el programa se rompa al llamar a un registro nulo.


> [!TIP]
> Los primero commit se generaron con el correo del github de mi hermana debido a un descuido al iniciar sesion en mi cuenta de github en github desk en el portatil de ella para trabajar desde ahi y no me di cuenta que debia cambiar el correo y el nombre con el que se estaban publicando los commit.