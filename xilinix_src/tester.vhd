--------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;  -- Add this line

 
ENTITY tester IS
END tester;
 
ARCHITECTURE behavior OF tester IS 
 
    COMPONENT PicoBlaze
    PORT(
         CLK : IN  std_logic;
         LEDS : OUT  std_logic_vector(7 downto 0);
         Switches : IN  std_logic_vector(7 downto 0);
         port_id1 : OUT  std_logic_vector(7 downto 0);
         port_id2 : OUT  std_logic_vector(7 downto 0);
			  jumper1,jumper2: out STD_LOGIC:='0';
           jumper3,jumper4: in STD_LOGIC:='0'
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal Switches : std_logic_vector(7 downto 0) := "01100110";

 	--Outputs
   signal LEDS : std_logic_vector(7 downto 0);
   signal port_id1 : std_logic_vector(7 downto 0);
   signal port_id2 : std_logic_vector(7 downto 0);
	signal cntr : std_logic_vector(7 downto 0):="00000000";
	
	-- Jumpers
  signal jumper1 : std_logic:='0';
  signal jumper2 : std_logic:='0';
  signal jumper3 : std_logic:='0';
  signal jumper4 : std_logic:='0';
  
   -- Clock period definitions
   constant CLK_period : time := 0.2 us;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: PicoBlaze PORT MAP (
          CLK => CLK,
          LEDS => LEDS,
          Switches => Switches,
          port_id1 => port_id1,
          port_id2 => port_id2,
			 jumper1 => jumper1, 
			 jumper2 => jumper2,
			 jumper3 => jumper3,
			 jumper4 => jumper4
  );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
	
	sw_process :process
   begin
		Switches <= cntr;
		wait for CLK_period*10000;
		cntr <= std_logic_vector(unsigned(cntr) + 1);
   end process;
	
	jumper_process :process
	begin
		jumper3 <= jumper1;
		jumper4 <= jumper2;
		wait for CLK_period/1000;
   end process;
 

END;
