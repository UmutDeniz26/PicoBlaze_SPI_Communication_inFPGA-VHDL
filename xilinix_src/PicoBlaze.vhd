----------------------------------------------------------------------------------
-- Company: 
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
entity PicoBlaze is
    Port ( 
			  CLK : in STD_LOGIC;
			  LEDS : out  STD_LOGIC_VECTOR(7 downto 0);
           Switches : in  STD_LOGIC_VECTOR(7 downto 0);
			  port_id1 : out STD_LOGIC_VECTOR (7 downto 0);
			  port_id2 : out STD_LOGIC_VECTOR (7 downto 0);
			  jumper1,jumper2: out STD_LOGIC:='0';
           jumper3,jumper4: in STD_LOGIC:='0'
			  );
end PicoBlaze;

architecture PicoBlaze of PicoBlaze is

component kcpsm3 is
    Port (      address : out std_logic_vector(9 downto 0);
            instruction : in std_logic_vector(17 downto 0);
                port_id : out std_logic_vector(7 downto 0);
           write_strobe : out std_logic;
               out_port : out std_logic_vector(7 downto 0);
            read_strobe : out std_logic;
                in_port : in std_logic_vector(7 downto 0);
              interrupt : in std_logic;
          interrupt_ack : out std_logic;
                  reset : in std_logic;
                    clk : in std_logic);
end component;

component BRAM0t is
    Port (      address : in std_logic_vector(9 downto 0);
            instruction : out std_logic_vector(17 downto 0);
                    clk : in std_logic);
end component;

component BRAM0r is
    Port (      address : in std_logic_vector(9 downto 0);
            instruction : out std_logic_vector(17 downto 0);
                    clk : in std_logic);
end component;
	
	signal address1     : std_logic_vector(9 downto 0);
	signal instruction1 : std_logic_vector(17 downto 0);
	signal kcpsm3_port_id1     : std_logic_vector(7 downto 0);
	signal kcpsm3_write_strobe1: std_logic;
	signal kcpsm3_out_port1    : std_logic_vector(7 downto 0);
	signal kcpsm3_read_strobe1 : std_logic;
	signal kcpsm3_in_port1     : std_logic_vector(7 downto 0);
	signal kcpsm3_interrupt1   : std_logic:= '0';
	signal kcpsm3_interrupt1_ack1: std_logic:= '0';
	signal kcpsm3_reset1       : std_logic:= '0';

	signal address2     : std_logic_vector(9 downto 0);
	signal instruction2 : std_logic_vector(17 downto 0);
	signal kcpsm3_port_id2     : std_logic_vector(7 downto 0);
	signal kcpsm3_write_strobe2: std_logic;
	signal kcpsm3_out_port2    : std_logic_vector(7 downto 0);
	signal kcpsm3_read_strobe2 : std_logic;
	signal kcpsm3_in_port2     : std_logic_vector(7 downto 0);
	signal kcpsm3_interrupt2   : std_logic:= '0';
	signal kcpsm3_interrupt1_ack2: std_logic:= '0';
	signal kcpsm3_reset2       : std_logic:= '0';
	
   signal data_out: std_logic_vector(7 downto 0);
	signal clk_out: std_logic;
	
	signal checkData     : std_logic_vector(7 downto 0):="00000000";

begin

	 -- Instantiate kcpsm3
  kcpsm3_t: kcpsm3
    port map (
      address       => address1,
      instruction   => instruction1,
      port_id       => port_id1,
      write_strobe  => kcpsm3_write_strobe1,
      out_port      => kcpsm3_out_port1,
      read_strobe   => kcpsm3_read_strobe1,
      in_port       => kcpsm3_in_port1,
      interrupt     => kcpsm3_interrupt1,
      interrupt_ack => kcpsm3_interrupt1_ack1,
      reset         => kcpsm3_reset1,
      clk           => clk
    );
	 
	 kcpsm3_r: kcpsm3
    port map (
      address       => address2,
      instruction   => instruction2,
      port_id       => port_id2,
      write_strobe  => kcpsm3_write_strobe2,
      out_port      => kcpsm3_out_port2,
      read_strobe   => kcpsm3_read_strobe2,
      in_port       => kcpsm3_in_port2,
      interrupt     => kcpsm3_interrupt2,
      interrupt_ack => kcpsm3_interrupt1_ack2,
      reset         => kcpsm3_reset2,
      clk           => clk
    );

  -- Instantiate BRAM0
   BRAM0_t: BRAM0t
    port map (
      address     => address1,
      instruction => instruction1,
      clk         => clk
    );
	 BRAM0_r: BRAM0r
    port map (
      address     => address2,
      instruction => instruction2,
      clk         => clk
    );
	
	process(CLK)is begin
		if(rising_edge(CLK))then
			
			kcpsm3_in_port1 <= Switches;
			jumper1 <= checkData(0);
			jumper2 <= checkData(1);
			kcpsm3_in_port2 <= "000000" & jumper4 & jumper3;
		
		end if;
	end process;
	
	process(kcpsm3_write_strobe1) is begin
	
		if(rising_edge(kcpsm3_write_strobe1))then
		
			checkData<=kcpsm3_out_port1;
			
		
		end if;
	end process;
	
	process(kcpsm3_write_strobe2) is begin
	
		if(rising_edge(kcpsm3_write_strobe2))then
			
			LEDS <= kcpsm3_out_port2;
		
		end if;
	
	end process;
	
end PicoBlaze;

