
#define botao 12
#define led 7
void setup()
{
  pinMode(botao,INPUT_PULLUP);
  pinMode(led,OUTPUT);
}

void loop()
{
 bool chave;  //cria variavel chamada chave booleana(0 ou 1 )
  chave = digitalRead(botao);// leitura do pino 12 
  if(chave==0) // se chave precionada 
{
 digitalWrite (led,1);// ascende o led
}
  else // se não
{
   digitalWrite (led,0 ); // apaga o led 
}
}
