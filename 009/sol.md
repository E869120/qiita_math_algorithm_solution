# 演習問題 9
文字列 S が与えられます。
qiita は文字列 S の部分文字列でしょうか。Yes か No で出力してください。

<br />

# 演習問題 9 の解答
部分文字列の定義については [2-8. 節](https://qiita.com/e869120/items/b4a0493aac567c6a7240#2-8-%E9%83%A8%E5%88%86%E5%88%97%E3%81%A8%E3%81%AF%E4%BD%95%E3%81%8B)を確認してください。

文字列 S を「S = S[0]S[1]S[2]S[3]...S[N-1]」とするとき、連続する 5 文字の部分文字列は、

* S[0]S[1]S[2]S[3]S[4]
* S[1]S[2]S[3]S[4]S[5]
* S[2]S[3]S[4]S[5]S[6]
* :
* S[N-5]S[N-4]S[N-3]S[N-2]S[N-1]

の N-4 通りしか存在しないので、これを全探索すればよいです。

詳しくは、[サンプルコード]()をご覧ください。