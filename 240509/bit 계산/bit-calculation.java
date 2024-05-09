import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        // 여기에 코드를 작성해주세요.
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int a = Integer.parseInt(br.readLine());
        int bit = 0;
        for(int i = 0; i < a; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());

            switch(st.nextToken()) {
                case "add":
                    int N = Integer.parseInt(st.nextToken());
                    bit |= 1 << N;
                    break;
                case "delete":
                    N = Integer.parseInt(st.nextToken());
                    bit -= 1 << N;
                    break;
                case "print":
                    N = Integer.parseInt(st.nextToken());
                    System.out.println((bit >> N) & 1);
                    break;
                case "toggle":
                    N = Integer.parseInt(st.nextToken());
                    bit ^= 1 << N;
                    break;
                case "clear":
                    bit = 0;
                    break;
            }
        }
    }
}