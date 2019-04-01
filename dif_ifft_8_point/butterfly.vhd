--CODE FOR BUTTERFLY
library IEEE;												--IMPORTING LIBRARY
use IEEE.STD_LOGIC_1164.ALL;
library work;												--USING FILES FROM WORK DIRECTORY
use work.dif_ifft_pkg.ALL;								--USING PACKAGE DIT_IFFT_PKG FROM WORK DIRECTORY
--------------------------------------------------------------------------------------------------------------------
entity butterfly is 										--ENTITY DECLARATION
   port(
      b1,b2 : in complex;      						--INPUTS OF BUTTERFLY STRUCTURE
      w :in complex;      								--PHASE FACTOR
      z1,z2 :out complex); 							--OUTPUTS OF LIBRARY					
end butterfly;
--------------------------------------------------------------------------------------------------------------------
architecture Behavioral of butterfly is			--ARCHITECTURE DECLARATION
signal z2_temp : complex;								--SIGNAL DECLARATION
begin 
z1 <= add(b1,b2);											--BUTTERFLY EQUATION FOR ADDITION
z2_temp <= sub(b1,b2);
z2 <= multi(z2_temp,w);									--BUTTERFLY EQUATION FOR SUBSTRACTION									
end Behavioral;