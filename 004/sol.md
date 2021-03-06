# 演習問題 4
ある有名人がツイートすると、すぐ 1 人のユーザーがそのツイートを **Retweet** します。

また、あるユーザーが Retweet すると、1 分後に 2 人のユーザーが **Retweet** します。例えば、

* ツイート直後（0 分後）には 1 人が
* 1 分後には 2 人が
* 2 分後には 4 人が
* 3 分後には 8 人が

リツイートするため、3 分後の時点での合計 **Retweet 数**は 15 となります。

N 分後における Retweet 数を N の式で表してください。また、Retweet 数が 10^8 を超えるのは何分後でしょうか。

<br />

# 演習問題 4 の解答
ちょうど p 分後には 2×2×...×2×2 = 2^p 人が Retweet します。べき乗については [2-1. 節](https://qiita.com/e869120/items/b4a0493aac567c6a7240#2-1-%E4%B8%AD%E5%AD%A6-1-%E5%B9%B4%E3%83%AC%E3%83%99%E3%83%AB%E3%81%BE%E3%81%A7%E3%81%AE%E5%9F%BA%E6%9C%AC%E7%9A%84%E7%94%A8%E8%AA%9E%E6%95%B0%E5%BC%8F%E3%81%AE%E6%95%B4%E7%90%86)を確認してください。

そこで、p 分後までの合計 Retweet 数は、2^0 + 2^1 + ... + 2^p となります。この値は次表のようになります。

| 0 分後 | 1 分後 | 2 分後 | 3 分後 | 4 分後 | 5 分後 |
|:---:|:---:|:---:|:---:|:---:|:---:|
| 1 人 | 3 人 | 7 人 | 15 人 | 31 人 | 63 人 |

よく考えたら 2^{p+1}-1 人となっており、これが答えです。

また、Retweet 数が 10^8 を超える条件は 2^{p+1}-1≧10^8 (⇔) 2^{p+1}≧10^8+1 (⇔) log_{2} (10^8+1) ≦ p+1、となるので、答えは p=26 分後となります。

指数関数ってすごいですね。
