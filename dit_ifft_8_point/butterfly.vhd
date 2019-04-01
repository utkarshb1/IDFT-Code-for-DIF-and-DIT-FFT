--CODE FOR BUTTERFLY 
library IEEE;												--IMPORTING LIBRARY
use IEEE.STD_LOGIC_1164.ALL;
library work;												--USING FILES FROM WORK DIRECTORY
use work.dit_ifft_pkg.ALL;								--USING PACKAGE DIT_IFFT_PKG FROM WORK DIRECTORY
--------------------------------------------------------------------------------------------------------------------
entity butterfly is 										--ENTITY DECLARATION
   port(
      b1,b2 : in complex;      						--INPUTS OF BUTTERFLY STRUCTURE
      w :in complex;      								--PHASE FACTOR
      z1,z2 :out complex); 							--OUTPUTS OF LIBRARY					
end butterfly;
--------------------------------------------------------------------------------------------------------------------
architecture Behavioral of butterfly is 			--ARCHITECTURE DECLARATION
begin 		
z1 <= add(b1,multi(b2,w));								--BUTTERFLY EQUATION FOR ADDITION
z2 <= sub(b1,multi(b2,w));								--BUTTERFLY EQUATION FOR SUBSTRACTION
																--AND ASSIGNING VALUE TO OUTPUT
end Behavioral;											--END OF ARCHITECTURE