# Cifrado-afin
En el presente repositario se adjunta dos programas, uno contiene el cifrado afín verificado y funcionando a toda su plenitud, y el otro es un programa el cual debemos decifrar un mensaje sin tener la clave inicial.

En el primer programa contiene una funcion cifrado y descifrado, los cuales se le tienen que pasar un 4 parametros: valor a de la clave, valor b de la clave, el mensaje o array del mensaje y el valor de la cantidad de elementos del mensaje, con estos datos las función trabajaran con normalidad. Para realizar este ejercicio nos basamos en la Aritmética Modular, específicamente en su aplicación en cifrados. Para el realizar un cifrado afín se debe realizar la siguiente ecuación:
                                                              C(x)= (ax + b) mod 27
Ejemplo: Si queremos cifrar la letra A, debemos hacer lo siguiente:
              Sabemos que A = 0 y que la llave será {a=4, b=7}
                                                              C(0) = (4(0) + 7) mod 27
                                                              C(0) = 7 mod 27
                                                              C(0) = 7 ---> H
              Entonces podemos decir que A con Cifrado Afín será H.
              
De esta manera podremos cifrar frases completas utilizando arrays donde almacenarlos y aplicando el cifrado letra por letra mediante bucles.

Para la labor de descifrado nos guiamos de una ecuación diferente:
                                                              D(x)= (a'*(x-b)) mod 27
                     Donde a' es la inversa del a para cifrado
Ejemplo: Si queremos descifrar la letra H, debemos hacer lo siguiente:
              Sabemos que H = 7 y que la llave será {a=4, b=7} y a' es 7
                                                              D(7)= (7*(7-7)) mod 27
                                                              D(7) = 0 mod 27
                                                              D(7) = 0 ---> A
              Entonces podemos decir que H con Descifrado Afín será A.


En el segundo programa contiene una funcion descifrado y encontrar valor de a y b; a la funcion se le pasan los parametros ya antes mencionados,sin embargo, la otra función debe hallar los valores para la clave y así de esta manera poder descifrar el mensaje.
Logramos hallar los valores de a y b, pero al momento decifrar utilizando estos parámetros, el mensaje obtenino no logra tomar sentido.
