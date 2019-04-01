--TESTBENCH FOR DIF_IFFT_8PT
LIBRARY ieee;														--IMPORTING LIBRARY
USE ieee.std_logic_1164.ALL;							
library work;														--WORKING IN CURRENT(WORK) FOLDER
use work.dif_ifft_pkg.all;										--USING PACKAGE DIF_IFFT_PKG FROM WORK DIRECTORY
----------------------------------------------------------------------------------------------------
ENTITY tb IS														--TESTBENCH ENTITY DECLARATION
END tb;
----------------------------------------------------------------------------------------------------
----------------------------------------------------------------------------------------------------
ARCHITECTURE behavior OF tb IS 								--ARCHITECTURE DECLARATION
signal s,y : ar;													--SIGNAL DECLARATION
begin    
uut: entity work.dif_ifft_8pt PORT MAP (s => s,y => y);-- Instantiating the Unit Under Test (UUT)
   -- Stimulus process
   stim_proc: process
   begin        
      s(0) <= (1.0,0.0);   									--GIVING INPUTS
        s(1) <= (2.0,0.0); 
        s(2) <= (3.0,0.0); 
        s(3) <= (4.0,0.0);    
        s(4) <= (5.0,0.0); 
        s(5) <= (6.0,0.0); 
        s(6) <= (7.0,0.0);  
        s(7) <= (8.0,0.0);
     wait;															--WAIT STATEMENT 		
   end process;													--END OF PROCESS
end behavior;														--END OF ARCHITECTURE
--------------------------------------------------------------------------------------------------