package Reccursion;


public class FindOccurance {

public static  int first = -1;
public static int last = -1;

public static void findOcc(String str,int index ,char element )
{


    if(index == str.length())
    {
        System.out.println(first);
        System.out.println(last);
        return;
    }
    char ch = str.charAt( index);
    if(ch == element)
    {
        if(first == -1)
        {
            first = index;

        }
        else
        last = index;
    }
    findOcc(str,index+1,element);
}

    public static void main(String[] args) {


    String str = "dbcdabcdabcd";
    findOcc(str,0,'a');
    }

}
