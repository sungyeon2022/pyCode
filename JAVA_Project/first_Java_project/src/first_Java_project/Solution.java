package first_Java_project;

import java.util.*;

import javax.naming.spi.DirStateFactory.Result;

public class Solution {
	public int solution(String s) {
		int answer = s.length();
		int len = 1;
		for(int i = 1;i<=s.length();i++) {
		String zip =s.substring(0,i);
		StringBuilder re = new StringBuilder();
		for(int j = i;j<=s.length();j+=i) {
			String next = s.substring(j,j+i>s.length()?s.length():i+j);
			if(zip.equals(next)) len++;
			else {
				re.append((len != 1 ? len : "")+zip);
				zip=next;
				len = 1;
			}
		}
		re.append(zip);
		answer=Math.min(answer, re.length());
	}
		
		
	return answer;
}
	public static void main(String[] args) {
	}
}
