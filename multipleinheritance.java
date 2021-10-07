interface Mom
{
  public final float height=2.2f;
  public abstract void height();
}
interface Dad
{
  public final float height=2.4f;
  public abstract void height();
}
class Child implements Mom,Dad
{
  public void height()
{
    float height=((Mom.height+Dad.height)/2);
    System.out.println("The height is"+height);
}
  public static void main(String args[])
{
    Child c = new Child();
    c.height();
}
}

