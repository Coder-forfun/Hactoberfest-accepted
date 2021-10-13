package com.company;

import java.util.Scanner;

public class Question43 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s=sc.nextLine();
        int i=0,j,c=1,k=0;
        int a[]=new int[100];
        char b[]=new char[10];
        char str[]=s.toCharArray();

        for(i=0;i<str.length;i++)
        {
            c=1;


            for(j=i+1;j<str.length;j++) {
                if (str[i] == str[j] && str[j]!=' ') {
                    c++;
                    str[j]='0';

                }
            }
            if(str[i]!='0')
            {
                b[k]=str[i];
                k++;
            }

        }
      for(int l=0;l<k;l++)
          System.out.print(b[l]);



    }
}
