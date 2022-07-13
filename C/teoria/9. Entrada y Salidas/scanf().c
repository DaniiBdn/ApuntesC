Especificador	Descripción.

%c 				Leer un único carácter.
%d 				Leer un entero decimal.
%i 				Leer un entero decimal.
%e				Leer un número en punto flotante.
%f 				Leer un número en punto flotante.
%g 				Leer un número en punto flotante.
%o 				Leer un número octal.
%s 				Leer una cadena de caracteres.
%x 				Leer un número hexadecimal.
%p 				Leer un puntero.
%n 				Recibe un valor igual al número de carácter leídos.
%u 				Leer un entero sin signo.

h (short)		d, i, o, u ,x 
l (long)    		""			e, f , g
L(long double) 	e,f,g

	int x,y;
	scanf("%d%*c%d",&x,&y);
	
	Provoca que, si la entrada es 10/20, se le asigne el valor 10 a la variable x, se
	lea, y se descarte el signo /, y después se asigne el valor 20 a la variable y.