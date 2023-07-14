#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define k 200000 //偶数を仮定する
int a[k]; 
int b1[k/2],b2[k/2], b3[k/4],b4[k/4]; //2分割するので，長さ半分の配列を2つ用意する（できるひとは1つにまとめてよい）
int c1[k/2], c2[k/2]; //マージ用後のデータを保存する配列
int d[k];

//バブルソートのプログラム
void bubble_sort(int d[], int n)
{
  int i,j, temp;
  for (i=0; i<n-1; i++)
  {
       //隣どうしを比較して，必要に応じてデータを交換する
       for (j=0; j<n-i-1; j++)
         if (d[j] > d[j+1])
	 {
		temp=d[j];
		d[j]=d[j+1];
		d[j+1]=temp;
	 }
  }
}

void swap (int *x, int *y) {
  int temp;    // 値を一時保存する変数

  temp = *x;
  *x = *y;
  *y = temp;
}

//選択ソート
void selection_sort (int array[], int array_size) {
  int i, j, min_index;

  for (i = 0; i < array_size-1; i++) {
    min_index = i;   // 先頭要素が一番小さいとする
    for (j = i + 1; j < array_size; j++) {
      if (array[j] < array[min_index]) { min_index = j; }   // 値の比較、最小値の更新
    }
    swap(&array[min_index], &array[i]);   // 最小値と先頭要素を交換
  }
}

//マージのプログラム

// eは出力配列（ソート済のd1とd2を合わせる）
// d1は入力配列（前半）
// d2は入力配列（後半）
// nはデータ数（d1とd2の長さが同じと仮定）

void marge_sort(int e[],int d1[], int d2[], int n)
{
  int i;
  int d1_index = 0; //配列d1を見る場所
  int d2_index = 0; //配列d2を見る場所
  int e_index = 0; //配列eに代入する場所

   // 先頭から順に比較
  while (d1_index < n && d2_index < n)
  {
     if (d1[d1_index] <= d2[d2_index])
     {
         e[e_index] = d1[d1_index];
         d1_index++;
     }
     else
     {
         e[e_index] = d2[d2_index];
         d2_index++;
     }
     e_index++;
   }
   // 残ったデータの処理
   if (d1_index == n)
      for (i=d2_index; i<n; i++)
      {
         e[e_index] = d2[i];
         e_index++;
      }
   else
      for (i=d1_index; i<n; i++)
      {
         e[e_index] = d1[i];
         e_index++;
      }
}

int main()
{
  int i;
  int quarter = k/4;
  int half = k/2;
  clock_t start_b, stop_b;
  clock_t start_d, stop_d;

  //乱数の初期化
  srand((unsigned) time(NULL));

  //データの作成
  for (i=0; i<k; i++)
    a[i]=rand()%300000;

  //データのコピー（２分割用）
  for (i=0; i<quarter; i++)
  {
    b1[i]=a[i];
    b2[i]=a[i+quarter];
    b3[i]=a[i+quarter*2];
    b4[i]=a[i+quarter*3];
  }

  /*
  //データの表示（データ数が多いときにはコメントアウト）
  for (i=0;i<k;i++)
    printf("%d ",a[i]);
  printf("\n");
  printf("\n");
  */

  //バブルソートを行う
  start_b = clock();
  selection_sort(a,k);
  stop_b = clock();


  //分割統治（バブルソート＋マージソート）
  start_d = clock();
  selection_sort(b1,quarter); //前半部分のソート
  selection_sort(b2,quarter); //前半部分のソート
  selection_sort(b3,quarter); //前半部分のソート
  selection_sort(b4,quarter); //前半部分のソート
  marge_sort(c1, b1, b2, quarter);
  marge_sort(c2, b3, b4, quarter);
  marge_sort(d, c1, c2, half);
  stop_d = clock();
  /*
  //データの表示（データ数が多いときにはコメントアウト）
  //通常のバブルソート
  for (i=0;i<k;i++)
    printf("%d ",a[i]);
  printf("\n");

  //データの表示（データ数が多いときにはコメントアウト）
  //分割統治法（バブルソート＋マージ）
  for (i=0;i<k;i++)
    printf("%d ",d[i]);
  printf("\n");
  printf("\n");
  */

  //計算時間の表示
  printf("バブルソートの計算時間は%f秒です\n",(double)(stop_b - start_b) / CLOCKS_PER_SEC);
  printf("分割統治（２分割）の計算時間は%f秒です\n",(double)(stop_d - start_d) / CLOCKS_PER_SEC);
}
