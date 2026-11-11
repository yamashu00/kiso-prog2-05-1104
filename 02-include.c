// ==================================================
// 【種類】確認（プリプロセスの結果を見る）
// 【内容】#include は「ファイルの中身をそのまま貼り付ける」命令であることを確かめる
// 【まずやること】
//   ・gcc -E 02-include.c -o 02-include.txt を実行し、02-include.txt の一番下を見る
//   ・sample.txt の中身（hello 関数）が、そのまま貼り付けられていることを確認する
//   ・gcc 02-include.c -o 02-include でコンパイルし、実行して「Hello」と表示されることを確認する
// 【やってみよう】
//   ① #include "sample.txt" の行を消すと、コンパイルはどうなる？ エラーメッセージを読む
//   ② #include <stdio.h> と #include "sample.txt" の順番を入れ替えると、どうなる？
// ==================================================
#include <stdio.h>
#include "sample.txt"

int main(void)
{
    hello();
    return 0;
}
