// 1564349 川崎竜澄 2018/05/22
#include <stdio.h>

int main(void) {
  double n;
  char fileName[] = "Data_1.txt"; // 読み込むファイル名
  FILE *file1;
  file1 = fopen(fileName, "r");

  while (fscanf(file1, "%lf\n", &n) != EOF) {
    printf("%lf\n",n);
  }
  fclose(file1);

  return 0;
}
/*
❯❯ ./a.out                                                       (git)-[master]
26.000000
33.500000
45.500000
15.700000
41.600000
35.400000
98.300000
79.100000
20.500000
20.500000
69.200000
34.100000
3.100000
54.300000
46.800000
11.200000
46.500000
79.500000
16.500000
43.700000
64.800000
37.500000
16.300000
78.900000
98.800000
45.600000
2.400000
10.000000
11.400000
43.500000
-999.900000
*/