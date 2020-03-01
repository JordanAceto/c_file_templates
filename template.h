/*
--|----------------------------------------------------------------------------|
--| FILE DESCRIPTION:
--|   template.h provides a template for well formatted c-header files.
--|  
--|----------------------------------------------------------------------------|
--| NOTES:
--|   None.
--|  
--|----------------------------------------------------------------------------|
--| REFERENCES:
--|   None.
--|
--|----------------------------------------------------------------------------|
*/

#ifndef TEMPLATE_H_INCLUDED
#define TEMPLATE_H_INCLUDED

/*
--|----------------------------------------------------------------------------|
--| INCLUDE FILES
--|----------------------------------------------------------------------------|
*/

#include <stdint.h>

/*
--|----------------------------------------------------------------------------|
--| PUBLIC DEFINES
--|----------------------------------------------------------------------------|
*/

/*
--| NAME: SOME_DEFINITION
--| DESCRIPTION: an arbitrary definitionas as a demo
--| TYPE: integer
*/
#define SOME_DEFINITION 42

/*
--|----------------------------------------------------------------------------|
--| PUBLIC TYPES
--|----------------------------------------------------------------------------|
*/

/*
--| NAME: Demo_Struct_t
--| DESCRIPTION: an arbitrary struct as a demo
*/
typedef struct Demo_Struct_Type
{
    int some_member_ui32;
    char some_other_member_ch;
} Demo_Struct_t;

/*
--|----------------------------------------------------------------------------|
--| PUBLIC CONSTANTS
--|----------------------------------------------------------------------------|
*/

/*
--| NAME: SOME_CONSTANT_ui16
--| DESCRIPTION: an arbitrary constant as a demo
--| TYPE: uint16_t
*/
const uint16_t SOME_CONSTANT_ui16 = 42;

/*
--|----------------------------------------------------------------------------|
--| PUBLIC VARIABLES
--|----------------------------------------------------------------------------|
*/

/*
--| NAME: some_variable_ui16
--| DESCRIPTION: an arbitrary variable as a demo
--| TYPE: uint16_t
*/
uint16_t some_variable_ui16 = 42;

/*
--|----------------------------------------------------------------------------|
--| PUBLIC FUNCTION PROTOTYPES
--|----------------------------------------------------------------------------|
*/

/*------------------------------------------------------------------------------
Function Name:
    some_public_function

Function Description:
    Demonstrate the preferred function header template. 

Parameters:
    some_parameter: the arbitrary paramter.

Returns:
    uint8_t: the 8 bit unsigned return value.

Assumptions/Limitations:
    None
------------------------------------------------------------------------------*/
uint8_t some_public_function(uint8_t some_parameter);

#endif
