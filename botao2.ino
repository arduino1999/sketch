#define liga 12
#define desliga 11
#define led 7
void setup()
{
  pinMode(liga,INPUT_PULLUP);
  pinMode(desliga,INPUT_PULLUP);
  pinMode(led,OUTPUT);
}
void loop()
{
 bool chave;  //cria variavel chamada chave booleana(0 ou 1 )
 chave = digitalRead(liga);// 
 if(chave==0) // se chave precionada 
{
 digitalWrite(led,1);// ascende o led
}
 chave = digitalRead(desliga);
  if(chave==0)
{
 digitalWrite (led,0);// apaga o led
 }
 }
