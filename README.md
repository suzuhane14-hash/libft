*This project has been created as part of the 42 curriculum by omito.*

# libft

## Description

**libft** はC標準ライブラリの関数群をゼロから自分で再実装し、さらに独自の関数を加えた「自分だけのCライブラリ」を作ることが目的です。

このプロジェクトを通じて、メモリ管理・文字列操作・連結リストといったCプログラミングの基礎を深く理解することができます。

---

## Instructions

### コンパイル方法

```bash
# ライブラリをビルドする（.o とlibft.a が生成されます）
make

# オブジェクトファイルを削除
make clean

# オブジェクトファイルと libft.a を削除
make fclean

# 完全に再ビルド
make re
```

### 自分のプロジェクトへの組み込み方

1. `libft.a` と `libft.h` を自分のプロジェクトにコピーする
2. ソースファイルでヘッダをインクルードする

```c
#include "libft.h"
```

3. コンパイル時にライブラリをリンクする

```bash
cc your_file.c libft.a -o your_program
```

---

## ライブラリの詳細

### Part 1 — Libc関数の再実装

標準ライブラリ関数を `ft_` をつけて再実装したものです。

| 関数名 | 説明 |
|---|---|
| `ft_isalpha` | アルファベット文字かどうか判定する |
| `ft_isdigit` | 数字文字かどうか判定する |
| `ft_isalnum` | アルファベットまたは数字かどうか判定する |
| `ft_isascii` | ASCII文字かどうか判定する |
| `ft_isprint` | 印字可能文字かどうか判定する |
| `ft_strlen` | 文字列の長さを返す |
| `ft_memset` | メモリ領域を指定したバイト値で埋める |
| `ft_bzero` | メモリ領域をゼロで初期化する |
| `ft_memcpy` | メモリ領域をコピーする |
| `ft_memmove` | 重複を考慮してメモリ領域をコピーする |
| `ft_strlcpy` | サイズ制限付きで文字列をコピーする |
| `ft_strlcat` | サイズ制限付きで文字列を連結する |
| `ft_toupper` | 小文字を大文字に変換する |
| `ft_tolower` | 大文字を小文字に変換する |
| `ft_strchr` | 文字列中の文字を先頭から検索する |
| `ft_strrchr` | 文字列中の文字を末尾から検索する |
| `ft_strncmp` | 2つの文字列をn文字まで比較する |
| `ft_memchr` | メモリ領域から指定バイトを検索する |
| `ft_memcmp` | 2つのメモリ領域を比較する |
| `ft_strnstr` | 文字列中から部分文字列をn文字以内で検索する |
| `ft_atoi` | 文字列を整数に変換する |
| `ft_calloc` | メモリを確保してゼロで初期化する |
| `ft_strdup` | 文字列を複製して新しいメモリに返す |

### Part 2 — 追加関数

libcには存在しない、独自の関数です。

| 関数名 | 説明 |
|---|---|
| `ft_substr` | 文字列から部分文字列を切り出す |
| `ft_strjoin` | 2つの文字列を結合して新しい文字列を返す |
| `ft_strtrim` | 文字列の先頭と末尾から指定文字を取り除く |
| `ft_split` | 区切り文字で文字列を分割し、配列で返す |
| `ft_itoa` | 整数を文字列に変換する |
| `ft_strmapi` | 各文字に関数を適用した新しい文字列を返す |
| `ft_striteri` | 各文字にインデックス付きで関数を適用する |
| `ft_putchar_fd` | 指定したファイルディスクリプタに文字を出力する |
| `ft_putstr_fd` | 指定したファイルディスクリプタに文字列を出力する |
| `ft_putendl_fd` | 指定したファイルディスクリプタに文字列と改行を出力する |
| `ft_putnbr_fd` | 指定したファイルディスクリプタに整数を出力する |

### Part 3 — 連結リスト関数

以下の構造体を使ってリストを操作する関数群です。

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| 関数名 | 説明 |
|---|---|
| `ft_lstnew` | 新しいノードを作成して返す |
| `ft_lstadd_front` | リストの先頭にノードを追加する |
| `ft_lstsize` | リストのノード数を返す |
| `ft_lstlast` | リストの最後のノードを返す |
| `ft_lstadd_back` | リストの末尾にノードを追加する |
| `ft_lstdelone` | 1つのノードの内容を解放し、ノード自体も解放する |
| `ft_lstclear` | リスト全体のノードを解放する |
| `ft_lstiter` | 全ノードの内容に関数を適用する |
| `ft_lstmap` | 全ノードに関数を適用した新しいリストを返す |

---

## Resources

### 参考資料

- [42 Norminette](https://github.com/42School/norminette)
- [francinette](https://github.com/xicodomingues/francinette)
- [manの日本語訳](https://linuxjm.sourceforge.io/html/LDP_man-pages/man7/man-pages.7.html)
- [c言語例文集](https://cgengo.sakura.ne.jp/)
- [SAMURAI ENGINEER](https://www.sejuku.net/blog/)

### AIの使用について

> **使用ツール：** Claude（Anthropic）  
> **使用箇所：** README.mdの構成と記述、Makefileの書き方とコマンドの意味、連結リストの概念理解に使用しました。  
> **使用していない箇所：** Cのソースコードは自分で実装・理解しました。AIが生成したコードは一切使用していません。  
> AIが出力した内容はすべて自分で確認・修正しています。
