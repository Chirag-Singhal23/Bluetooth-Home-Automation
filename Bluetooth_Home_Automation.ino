String text;
void setup() {
pinMode (13,OUTPUT);
pinMode (12,OUTPUT);
pinMode (10,OUTPUT);
Serial.begin(9600) ;
Serial.begin(9600) ;
Serial.begin(9600) ;}
void loop ( ) {
while (Serial.available ( )) {
delay (10) ;
delay (10) ;
char c = Serial.read() ;
text +=c;}
if (text. length() > 0)
{Serial.println(text) ;
if (text == "on"){
digitalWrite (13, HIGH) ;}
if (text =="off"){
digitalWrite (13,LOW);}
if (text == "on1"){
digitalWrite (12, HIGH) ;}
if (text =="off1"){
digitalWrite (12,LOW);}
if (text == "on2"){
digitalWrite (10, HIGH) ;}
if (text =="off2"){
digitalWrite (10,LOW);}
text="";}
}
