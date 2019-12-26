int tones[]={523, 587, 659, 698, 784, 880, 988, 1050};

void setup() {   

pinMode(2, INPUT);             
pinMode(3, INPUT);
pinMode(4, INPUT);
pinMode(5, INPUT);
pinMode(6, INPUT);
pinMode(7, INPUT);
pinMode(8, INPUT);
pinMode(9, INPUT);

pinMode(13, OUTPUT);
} 

void loop() {
if (digitalRead(2) == 0) {
tone (13, tones[7]);
}
else if (digitalRead(3) == 0) {

tone (13, tones[6]);
}
else if (digitalRead(4) == 0) {
tone (13, tones[5]);
}
else if (digitalRead(5) == 0) {
tone (13, tones[4]);
}
else if (digitalRead(6) == 0) {
tone (13, tones[3]);
}
else if (digitalRead(7) == 0) {
tone (13, tones[2]);
}
else if (digitalRead(8) == 0) {
tone (13, tones[1]);
}
else if (digitalRead(9) == 0) {
tone (13, tones[0]);
}
else{
noTone(13);
}
}
