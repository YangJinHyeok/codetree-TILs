import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // 여기에 코드를 작성해주세요.
        final int MOD = 10_007;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());


        //0 : 안튀어나왔다 1 : 튀어나왔다.
        int[][][][] dp = new int[N + 2][2][2][2];

        dp[1][0][0][0] = 1;
        for(int i = 0; i <= N; i++) {
                //dp[0][0][0]
                dp[i+1][1][0][0] = (dp[i+1][1][0][0] +  dp[i][0][0][0]) % MOD;
                dp[i+1][0][0][1] = (dp[i+1][0][0][1] + dp[i][0][0][0]) % MOD;
                dp[i+1][1][1][1] = (dp[i+1][1][1][1] + dp[i][0][0][0]) % MOD;
                //dp[0][0][1]
                dp[i+1][1][1][0] = (dp[i+1][1][1][0] + dp[i][0][0][1]) % MOD;
                dp[i+1][0][0][0] = (dp[i+1][0][0][0] + dp[i][0][0][1]) % MOD;
                //dp[0][1][0]
                dp[i+1][1][0][1] = (dp[i+1][1][0][1] + dp[i][0][1][0]) % MOD;
                //dp[0][1][1]
                dp[i+1][1][0][0] = (dp[i+1][1][0][0] + dp[i][0][1][1]) % MOD;
                //dp[1][0][0]
                dp[i+1][0][1][1] = (dp[i+1][0][1][1] + dp[i][1][0][0]) % MOD;
                dp[i+1][0][0][0] = (dp[i+1][0][0][0] + dp[i][1][0][0]) % MOD;
                //dp[1][0][1]
                dp[i+1][0][1][0] = (dp[i+1][0][1][0] + dp[i][1][0][1]) % MOD;
                //dp[1][1][0]
                dp[i+1][0][0][1] = (dp[i+1][0][0][1] + dp[i][1][1][0]) % MOD;
                //dp[1][1][1]
                dp[i+1][0][0][0] = (dp[i+1][0][0][0] + dp[i][1][1][1]) % MOD;
        }

        System.out.println(dp[N+1][0][0][0]);

    }
}