// Java implementation of the approach
import java.io.*;
import java.util.*;

class GFG {
	
	static ArrayList<String>
	letterCombinationsUtil(int[] number, int n,
						String[] table)
	{
		
		ArrayList<String> list = new ArrayList<>();

		Queue<String> q = new LinkedList<>();
		q.add("");

		while (!q.isEmpty()) {
			String s = q.remove();

			
			if (s.length() == n)
				list.add(s);
			else {
				String val = table[number[s.length()]];
				for (int i = 0; i < val.length(); i++)
				{
					q.add(s + val.charAt(i));
				}
			}
		}
		return list;
	}

	
	static void letterCombinations(int[] number, int n)
	{
		
		String[] table
			= { "0", "1", "abc", "def", "ghi",
				"jkl", "mno", "pqrs", "tuv", "wxyz" };

		ArrayList<String> list
			= letterCombinationsUtil(number, n, table);

		// Print the contents of the list
		for (int i = 0; i < list.size(); i++) {
			System.out.print(list.get(i) + " ");
		}
	}

	// Driver code
	public static void main(String args[])
	{
		int[] number = { 2, 3 };
		int n = number.length;
	
		// Function call
		letterCombinations(number, n);
	}
}

// This code is contributed by rachana soma
