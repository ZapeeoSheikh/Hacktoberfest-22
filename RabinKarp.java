/* -----------------------------
Rabin Karp algo
Time complexity : O((n-m+1)*m)   // when txt = "aaaaaaaaaaaa" and pattern = "aaa" like these types
where n = length of txt string and m = length 0f pat string
Best case complexity : O(n + m)
Space complexity : O(1)
*/
import java.util.*;

public class RabinKarp{

	static void search(String pat, String txt, int q){
		int d = 256;
		int m = pat.length();
		int n = txt.length();
		int p=0;  //hash value for pattern
		int t=0;  //hash value for text
		int h=1;

		//The value of h would be "pow(d, m-1)%q"
		for(int i=0; i<m-1; i++)
			h = (h*d)%q;

		//calculate the hash value of pattern and first
		//window of text
		for(int i=0; i<m; i++){
			p = (d*p + pat.charAt(i))%q;
			t = (d*t + txt.charAt(i))%q;
		}

		//Slide the pattern over text one by one
		for(int i=0; i<=n-m; i++){
			if(p == t){
				int j=0;
				for(j=0; j<m; j++){
					if(txt.charAt(i+j) != pat.charAt(j))
						break;
				}
				if(j==m)
					System.out.println(i + " ");

			}
			if(i<n-m){
				t = (d*(t - txt.charAt(i)*h) + txt.charAt(i+m))%q;
				//If we get negative value of t
				if(t<0)
					t +=q;
			}

		}

	}
	public static void main(String[] args) {
		String txt = "Happy coding! && Enjoy coding!"; 
        String pat = "od"; 
            
          // A prime number 
        int q = 101;  
        
        System.out.println("Starting indices in txt where pattern(pat) found:");
        search(pat, txt, q);
	}
}