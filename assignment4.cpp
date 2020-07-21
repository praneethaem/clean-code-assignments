
enum subtype 
{ 
    t_spinner, t_slider, t_hopper 
}; 

class Icon
{
  float speed, glow, energy;
  int x, y;
  public :
  static void Icon_select(subtype Icon_type);
}Icon_obj;


class spinner :public Icon
{
  bool clockwise; // need for spinner
  bool expand; // need for spinner
  public :
  void spin(){}
}spinner_obj;

class slider :public Icon
{
  bool vertical; // need for slider
  int distance; // need for slider
  public :
  void slider(){}
}slider_obj;

class hopper :public Icon
{
  bool visible; // need for hopper
  int xcoord, ycoord; // need for hopper
  public :
  void hopper(){}
}hopper_obj;

void Icon_select(subtype Icon_type)
{

  if(Icon_type == 1)
  {
   spinner_obj.spin();
  }
  else if(Icon_type == 2)
  {
   slider_obj.slide();
  }
  else
  {
   hopper_obj.hop();
  }
}

class move 
{
  move()
  {
   subtype type = 1;
   Icon_obj.Icon_select(type) ;
   }
}
