void setup()
{
  pinMode(2, OUTPUT);//bottom left
  pinMode(3, OUTPUT);//bottom right
  pinMode(4, OUTPUT);//middle left
  pinMode(5, OUTPUT);//middle right
  pinMode(6, OUTPUT);//top left
  pinMode(7, OUTPUT);//top right

}



void loop()
{
  analogWrite(2, 200);//bottom left
  analogWrite(3, 0);//bottom right
  analogWrite(4, 200);//middle left
  analogWrite(5, 0);//middle right
  analogWrite(6, 200);//top left
  analogWrite(7, 120);//top right
}
/*Repersents
 * - 
 * -
 * -
Where * is on and - is off
 */
