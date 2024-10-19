Kütüphane  derleme süreçleri hakkında arka planda neler yapıldığında dair bilgiler

Bir C programını gcc ile derlediğinizde, arka planda bir dizi adım gerçekleşir. Derleyici, kaynak kodunu makine diline çevirir ve çalıştırılabilir bir dosya üretir. Bu süreci dört ana adıma ayırabiliriz: Preprocessing (Ön işlem), Compilation (Derleme), Assembly (Montaj), Linking (Bağlama).

İşte bu adımlar ve arka planda neler olduğu:

1. Preprocessing (Ön İşlem)
Bu adımda, kaynak kodunuzda bulunan preprocessor direktifleri (#include, #define, #ifdef gibi) işlenir.
Tüm #include edilen başlık dosyaları (header files) kodunuza dahil edilir ve makro tanımları (#define) gibi işlemler yapılır.
Bu adımın çıktısı genişletilmiş bir kaynak kodudur ve .i uzantılı bir dosya oluşturulur.


gcc -E program.c -o program.i

Bu komutla ön işleme işlemini görebilirsiniz.

3. Compilation (Derleme)
Preprocessing sonrası genişletilmiş kaynak kodu, derleyici tarafından okunur ve yüksek seviyeli C kodu, assembly diline dönüştürülür.
Bu adımda, kodunuzdaki sentaks hataları da kontrol edilir. Derleyici, makine diline daha yakın olan bir dilde kod üretir, ancak bu kod henüz bir makine kodu değildir.
Çıktı olarak .s uzantılı bir assembly dosyası elde edilir.


gcc -S program.i -o program.s

5. Assembly (Montaj)
Assembly diline çevrilmiş olan kod, assembler (montajcı) adı verilen bir araç ile makine diline çevrilir. Bu aşamada, kodunuz artık işlemcinin anlayabileceği makine koduna çevrilmiş olur.
Bu adımın çıktısı, program.o uzantılı bir object file (nesne dosyası) olur. Nesne dosyası, makine kodu içerir, ancak henüz bağımsız bir program değildir.


gcc -c program.s -o program.o

6. Linking (Bağlama)
Bir program çoğu zaman sadece kendi kodunu içermez, aynı zamanda standart kütüphaneler veya diğer program parçaları ile de çalışır. Bu yüzden linker (bağlayıcı) devreye girer.
Linker, programın ihtiyaç duyduğu kütüphaneleri ve diğer nesne dosyalarını bir araya getirir ve tek bir çalıştırılabilir dosya (genellikle .out veya .exe) oluşturur.
Örneğin, standart C kütüphanesindeki printf gibi fonksiyonlar da bu aşamada programınıza dahil edilir.


gcc program.o -o program


Tüm Süreç
Bu dört adımın her biri ayrı ayrı gerçekleştirilebilir, ancak genelde gcc komutu bu adımları otomatik olarak arka planda çalıştırır. Örneğin, sadece gcc program.c -o program yazarsanız, GCC tüm bu adımları otomatik olarak uygular ve son aşamada çalıştırılabilir bir dosya üretir.

Özet:
Ön İşlem: #include ve #define gibi işlemleri yapar.
Derleme: C kodunu assembly diline çevirir.
Montaj: Assembly kodunu makine koduna çevirir (nesne dosyası üretir).
Bağlama: Nesne dosyasını ve gerekli kütüphaneleri birleştirerek çalıştırılabilir bir dosya oluşturur.
Bu adımlar, C kodunun işlenip çalıştırılabilir hale getirilmesini sağlar ve her adımda çeşitli optimizasyonlar yapılabilir.


