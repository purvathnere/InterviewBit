public class Solution {
public String solve(int[] a) {
double sum = 0;
int n = a.length;
for (int i = 0; i < n; i++)
sum += a[i];
double mean = (double)sum /
(double)n;
double sqDiff = 0;
for (int i = 0; i < n; i++)
sqDiff += (a[i] - mean) *
(a[i] - mean);
double d = (double)sqDiff / n;
String str = String.format("%.2f", d);
return str;
}
}
