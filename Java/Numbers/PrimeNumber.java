import java.util.Scanner;
class PrimeNumber
{
		public static void main(String[] args) 
		{
			Scanner input= new Scanner(System.in);
				int num;
			System.out.print("Enter any number: ");
			num=input.nextInt();
			for(int i=2; i<num;i++)
			{
				if(num%i==0)
				{
					System.out.println("Number is not prime.");
					break;
				}

				else 
				{
					if(i==num-1)
						System.out.println("Number is prime.");
				}
			}


		}
}