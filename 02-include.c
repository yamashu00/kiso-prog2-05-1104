// ==================================================
// 【種類】確認（プリプロセスの結果を見る）
// 【内容】#include は「ファイルの中身をそのまま貼り付ける」命令であることを確かめる
//
// 【登場するファイル】
//   ・02-include.c ……… 材料。このファイル（自分で書くソース）
//   ・sample.txt ………… 材料。hello 関数だけが書いてある部品。main は無い
//   ・02-include.i ……… 結果。gcc -E が作る「貼り付けたあとのソース」。見るだけのファイル
//       → 02-include.i は編集しない・#include しない（中に stdio.h も main もすでに全部入っている）
//
//   材料（02-include.c ＋ sample.txt） → gcc -E → 結果（02-include.i）
//
// 【まずやること】
//   ・ls を実行して、02-include.c と sample.txt が同じフォルダにあることを確かめる
//   ・gcc -E 02-include.c -o 02-include.i を実行する
//   ・tail -n 12 02-include.i を実行して、結果の最後の12行を見る
//     → sample.txt の中身（hello 関数）が、#include の場所にそのまま貼り付けられていることを確認する
//   ・gcc 02-include.c -o 02-include でコンパイルし、./02-include で「Hello」と表示されることを確認する
// 【やってみよう】
//   ① #include "sample.txt" の行を消すと、コンパイルはどうなる？ エラーメッセージを読む
//   ② #include <stdio.h> と #include "sample.txt" の順番を入れ替えると、どうなる？ 理由を 02-include.i で考える
// ==================================================
#include <stdio.h>
#include "sample.txt"

int main(void)
{
    hello();
    return 0;
}
