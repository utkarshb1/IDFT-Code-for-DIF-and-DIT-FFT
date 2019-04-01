--PACKAGE FOR DIT_IFFT_8PT
library IEEE;														--IMPORTING LIBRARY
use IEEE.std_logic_1164.all;
use IEEE.MATH_REAL.ALL;											--USING MATH_REAL LIBRARY
-------------------------------------------------------------------------------------------------------------
package dit_ifft_pkg is										   --PACKAGE DECLARATION
type complex is 			  										--DEFINING A DATA STRUCTURE
    record															--DEFINING RECORD
        r : real;
        i : real;
    end record;
type ar is array (0 to 7) of complex;						--DECALRING AN ARRAY OF TYPE COMPLEX OF LENGTH = 8
type ar2 is array (0 to 3) of complex;						--DECLARING AN ARRAY OF TYPE COMPLEX OF LENGTH = 4

function add (n1,n2 : complex) return complex;			--FUNCTION DECLARATION OF ADDITION
function sub (n1,n2 : complex) return complex;			--FUNCTION DECLARATION OF SUBSTRACTION
function multi (n1,n2 : complex) return complex;		--FUNCTION DECLARATION OF MULTIPLICATION

end dit_ifft_pkg; 
-------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------
package body dit_ifft_pkg is 									--START OF PACKAGE BODY 

----------------------------------------------------------------------------------------------
--FUNCTION FOR ADDITION
function add (n1,n2 : complex) return complex is
variable s : complex;											--VARIABLE DECLARATION
begin 
s.r:=n1.r + n2.r;													--ADDITION OF REAL PARTS
s.i:=n1.i + n2.i;													--ADDITOIN OF IMAGINARY PARTS								
return s;															--RETURNING SUM
end add;
----------------------------------------------------------------------------------------------


----------------------------------------------------------------------------------------------
--FUNCTION FOR SUBSTRACTION
function sub (n1,n2 : complex) return complex is
variable d : complex;											--VARIABLE DECLARATION
begin 
d.r:=n1.r - n2.r;													--SUBSTRACTING REAL PARTS
d.i:=n1.i - n2.i;													--SUBSTRACTING IMAGINARY PARTS
return d;															--RETURNING SUBSTRACTED VALUE
end sub;
----------------------------------------------------------------------------------------------


----------------------------------------------------------------------------------------------
--FUNCTION FOR MULTIPLICATION.
function multi (n1,n2 : complex) return complex is
variable p : complex;											--VARIABLE DECLARATION
begin 
p.r:=(n1.r * n2.r) - (n1.i * n2.i);							--MULTIPLYING REAL WITH IMAGINARY VALUE
p.i:=(n1.r * n2.i) + (n1.i * n2.r);							--MULTIPLYING IMAGINARY PARTS
return p;															--RETURNING MULTIPLIES VALUE
end multi;
----------------------------------------------------------------------------------------------
end dit_ifft_pkg;													--END OF PACKAGE BODY 
----------------------------------------------------------------------------------------------