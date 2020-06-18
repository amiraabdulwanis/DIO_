#include"STD_types.h"
#include"Bit_math.h"
#include"Error_Status.h"

#include"DIO_Int.h"
int  main(void)
{

	while(1){}
	DIO_enumSetPinDirection ( PORTD, PIN0 , OUTPUT);
	while(1){

		DIO_enumSetPinValue(PORTD, PIN0, HIGH);

	}
	return 0;
}
	
