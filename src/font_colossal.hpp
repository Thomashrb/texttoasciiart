#ifndef FONT_COLOSSAL_HPP
#define FONT_COLOSSAL_HPP

#include <algorithm>
#include <fstream>
#include <string>

namespace font_colossal
{
void          printascii(std::string);
const uint8_t FONT_HEIGHT = 11;

const std::string BLOCK = R"V0G0N(
.d8888b.
.d8888b.
.d8888b.
.d8888b.
.d8888b.
.d8888b.
.d8888b.
.d8888b.
.d8888b.
.d8888b.
.d8888b.
)V0G0N";

const std::string SPACE = R"V0G0N(
        
        
        
        
        
        
        
        
        
        
        
)V0G0N";


const std::string LOWER_A = R"V0G0N(
        
        
        
 8888b. 
    "88b
.d888888
888  888
"Y888888
        
        
        
)V0G0N";

const std::string LOWER_B = R"V0G0N(
888     
888     
888     
88888b. 
888 "88b
888  888
888 d88P
88888P" 
        
        
        
)V0G0N";

// FIXME implement
const std::string LOWER_C = R"V0G0N(
        
        
        
 .d8888b
d88P"   
888     
Y88b.   
 "Y8888P
        
        
        
)V0G0N";

const std::string LOWER_D = R"V0G0N(
     888
     888
     888
 .d88888
d88" 888
888  888
Y88b 888
 "Y88888
        
        
        
)V0G0N";

const std::string LOWER_E = R"V0G0N(
        
        
        
 .d88b. 
d8P  Y8b
88888888
Y8b.    
 "Y8888 
        
        
        
)V0G0N";

const std::string LOWER_F = R"V0G0N(
 .d888
d88P" 
888   
888888
888   
888   
888   
888   
      
      
      
)V0G0N";

const std::string LOWER_G = R"V0G0N(
        
        
        
 .d88b. 
d88P"88b
888  888
Y88b 888
 "Y88888
     888
Y8b d88P
 "Y88P" 
)V0G0N";

const std::string LOWER_H = R"V0G0N(
888     
888     
888     
88888b. 
888 "88b
888  888
888  888
888  888
        
        
        
)V0G0N";

const std::string LOWER_I = R"V0G0N(
d8b
Y8P
   
888
888
888
888
888
   
   
   
)V0G0N";

const std::string LOWER_J = R"V0G0N(
 d8b
 Y8P
    
8888
"888
 888
 888
 888
 888
d88P
8P" 
)V0G0N";

const std::string LOWER_K = R"V0G0N(
888     
888     
888     
888  888
888 .88P
888888K 
888 "88b
888  888
        
        
        
)V0G0N";

const std::string LOWER_L = R"V0G0N(
888
888
888
888
888
888
888
888
   
   
   
)V0G0N";

const std::string LOWER_M = R"V0G0N(
             
             
             
88888b.d88b. 
888 "888 "88b
888  888  888
888  888  888
888  888  888
             
             
             
)V0G0N";

const std::string LOWER_N = R"V0G0N(
        
        
        
88888b. 
888 "88b
888  888
888  888
888  888
        
        
        
)V0G0N";

const std::string LOWER_O = R"V0G0N(
        
        
        
 .d88b. 
d88""88b
888  888
Y88..88P
 "Y88P" 
        
        
        
)V0G0N";

const std::string LOWER_P = R"V0G0N(
        
        
        
88888b. 
888 "88b
888  888
888 d88P
88888P" 
888     
888     
888     
)V0G0N";

const std::string LOWER_Q = R"V0G0N(
        
        
        
 .d88888
d88" 888
888  888
Y88b 888
 "Y88888
     888
     888
     888
)V0G0N";

const std::string LOWER_R = R"V0G0N(
       
       
       
888d888
888P"  
888    
888    
888    
       
       
       
)V0G0N";

const std::string LOWER_S = R"V0G0N(
        
        
        
.d8888b 
88K     
"Y8888b.
     X88
 88888P'
        
        
        
)V0G0N";

const std::string LOWER_T = R"V0G0N(
888   
888   
888   
888888
888   
888   
Y88b. 
 "Y888
      
      
      
)V0G0N";

const std::string LOWER_U = R"V0G0N(
        
        
        
888  888
888  888
888  888
Y88b 888
 "Y88888
        
        
        
)V0G0N";

const std::string LOWER_V = R"V0G0N(
        
        
        
888  888
888  888
Y88  88P
 Y8bd8P 
  Y88P  
        
        
        
)V0G0N";

const std::string LOWER_W = R"V0G0N(
             
             
             
888  888  888
888  888  888
888  888  888
Y88b 888 d88P
 "Y8888888P" 
             
             
             
)V0G0N";

const std::string LOWER_X = R"V0G0N(
         
         
         
 888  888
 `Y8bd8P'
   X88K  
 .d8""8b.
 888  888
         
         
         
)V0G0N";

const std::string LOWER_Y = R"V0G0N(
        
        
        
888  888
888  888
888  888
Y88b 888
 "Y88888
     888
Y8b d88P
 "Y88P  
)V0G0N";

const std::string LOWER_Z = R"V0G0N(
        
        
        
88888888
   d88P 
  d88P  
 d88P   
88888888
        
        
        
)V0G0N";

}  // namespace font_colossal

#endif  // FONT_COLOSSAL_HPP
