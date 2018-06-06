# shigeCoin(シングルスレッド版)

---

## サーバとの通信

### bool initialize(char\* teamname)

TCPソケットを用いてサーバとの通信を確立する．コネクションを確立した後，チーム名の文字列をサーバに送信する．コネクションを確立したまま関数を終了する．    

- parameter
    - teamname: チーム名

- 戻り値
    - 通信に成功した場合: true
    - 通信に失敗した場合: false

### String &get\_zero(void)

有効なナンス値による第2ハッシュ値の先頭に必要な0の個数をサーバから受信する．

- 戻り値
    - ゼロの個数(String)


### String &get\_block(void)

ブロックチェーンの先頭ブロックを取得する．受信したブロックは戻り値とする．

- 戻り値
    - ブロック(String)

### bool send\_nonce(String &nonce)

サーバにナンス値を送信する．

- parameter
    - nonce: 送信するナンス値

- 戻り値
    - ナンス値(String)

### bool finalize(void)

サーバとのコネクションを終了する．

- 戻り値
    - コネクションの終了が成功した: true
    - コネクションの終了が失敗した: false

## ナンス値の計算

### String &calc\_nonce(String &zero\_size, String &block)

blockの第2ハッシュを計算し，先頭の0がzero\_sizeで指定した個数以上となるナンス値を返す．

- parameter
    - zero\_size: ブロックチェーンが要求するゼロの個数
    - block: ハッシュ計算に使用するブロック

- 戻り値
    - ナンス値(string)

### String &hash\_sha256(String &str)

SHA-256のハッシュ値を計算する．

- parameter
    - str: キー
- 戻り値
    - ハッシュ値(String)

### bool match\_condition(String &hash, String &zero)

ハッシュ値の先頭における連続した0の個数が条件を満たしているか判定する．0の個数はzeroで指定する．

- parameter
    - hash: ハッシュ値
    - zero: 条件である先頭の0の個数
- 戻り値
    - ゼロの個数がzeroで指定した数以上連続している: true
    - ゼロの個数がzeroで指定した数以上連続していない: false

