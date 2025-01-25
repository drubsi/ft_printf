
#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{	
	int	ft_ret;
	int	orgnl_ret;
	int num;

	num = 42;
	
	ft_ret = ft_printf ("Prueba con cadenas ft_printf: %s.\n", "Siempre va a haber 3 caracteres de diferencia de retorno por el nombre de la funcion");
	orgnl_ret = printf ("Prueba con cadenas printf: %s.\n", "Siempre va a haber 3 caracteres de diferencia de retorno por el nombre de la funcion");
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
	printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	ft_ret = ft_printf ("Prueba con cadena vacia ft_printf: %s.\n", "");
	orgnl_ret = printf ("Prueba con cadena vacia printf: %s.\n", "");
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
	printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	printf("\n");
	printf("\n");
	ft_ret = ft_printf ("Prueba con enteros ft_printf: %%d%d y %%i%i.\n", 42, 42);
	orgnl_ret = printf("Prueba con enteros printf: %%d%d y %%i%i.\n", 42, 42);
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
	printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	printf("\n");
	printf("\n");
	ft_ret = ft_printf ("Prueba con enteros negativos ft_printf: %d.\n", -42);
	orgnl_ret = printf("Prueba con enteros negativos printf: %d.\n", -42);
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
    printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	printf("\n");
	printf("\n");
	ft_ret = ft_printf ("Prueba con caracteres ft_printf: %c.\n", 'A');
	orgnl_ret = printf("Prueba con caracteres printf: %c.\n", 'A');
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
	printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	ft_ret = ft_printf ("Prueba con caracter nulo ft_printf: %c.\n", '\0');
	orgnl_ret = printf ("Prueba con caracter nulo printf: %c.\n", '\0');
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
    printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	printf("\n");
	printf("\n");
	ft_ret = ft_printf ("Prueba con unsigned ft_printf: %u.\n", 4294967295U);
	orgnl_ret = printf("Prueba con unsigned printf: %u.\n", 4294967295U);
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
    printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	printf("\n");
	printf("\n");
	ft_ret = ft_printf ("Prueba con hexadecimal mayusculas ft_printf: %X.\n", 255);
	orgnl_ret = printf("Prueba con hexadecimal mayusculas printf: %X.\n", 255);
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
    printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	printf("\n");
	printf("\n");
	ft_ret = ft_printf ("Prueba con hexadecimal minusculas ft_printf: %x.\n", 255);
	orgnl_ret = printf("Prueba con hexadecimal minusculas printf: %x.\n", 255);
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
    printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	printf("\n");
	printf("\n");
	ft_ret = ft_printf ("Prueba con punteros ft_printf: %p.\n", &num);
	orgnl_ret = printf("Prueba con punteros printf: %p.\n", &num);
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
    printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	ft_ret = ft_printf ("Prueba con puntero nulo ft_printf: %p.\n", NULL);
	orgnl_ret = printf ("Prueba con puntero nulo printf: %p.\n", NULL);
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
	printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	printf("\n");
	printf("\n");
	ft_ret = ft_printf ("Prueba con porcentajes ft_printf: %%.\n");
	orgnl_ret = printf("Prueba con porcentajes printf: %%.\n");
	printf("\n");
	printf ("Retorno de ft_printf: %d caracteres.\n", ft_ret);
    printf ("Retorno de printf: %d caracteres.\n", orgnl_ret);
	printf("Fin de la prueba.\n");
	char *str = "hoal";
	printf("%i %d %p %x %X %c %s ", 12, 12, -1, 10, 10, *str, str); 
	ft_printf("%i %d %p %x %X %c %s ", 12, 12, , 10, 10, *str, str); 

	return (0);
}
