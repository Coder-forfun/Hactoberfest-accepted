package com.company;

import java.io.BufferedReader;
import java.util.Scanner;
import java.util.*;

public class Question47 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        //StringBuffer temp=new StringBuffer(str);
        char temp[]=str.toCharArray();
        int i=0,j,k,c,flag=0;
        //temp.reverse();
        Arrays.sort(temp);
        String s=new String(temp);
        s=s.trim();
        char ch='a';
        System.out.println(s);
        if(s.length()>25)
        {
            System.out.println("thn we can think");
            while(i<s.length())
            {//System.out.println(ch);
                if(s.charAt(i)==ch)
                {
                    i++;
                }
                else
                {
                    ch++;
                    //System.out.println(ch);
                    if(s.charAt(i)==ch)
                    {
                       i++;
                    }
                    else
                    { flag=1;
                    }

                }
                if(flag==1)
                {
                    break;
                }
            }
            if(flag==1)
            {
                System.out.println("no");
            }
            else
            {
                System.out.println("yes");
            }

        }
        else
        {
            System.out.println("no");
        }

    }
}
