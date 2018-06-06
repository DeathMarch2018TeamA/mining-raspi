# mining-raspi

---

## 概要

In English: [README-en.md](README-en.md)

本リポジトリは[PEAR Lab](www.is.utsunomiya-u.ac.jp/pearlab/ja/)の導入教育プログラム"DeathMarch2018"で開発したものです！


### mining-raspiとは

ブロックチェーンの生成に必要なナンス値の計算を行います．計算の前にサーバからブロックと2次ハッシュに要求する0の個数を受信し，条件を満たすナンス値を算出します．算出したナンス値はサーバに転送します．

## ビルド方法

mining-raspiをビルドするには，本レポジトリをクローンしてsrcディレクトリ内でmakeコマンドを実行してください．

```
git clone https://github.com/DeathMarch2018TeamA/mining-raspi
cd mining-raspi/src
make
```

無事ビルドが完了すれば，binディレクトリ下に実行バイナリが生成されます！

