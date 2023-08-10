#include <LiquidCrystal.h>
const int rs = 8, en = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int czujnik = A1;   
 
void setup() {
  Serial.begin(9600);        
  Serial.println("----");
  pinMode(13, OUTPUT);    
  pinMode(12, OUTPUT);
}
 
void loop() {
  int war = analogRead(czujnik);      
  Serial.print(war);
      lcd.begin(16, 2);
      lcd.print("Czujnik swaitla");   

  if (war > 700)                      
  {
    
    lcd.setCursor(0,1);
    lcd.print("[==============]");
  }
  else if (650 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[============= ]");
  }
  else if (600 < war ){
    
    lcd.setCursor(0,1);
    lcd.print("[============  ]");
  }
  else if (550 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[===========   ]");
  }
  else if (500 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[==========    ]");
  }
  else if (450 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[=========     ]");
  }
  else if (400 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[========      ]");
  }
    else if (350 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[=======       ]");
  }
  else if (300 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[======        ]");
  }
  else if (250 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[=====         ]");
  }
  else if (200 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[====          ]");
  }
  else if (150 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[===           ]");
    
  }
  else if (100 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[==            ]");
  }
  else if (50 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[=             ]");
  }
  else if (0 < war ){
    
    
    lcd.setCursor(0,1);
    lcd.print("[              ]");
  }
  Serial.println("");
  delay(200);                         
}
