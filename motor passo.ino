#define pot A0
int i, j, pins[] = {8,9,10,11}, side = 0, velocidade;
void setup () {
   Serial.begin(9600);
   Serial.print(" DIGITE 0 OU 1");
   for(i =0;i<4; i++){
    pinMode(pins[i], OUTPUT);// CONFIGURA OS PINOS COMO SAIDA
   }
}
void loop() {
  if( Serial.available()> 0){
      i = Serial.read();
}
if( i== '0' || i == '1' )// somente atualiza side se digitar 0 ou 1
{
       side=i; //atualiza side com o valior digitado
}
velocidade = analogRead(pot); // faz a leitura do potenciometro
velocidade = map( velocidade,0,1023,5,100);

if(side == '1') { // aciona o motor no sentido horário
   Serial.println ("horario");
   Serial.println (velocidade);
   for(i=0;i<4;i++) { //intercala as bobinas acionadas 
    digitalWrite( pins[i], HIGH); //envia um pulso de um passo
    delay( velocidade);
    digitalWrite(pins[i], LOW);
   }
}
if(side =='0') { // aciona o motor no sentido anti-horário
   Serial.println ("anti-horario");
   Serial.println (velocidade);
   for(i=3;i>-1;i--) { //intercala as bobinas acionadas 
    digitalWrite( pins[i], HIGH); //envia um pulso de um passo
    delay( velocidade);
    digitalWrite(pins[i], LOW);
   }
 }
}
