# Number Guessing Game (Sayı Tahmin Oyunu)

Bu proje, C dili ile yazılmış basit bir konsol tabanlı sayı tahmin oyunudur.

## Oyun Hakkında

Bilgisayar 1 ile 10 arasında rastgele bir sayı tutar. Kullanıcının bu sayıyı tahmin etmek için toplam 5 hakkı vardır.

### Özellikler
- **Rastgele Sayı Üretimi:** Her oyunda 1-10 arası farklı bir sayı belirlenir.
- **Hata Kontrolü:** Geçersiz giriş yapıldığında (örneğin harf girildiğinde) hak kaybı olmaz.
- **Tekrar Oynama:** Oyun bittiğinde kullanıcıya tekrar oynama seçeneği sunulur.

## Kurulum ve Derleme

Bu projeyi derlemek için bir C derleyicisine (örneğin GCC) ihtiyacınız vardır.

Proje dizininde terminali açın ve aşağıdaki komutu çalıştırın:

```bash
gcc week5-NumberGuessingGame.c -o numberGuessGame
```

## Çalıştırma

Derleme işlemi tamamlandıktan sonra oyunu şu komutla başlatabilirsiniz:

**Windows için:**
```bash
numberGuessGame.exe
```

**Linux/Mac için:**
```bash
./numberGuessGame
```

## Nasıl Oynanır?

1. Programı çalıştırdığınızda `Guess:` yazısını göreceksiniz.
2. 1 ile 10 arasında bir sayı girip ENTER tuşuna basın.
3. Eğer tahmininiz doğruysa oyunu kazanırsınız.
4. Yanlış tahmin yaparsanız kalan haklarınız ekranda gösterilir.
5. Tüm haklarınız biterse veya kazanırsanız, oyun size tekrar oynamak isteyip istemediğinizi sorar.
   - Tekrar oynamak için `1` yazıp ENTER'a basın.
   - Çıkmak için başka bir sayı girebilirsiniz.

## Geliştirici Notları

Bu proje ödev veya pratik amaçlı hazırlanmıştır. `srand(time(NULL))` kullanılarak her çalışma için rastgelelik sağlanmıştır.
