import java.util.Scanner;

public class SPIRALDISPLAY {
	
	public static void Display(int [][] a)
	{
		for (int i = 0; i < a.length; i++) {
			for (int j = 0; j < a[0].length; j++) {
				
				System.out.print(a[i][j]+" "); 
				
			}
			System.out.println();
		}
	}
	
	public static void main(String[] args) {
		
		Scanner scn = new Scanner(System.in);
		
		int row = scn.nextInt();
		int coloumn = scn.nextInt();
		
		int [][] spiralArray = new int[row][coloumn]; 
		
		for (int i = 0; i < spiralArray.length; i++) {
			for (int j = 0; j < spiralArray[0].length; j++) {
				
				spiralArray[i][j] = scn.nextInt(); 
				
			}
		}
		
		
		
		int minr = 0;
		int minc = 0;
		int maxr = spiralArray.length-1;
		int maxc = spiralArray[0].length-1;
		int tne = row * coloumn;
		int cnt = 0;
		
//		Display(spiralArray);
		

		
		while(cnt < tne)
		{
			
			// LEFT WALL

			
			for(int i = minr ,  j=minc ; i <= maxr && cnt < tne;  i++ )
			{
				System.out.println(spiralArray[i][j]);
				cnt++;
			}
			
			minc++;
			
			// BOTTOM WALL
			
			
			for(int i = maxr ,  j=minc ; j <= maxc && cnt < tne;  j++ )
			{
				System.out.println(spiralArray[i][j]);
				cnt++;
			}
			maxr--;
			
			
			for(int i = maxr ,  j=maxc ; i >= minr && cnt < tne;  i-- )
			{
				System.out.println(spiralArray[i][j]);
				cnt++;
			}
			
			maxc--;
			
			for(int i = minr ,  j=maxc ; j >= minc && cnt < tne;  j-- )
			{
				System.out.println(spiralArray[i][j]);
				cnt++;
			}
			
			minr++;
			
		}
		
	}

}

//11
//21
//31
//32
//33
//34
//35
//25
//15
//14
//13
//12
//22
//23
//24

