void setup() {
  DDRD = B01101000; //Pins 3,5& 6 are OUTPUTS
  DDRB = B00001110; //Pins 9,10& 11 are OUTPUTS

}

void loop() {
  PORTD = B01101000;       // Pins 3,5 & 6 are HIGH
  PORTB = B00000000;       // Pins 9,10 & 11 are LOW
  delayMicroseconds(400);
  PORTD = B00101000;       // Pin 6 goes LOW
  PORTB = B00001000;       // Pin 11 goes HIGH
  delayMicroseconds(400);
  PORTD = B00100000;       //Pin 3 goes LOW
  PORTB = B00001010;       //Pin 9 goes HIGH
  delayMicroseconds(100);
  PORTD = B00000000;       // Pin 5 goes LOW
  PORTB = B00001110;       // Pin 10 goes HIGH
  delayMicroseconds(1100);
  PORTD = B00101000;       // Pins 3&5 go HIGH
  PORTB = B00001000;       // Pins 9&10 go LOW
  delayMicroseconds(400);
  PORTD = B01101000;       // Pin 6 goes HIGH
  PORTB = B00000000;       // Pin 11 goes LOW
  delayMicroseconds(900);
  PORTD = B00101000;       // Pin 6 goes LOW
  PORTB = B00001000;       // Pin 11 goes HIGH
  delayMicroseconds(300);
  PORTD = B00001000;       // Pin 5 goes LOW
  PORTB = B00001100;       // Pin 10 goes HIGH
  delayMicroseconds(200);
  PORTD = B00000000;       // Pin 3 goes LOW
  PORTB = B00001110;       // Pin 9 goes HIGH
  delayMicroseconds(900);
  PORTD = B00001000;       // Pin 3 goes HIGH
  PORTB = B00001100;       // Pin 9 goes LOW
  delayMicroseconds(400);
  PORTD = B01001000;       // Pin 6 goes HIGH
  PORTB = B00000100;       // Pin 11 goes LOW
  delayMicroseconds(100);
  PORTD = B01101000;       // Pin 5 goes HIGH
  PORTB = B00000000;       // Pin 10 goes LOW
  delayMicroseconds(1000);
  PORTD = B01001000;       // Pin 5 goes LOW
  PORTB = B00000100;       // Pin 10 goes HIGH
  delayMicroseconds(200);
  PORTD = B00001000;       // Pin 6 goes LOW
  PORTB = B00001100;       // Pin 11 goes HIGH
  delayMicroseconds(300);
  PORTD = B00000000;       // Pin 3 goes LOW
  PORTB = B00001110;       // Pin 9 goes HIGH
  delayMicroseconds(1000);
  PORTD = B00001000;       // Pin 3 goes HIGH
  PORTB = B00001100;       // Pin 9 goes LOW
  delayMicroseconds(100);
  PORTD = B01001000;       // Pin 6 goes HIGH
  PORTB = B00000100;       // Pin 11 goes LOW
  delayMicroseconds(300);
  PORTD = B01101000;       // Pin 5 goes HIGH
  PORTB = B00000000;       // Pin 10 goes LOW
  delayMicroseconds(900);
  PORTD = B01001000;       // Pin 5 goes LOW
  PORTB = B00000100;       // Pin 10 goes HIGH
  delayMicroseconds(300);
  PORTD = B01000000;       // Pin 3 goes LOW
  PORTB = B00000110;       // Pin 9 goes HIGH
  delayMicroseconds(200);
  PORTD = B00000000;       // Pin 6 goes LOW
  PORTB = B00001110;       // Pin 11 goes HIGH
  delayMicroseconds(900);
  PORTD = B01000000;       // Pin 6 goes HIGH
  PORTB = B00000110;       // Pin 11 goes LOW
  delayMicroseconds(400);
  PORTD = B01001000;       // Pin 3 goes HIGH
  PORTB = B00000100;       // Pin 9 goes LOW
  delayMicroseconds(100);
  PORTD = B01101000;       // Pin 5 goes HIGH
  PORTB = B00000000;       // Pin 10 goes LOW
  delayMicroseconds(1100);
  PORTD = B01000000;       // Pins 3&5 go LOW
  PORTB = B00000110;       // PinS 9&10 go HIGH
  delayMicroseconds(400);
  PORTD = B00000000;       // Pin 6 goes LOW
  PORTB = B00001110;       // Pin 11 goes HIGH
  delayMicroseconds(900);
  PORTD = B01000000;       // Pin 6 goes HIGH
  PORTB = B00000110;       // Pin 11 goes LOW
  delayMicroseconds(300);
  PORTD = B01100000;       // Pin 5 goes HIGH
  PORTB = B00000010;       // Pin 10 goes LOW
  delayMicroseconds(200);
  PORTD = B01101000;       // Pin 3 goes HIGH
  PORTB = B00000000;       // Pin 9 goes LOW
  delayMicroseconds(900);
  PORTD = B01100000;       // Pin 3 goes LOW
  PORTB = B00000010;       // Pin 9 goes HIGH
  delayMicroseconds(400);
  PORTD = B00100000;       // Pin 6 goes LOW
  PORTB = B00001010;       // Pin 11 goes HIGH
  delayMicroseconds(100);
  PORTD = B00000000;       // Pin 5 goes LOW
  PORTB = B00001110;       // Pin 10 goes HIGH
  delayMicroseconds(1000);
  PORTD = B00100000;       // Pin 5 goes HIGH
  PORTB = B00001010;       // Pin 10 goes LOW
  delayMicroseconds(200);
  PORTD = B01100000;       // Pin 6 goes HIGH
  PORTB = B00000010;       // Pin 11 goes LOW
  delayMicroseconds(300);
  PORTD = B01101000;       // Pin 3 goes HIGH
  PORTB = B00000000;       // Pin 9 goes LOW
  delayMicroseconds(1000);
  PORTD = B01100000;       // Pin 3 goes LOW
  PORTB = B00000010;       // Pin 9 goes HIGH
  delayMicroseconds(100);
  PORTD = B00100000;       // Pin 6 goes LOW
  PORTB = B00001010;       // Pin 11 goes HIGH
  delayMicroseconds(300);
  PORTD = B00000000;       // Pin 5 goes LOW
  PORTB = B00001110;       // Pin 10 goes HIGH
  delayMicroseconds(900);
  PORTD = B00100000;       // Pin 5 goes HIGH
  PORTB = B00001010;       // Pin 10 goes LOW
  delayMicroseconds(300);
  PORTD = B00101000;       // Pin 3 goes HIGH
  PORTB = B00001000;       // Pin 9 goes LOW
  delayMicroseconds(200);
  PORTD = B01101000;       // Pin 6 goes HIGH
  PORTB = B00000000;       // Pin 11 goes LOW
  delayMicroseconds(500); 
}
